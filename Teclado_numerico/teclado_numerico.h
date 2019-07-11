#ifndef TECLADO_NUMERICO_H
#define TECLADO_NUMERICO_H

#include <QtGui/QMainWindow>
#include "ui_teclado_numerico.h"

class Teclado_numerico : public QMainWindow
{
	Q_OBJECT

public:
	Teclado_numerico(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Teclado_numerico();

private:
	Ui::Teclado_numericoClass ui;

	public slots:
		void on_Boton_clicked();
};

#endif // TECLADO_NUMERICO_H
