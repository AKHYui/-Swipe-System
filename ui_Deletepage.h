/********************************************************************************
** Form generated from reading UI file 'Deletepage.ui'
**
** Created: Mon Oct 21 16:21:56 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPAGE_H
#define UI_DELETEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deletepage
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QLineEdit *btn_name;
    QLabel *label;
    QPushButton *ptn_release;
    QLabel *label_3;
    QLineEdit *btn_card;
    QPushButton *ptn_delete;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QTableWidget *db_table;
    QPushButton *delback;

    void setupUi(QWidget *Deletepage)
    {
        if (Deletepage->objectName().isEmpty())
            Deletepage->setObjectName(QString::fromUtf8("Deletepage"));
        Deletepage->resize(681, 460);
        widget = new QWidget(Deletepage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 681, 461));
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/new/prefix1/img/addpage.png);}"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 631, 30));
        db_select = new QHBoxLayout(layoutWidget);
        db_select->setObjectName(QString::fromUtf8("db_select"));
        db_select->setContentsMargins(0, 0, 0, 0);
        lb_db = new QLabel(layoutWidget);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));

        db_select->addWidget(lb_db);

        ted_dbpath = new QLineEdit(layoutWidget);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setReadOnly(true);

        db_select->addWidget(ted_dbpath);

        btn_dbselect = new QPushButton(layoutWidget);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));

        db_select->addWidget(btn_dbselect);

        btn_dbrefresh = new QPushButton(layoutWidget);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));

        db_select->addWidget(btn_dbrefresh);

        btn_name = new QLineEdit(widget);
        btn_name->setObjectName(QString::fromUtf8("btn_name"));
        btn_name->setGeometry(QRect(470, 380, 113, 21));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 0, 211, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        ptn_release = new QPushButton(widget);
        ptn_release->setObjectName(QString::fromUtf8("ptn_release"));
        ptn_release->setGeometry(QRect(20, 310, 321, 31));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 380, 72, 15));
        btn_card = new QLineEdit(widget);
        btn_card->setObjectName(QString::fromUtf8("btn_card"));
        btn_card->setGeometry(QRect(230, 380, 113, 21));
        ptn_delete = new QPushButton(widget);
        ptn_delete->setObjectName(QString::fromUtf8("ptn_delete"));
        ptn_delete->setGeometry(QRect(350, 310, 301, 31));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 380, 93, 61));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 380, 72, 15));
        db_table = new QTableWidget(widget);
        if (db_table->columnCount() < 4)
            db_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        db_table->setObjectName(QString::fromUtf8("db_table"));
        db_table->setGeometry(QRect(20, 120, 631, 161));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        delback = new QPushButton(widget);
        delback->setObjectName(QString::fromUtf8("delback"));
        delback->setGeometry(QRect(10, 30, 93, 28));

        retranslateUi(Deletepage);

        QMetaObject::connectSlotsByName(Deletepage);
    } // setupUi

    void retranslateUi(QWidget *Deletepage)
    {
        Deletepage->setWindowTitle(QApplication::translate("Deletepage", "Form", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("Deletepage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("Deletepage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("Deletepage", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Deletepage", "\346\263\250\351\224\200\344\277\241\346\201\257\345\271\263\345\217\260", 0, QApplication::UnicodeUTF8));
        ptn_release->setText(QApplication::translate("Deletepage", "\346\263\250\351\224\200\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Deletepage", "\345\247\223 \345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        ptn_delete->setText(QApplication::translate("Deletepage", "\345\210\240\351\231\244\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Deletepage", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Deletepage", "\345\215\241 \345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Deletepage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Deletepage", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Deletepage", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Deletepage", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        delback->setText(QApplication::translate("Deletepage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Deletepage: public Ui_Deletepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPAGE_H
