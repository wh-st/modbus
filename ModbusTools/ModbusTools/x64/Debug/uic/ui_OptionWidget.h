/********************************************************************************
** Form generated from reading UI file 'OptionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONWIDGET_H
#define UI_OPTIONWIDGET_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionWidget
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_Rtu;
    QRadioButton *rb_Tcp;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_Rtu;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QComboBox *port;
    QComboBox *databits;
    QComboBox *stopbits;
    QComboBox *baudrate;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_8;
    QComboBox *parity;
    QLabel *label_7;
    QGroupBox *groupBox_Tcp;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_2;
    QSpinBox *tcp_port;
    QLineEdit *ip;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSave;

    void setupUi(QWidget *OptionWidget)
    {
        if (OptionWidget->objectName().isEmpty())
            OptionWidget->setObjectName(QStringLiteral("OptionWidget"));
        OptionWidget->resize(482, 359);
        gridLayout_3 = new QGridLayout(OptionWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new QWidget(OptionWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rb_Rtu = new QRadioButton(widget);
        rb_Rtu->setObjectName(QStringLiteral("rb_Rtu"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        rb_Rtu->setFont(font);
        rb_Rtu->setChecked(true);

        horizontalLayout->addWidget(rb_Rtu);

        rb_Tcp = new QRadioButton(widget);
        rb_Tcp->setObjectName(QStringLiteral("rb_Tcp"));
        rb_Tcp->setFont(font);

        horizontalLayout->addWidget(rb_Tcp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_Rtu = new QGroupBox(widget);
        groupBox_Rtu->setObjectName(QStringLiteral("groupBox_Rtu"));
        groupBox_Rtu->setFont(font);
        gridLayout = new QGridLayout(groupBox_Rtu);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox_Rtu);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        port = new QComboBox(groupBox_Rtu);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimumSize(QSize(120, 0));
        port->setMaximumSize(QSize(16777215, 16777215));
        port->setFont(font1);

        gridLayout->addWidget(port, 0, 1, 1, 1);

        databits = new QComboBox(groupBox_Rtu);
        databits->setObjectName(QStringLiteral("databits"));
        databits->setMinimumSize(QSize(0, 0));
        databits->setMaximumSize(QSize(16777215, 16777215));
        databits->setFont(font1);

        gridLayout->addWidget(databits, 2, 1, 1, 1);

        stopbits = new QComboBox(groupBox_Rtu);
        stopbits->setObjectName(QStringLiteral("stopbits"));
        stopbits->setMinimumSize(QSize(0, 0));
        stopbits->setMaximumSize(QSize(16777215, 16777215));
        stopbits->setFont(font1);

        gridLayout->addWidget(stopbits, 4, 1, 1, 1);

        baudrate = new QComboBox(groupBox_Rtu);
        baudrate->setObjectName(QStringLiteral("baudrate"));
        baudrate->setMinimumSize(QSize(0, 0));
        baudrate->setMaximumSize(QSize(16777215, 16777215));
        baudrate->setFont(font1);

        gridLayout->addWidget(baudrate, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_Rtu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label = new QLabel(groupBox_Rtu);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_Rtu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        parity = new QComboBox(groupBox_Rtu);
        parity->setObjectName(QStringLiteral("parity"));
        parity->setMinimumSize(QSize(0, 0));
        parity->setMaximumSize(QSize(16777215, 16777215));
        parity->setFont(font1);

        gridLayout->addWidget(parity, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox_Rtu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_Rtu);

        groupBox_Tcp = new QGroupBox(widget);
        groupBox_Tcp->setObjectName(QStringLiteral("groupBox_Tcp"));
        groupBox_Tcp->setEnabled(false);
        groupBox_Tcp->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_Tcp);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_10 = new QLabel(groupBox_Tcp);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_Tcp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        tcp_port = new QSpinBox(groupBox_Tcp);
        tcp_port->setObjectName(QStringLiteral("tcp_port"));
        tcp_port->setMinimumSize(QSize(0, 0));
        tcp_port->setMaximum(100000);
        tcp_port->setValue(8080);

        gridLayout_2->addWidget(tcp_port, 1, 1, 1, 1);

        ip = new QLineEdit(groupBox_Tcp);
        ip->setObjectName(QStringLiteral("ip"));

        gridLayout_2->addWidget(ip, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_Tcp);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnSave = new QPushButton(OptionWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));

        horizontalLayout_3->addWidget(btnSave);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(OptionWidget);
        QObject::connect(rb_Rtu, SIGNAL(clicked()), OptionWidget, SLOT(onTypeChanged()));
        QObject::connect(rb_Tcp, SIGNAL(clicked()), OptionWidget, SLOT(onTypeChanged()));
        QObject::connect(btnSave, SIGNAL(clicked()), OptionWidget, SLOT(save()));

        QMetaObject::connectSlotsByName(OptionWidget);
    } // setupUi

    void retranslateUi(QWidget *OptionWidget)
    {
        OptionWidget->setWindowTitle(QApplication::translate("OptionWidget", "OptionWidget", Q_NULLPTR));
        rb_Rtu->setText(QApplication::translate("OptionWidget", "Modbus RTU", Q_NULLPTR));
        rb_Tcp->setText(QApplication::translate("OptionWidget", "Modbus TCP", Q_NULLPTR));
        groupBox_Rtu->setTitle(QApplication::translate("OptionWidget", "Modbus RTU", Q_NULLPTR));
        label_6->setText(QApplication::translate("OptionWidget", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("OptionWidget", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label->setText(QApplication::translate("OptionWidget", "\347\253\257\345\217\243", Q_NULLPTR));
        label_8->setText(QApplication::translate("OptionWidget", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        label_7->setText(QApplication::translate("OptionWidget", "\345\245\207\345\201\266\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        groupBox_Tcp->setTitle(QApplication::translate("OptionWidget", "Modbus TCP", Q_NULLPTR));
        label_10->setText(QApplication::translate("OptionWidget", "Port", Q_NULLPTR));
        label_2->setText(QApplication::translate("OptionWidget", "IP", Q_NULLPTR));
        ip->setText(QApplication::translate("OptionWidget", "127.0.0.1", Q_NULLPTR));
        btnSave->setText(QApplication::translate("OptionWidget", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionWidget: public Ui_OptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONWIDGET_H
