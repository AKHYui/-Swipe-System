/********************************************************************************
** Form generated from reading UI file 'Selectpage.ui'
**
** Created: Mon Oct 21 16:29:28 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPAGE_H
#define UI_SELECTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selectpage
{
public:
    QWidget *widget;
    QPushButton *sel_back;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_cardID;
    QLineEdit *ted_showNumber;
    QSpacerItem *horizontalSpacer;
    QPushButton *readcard;
    QPushButton *pbn_search;
    QPushButton *pbn_searchLog;
    QTableWidget *db_table;
    QGroupBox *groupBox_2;
    QTableWidget *logTable;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QLabel *label;

    void setupUi(QWidget *Selectpage)
    {
        if (Selectpage->objectName().isEmpty())
            Selectpage->setObjectName(QString::fromUtf8("Selectpage"));
        Selectpage->resize(574, 591);
        widget = new QWidget(Selectpage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 581, 591));
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/new/prefix1/img/addpage.png);}"));
        sel_back = new QPushButton(widget);
        sel_back->setObjectName(QString::fromUtf8("sel_back"));
        sel_back->setGeometry(QRect(10, 40, 93, 28));
        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 130, 561, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_cardID = new QLabel(layoutWidget_2);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));

        horizontalLayout->addWidget(lb_cardID);

        ted_showNumber = new QLineEdit(layoutWidget_2);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));

        horizontalLayout->addWidget(ted_showNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        readcard = new QPushButton(layoutWidget_2);
        readcard->setObjectName(QString::fromUtf8("readcard"));

        horizontalLayout->addWidget(readcard);

        pbn_search = new QPushButton(layoutWidget_2);
        pbn_search->setObjectName(QString::fromUtf8("pbn_search"));

        horizontalLayout->addWidget(pbn_search);

        pbn_searchLog = new QPushButton(layoutWidget_2);
        pbn_searchLog->setObjectName(QString::fromUtf8("pbn_searchLog"));

        horizontalLayout->addWidget(pbn_searchLog);

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
        db_table->setGeometry(QRect(10, 170, 561, 192));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 360, 551, 231));
        logTable = new QTableWidget(groupBox_2);
        if (logTable->columnCount() < 3)
            logTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        logTable->setObjectName(QString::fromUtf8("logTable"));
        logTable->setGeometry(QRect(0, 20, 541, 191));
        logTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        logTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 561, 30));
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

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(Selectpage);

        QMetaObject::connectSlotsByName(Selectpage);
    } // setupUi

    void retranslateUi(QWidget *Selectpage)
    {
        Selectpage->setWindowTitle(QApplication::translate("Selectpage", "Form", 0, QApplication::UnicodeUTF8));
        sel_back->setText(QApplication::translate("Selectpage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("Selectpage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        readcard->setText(QApplication::translate("Selectpage", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        pbn_search->setText(QApplication::translate("Selectpage", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pbn_searchLog->setText(QApplication::translate("Selectpage", "\346\237\245\347\234\213\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Selectpage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Selectpage", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Selectpage", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Selectpage", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Selectpage", "\350\200\203\345\213\244\346\227\245\345\277\227\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = logTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Selectpage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = logTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Selectpage", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = logTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Selectpage", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("Selectpage", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("Selectpage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("Selectpage", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Selectpage", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\346\237\245\350\257\242\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Selectpage: public Ui_Selectpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPAGE_H
