#include "ModbusTools.h"
#include <QtWidgets/QApplication>

#include "Option.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Option::initialize();
	ModbusTools w;
    w.show();
    return a.exec();
}
