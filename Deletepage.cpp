#include "Deletepage.h"
#include "ui_Deletepage.h"
#include "Maincontrol.h"
#include "QFileDialog"
#include "ATSysDatabaseControl.h"
#include "QMessageBox"
#include <QTableWidgetItem>

Deletepage::Deletepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Deletepage)
{
    ui->setupUi(this);
    Deletepage::setWindowTitle(QString("Delete information"));
}

Deletepage::~Deletepage()
{
    delete ui;
}

//将数据库中信息显示在界面上
void Deletepage::load()
{
    QList<employee_info> list = ATSysDatabaseControl::load();
    while(ui->db_table->rowCount() > 0)
        ui->db_table->removeRow(0);
    for(int i = 0; i < list.count(); i++)
    {
        const employee_info &info = list.at(i);
        ui->db_table->insertRow(i);
        ui->db_table->setItem(i, 0,
                              new QTableWidgetItem(QString::number(info.card))
                              );
        ui->db_table->setItem(i, 1,
                              new QTableWidgetItem(info.name));
        ui->db_table->setItem(i, 2,
                              new QTableWidgetItem(info.sex));
        ui->db_table->setItem(i, 3,
                              new QTableWidgetItem(info.state));
    }
}

//返回
void Deletepage::on_delback_clicked()
{
    Maincontrol *mcl = new Maincontrol();
    mcl->show();
    this->hide();
}

//选择数据库
void Deletepage::on_btn_dbselect_clicked()
{
    QString dbPath = QFileDialog::getSaveFileName(
                    this, "选择文件",
                    ui->ted_dbpath->text(),
                    "数据库(*.db *.db3)",
                    NULL,
                    QFileDialog::DontConfirmOverwrite);
        if(dbPath.isEmpty())
            return;
        if(ATSysDatabaseControl::setDatabase(dbPath))
        {
            ui->ted_dbpath->setText(dbPath);
        }
    load();
}

//删除员工信息
void Deletepage::on_ptn_delete_clicked()
{
    if(ui->btn_card->text().isEmpty())
    {
        QMessageBox::warning(this, "warning", "You must put IDcard!");
        return;
    }
    //删除用户信息
    ATSysDatabaseControl::remove(ui->btn_card->text().toLongLong());
    ui->btn_card->clear();
    ui->btn_name->clear();
    load();
    QMessageBox::information(this, "information", "OK");
}