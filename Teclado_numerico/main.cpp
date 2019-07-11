#include "stdafx.h"
#include "teclado_numerico.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Teclado_numerico w;
	w.show();
	return a.exec();
}
