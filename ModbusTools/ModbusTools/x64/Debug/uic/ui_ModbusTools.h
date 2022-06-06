/********************************************************************************
** Form generated from reading UI file 'ModbusTools.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODBUSTOOLS_H
#define UI_MODBUSTOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModbusToolsClass
{
public:
    QAction *actionquit;
    QAction *actionoption;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QSpinBox *slave;
    QLabel *label_5;
    QComboBox *Type;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnConnect;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QSpinBox *start_address_read;
    QLabel *label_4;
    QComboBox *number_read;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QSpinBox *start_address_write;
    QLabel *label_11;
    QComboBox *number_write;
    QGroupBox *groupBox_write;
    QGridLayout *gridLayout_6;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRead;
    QPushButton *btnWrite;
    QPushButton *btnReadWrite;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModbusToolsClass)
    {
        if (ModbusToolsClass->objectName().isEmpty())
            ModbusToolsClass->setObjectName(QStringLiteral("ModbusToolsClass"));
        ModbusToolsClass->resize(828, 639);
        actionquit = new QAction(ModbusToolsClass);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        actionoption = new QAction(ModbusToolsClass);
        actionoption->setObjectName(QStringLiteral("actionoption"));
        centralWidget = new QWidget(ModbusToolsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_10);

        slave = new QSpinBox(centralWidget);
        slave->setObjectName(QStringLiteral("slave"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        slave->setFont(font1);
        slave->setMaximum(100);
        slave->setValue(1);

        horizontalLayout->addWidget(slave);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(16777215, 16777215));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_5);

        Type = new QComboBox(centralWidget);
        Type->setObjectName(QStringLiteral("Type"));
        Type->setMinimumSize(QSize(120, 0));
        Type->setMaximumSize(QSize(16777215, 16777215));
        Type->setFont(font);

        horizontalLayout->addWidget(Type);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnConnect = new QPushButton(centralWidget);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setMinimumSize(QSize(120, 0));
        btnConnect->setFont(font);

        horizontalLayout->addWidget(btnConnect);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font1);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        start_address_read = new QSpinBox(groupBox_3);
        start_address_read->setObjectName(QStringLiteral("start_address_read"));
        start_address_read->setMaximum(10000000);
        start_address_read->setValue(0);

        gridLayout_4->addWidget(start_address_read, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        number_read = new QComboBox(groupBox_3);
        number_read->setObjectName(QStringLiteral("number_read"));
        number_read->setMinimumSize(QSize(120, 0));
        number_read->setMaximumSize(QSize(16777215, 16777215));
        number_read->setFont(font);

        gridLayout_4->addWidget(number_read, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        listWidget = new QListWidget(groupBox_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 2, 0, 1, 2);


        horizontalLayout_4->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setFont(font1);
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        start_address_write = new QSpinBox(groupBox_5);
        start_address_write->setObjectName(QStringLiteral("start_address_write"));
        start_address_write->setMaximum(10000000);
        start_address_write->setValue(0);

        gridLayout_5->addWidget(start_address_write, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 0));
        label_11->setMaximumSize(QSize(16777215, 16777215));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        number_write = new QComboBox(groupBox_5);
        number_write->setObjectName(QStringLiteral("number_write"));
        number_write->setMinimumSize(QSize(120, 0));
        number_write->setMaximumSize(QSize(16777215, 16777215));
        number_write->setFont(font);

        gridLayout_5->addWidget(number_write, 1, 1, 1, 1);

        groupBox_write = new QGroupBox(groupBox_5);
        groupBox_write->setObjectName(QStringLiteral("groupBox_write"));
        gridLayout_6 = new QGridLayout(groupBox_write);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        treeView = new QTreeView(groupBox_write);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout_6->addWidget(treeView, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_write, 2, 0, 1, 2);


        horizontalLayout_4->addWidget(groupBox_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnRead = new QPushButton(centralWidget);
        btnRead->setObjectName(QStringLiteral("btnRead"));

        horizontalLayout_3->addWidget(btnRead);

        btnWrite = new QPushButton(centralWidget);
        btnWrite->setObjectName(QStringLiteral("btnWrite"));

        horizontalLayout_3->addWidget(btnWrite);

        btnReadWrite = new QPushButton(centralWidget);
        btnReadWrite->setObjectName(QStringLiteral("btnReadWrite"));

        horizontalLayout_3->addWidget(btnReadWrite);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        ModbusToolsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ModbusToolsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        ModbusToolsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModbusToolsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ModbusToolsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ModbusToolsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ModbusToolsClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionquit);
        menu_2->addAction(actionoption);

        retranslateUi(ModbusToolsClass);
        QObject::connect(actionquit, SIGNAL(triggered()), ModbusToolsClass, SLOT(close()));
        QObject::connect(btnConnect, SIGNAL(clicked()), ModbusToolsClass, SLOT(OnConnect()));
        QObject::connect(actionoption, SIGNAL(triggered()), ModbusToolsClass, SLOT(OptionShow()));
        QObject::connect(btnRead, SIGNAL(clicked()), ModbusToolsClass, SLOT(read()));
        QObject::connect(btnWrite, SIGNAL(clicked()), ModbusToolsClass, SLOT(write()));
        QObject::connect(btnReadWrite, SIGNAL(clicked()), ModbusToolsClass, SLOT(readwrite()));
        QObject::connect(Type, SIGNAL(currentIndexChanged(int)), ModbusToolsClass, SLOT(typeChanged(int)));

        QMetaObject::connectSlotsByName(ModbusToolsClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModbusToolsClass)
    {
        ModbusToolsClass->setWindowTitle(QApplication::translate("ModbusToolsClass", "ModbusTools", Q_NULLPTR));
        actionquit->setText(QApplication::translate("ModbusToolsClass", "quit", Q_NULLPTR));
        actionoption->setText(QApplication::translate("ModbusToolsClass", "option", Q_NULLPTR));
        label_10->setText(QApplication::translate("ModbusToolsClass", "Slave address", Q_NULLPTR));
        label_5->setText(QApplication::translate("ModbusToolsClass", "Type", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("ModbusToolsClass", "Connect", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("ModbusToolsClass", "Read", Q_NULLPTR));
        label_3->setText(QApplication::translate("ModbusToolsClass", "Start address", Q_NULLPTR));
        label_4->setText(QApplication::translate("ModbusToolsClass", "Number of value", Q_NULLPTR));
        number_read->clear();
        number_read->insertItems(0, QStringList()
         << QApplication::translate("ModbusToolsClass", "1", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "2", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "3", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "4", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "5", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "6", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "7", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "8", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "9", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "10", Q_NULLPTR)
        );
        number_read->setCurrentText(QApplication::translate("ModbusToolsClass", "1", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("ModbusToolsClass", "result", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("ModbusToolsClass", "Write", Q_NULLPTR));
        label_9->setText(QApplication::translate("ModbusToolsClass", "Start address", Q_NULLPTR));
        label_11->setText(QApplication::translate("ModbusToolsClass", "Number of value", Q_NULLPTR));
        number_write->clear();
        number_write->insertItems(0, QStringList()
         << QApplication::translate("ModbusToolsClass", "1", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "2", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "3", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "4", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "5", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "6", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "7", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "8", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "9", Q_NULLPTR)
         << QApplication::translate("ModbusToolsClass", "10", Q_NULLPTR)
        );
        number_write->setCurrentText(QApplication::translate("ModbusToolsClass", "1", Q_NULLPTR));
        groupBox_write->setTitle(QApplication::translate("ModbusToolsClass", "result", Q_NULLPTR));
        btnRead->setText(QApplication::translate("ModbusToolsClass", "read", Q_NULLPTR));
        btnWrite->setText(QApplication::translate("ModbusToolsClass", "write", Q_NULLPTR));
        btnReadWrite->setText(QApplication::translate("ModbusToolsClass", "read/write", Q_NULLPTR));
        menu->setTitle(QApplication::translate("ModbusToolsClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("ModbusToolsClass", "\351\200\211\351\241\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModbusToolsClass: public Ui_ModbusToolsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODBUSTOOLS_H
