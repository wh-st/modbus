#pragma once

#include <QtWidgets/QMainWindow>

#include "DModbusDevice.h"
#include "OptionWidget.h"
#include "ui_ModbusTools.h"
#include "WriteRegisterModel.h"

class ModbusTools : public QMainWindow
{
    Q_OBJECT

public:
    ModbusTools(QWidget *parent = Q_NULLPTR);

private:
    Ui::ModbusToolsClass ui;
    OptionWidget* option_widget_;
    DModbusDevice* device_;
    WriteRegisterModel* writeModel;
private slots:
    void OnConnect();
    void OptionShow();
    void read();
    void write();
    void readwrite();
    void typeChanged(int);
};
