#include "stdafx.h"
#include "teclado_numerico.h"

Teclado_numerico::Teclado_numerico(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	
	ui.setupUi(this);
	ui.Teclado->setVisible(false);
}

Teclado_numerico::~Teclado_numerico()
{

}

void Teclado_numerico::on_Boton_clicked()
{
	static int vez = 0;
	int duracion = 500;
	/*
	ui.Teclado_numerico->setWindowFlags(Qt::SplashScreen);
	ui.Teclado_numerico->setWindowModality(Qt::WindowModal);
	ui.Teclado_numerico->move(515,240);
	*/
	if (vez == 0)
	{
		ui.Teclado->setVisible(true);	//Hacemos que el teclado sea visible

		ui.Teclado_0->move(95,165);
		ui.Teclado_1->move(95,165);
		ui.Teclado_2->move(95,165);
		ui.Teclado_3->move(95,165);
		ui.Teclado_4->move(95,165);
		ui.Teclado_6->move(95,165);
		ui.Teclado_7->move(95,165);
		ui.Teclado_8->move(95,165);
		ui.Teclado_9->move(95,165);
		ui.Teclado_cancel->move(95,165);
		ui.Teclado_cl->move(95,165);
		ui.Teclado_ok->move(95,165);
		ui.Teclado_coma->move(95,165);


		QPropertyAnimation * animation_numrerico = new QPropertyAnimation(ui.Teclado,"geometry");
		animation_numrerico->setDuration(duracion);
		animation_numrerico->setStartValue(QRect(490,210,0,0));
		animation_numrerico->setEndValue(QRect(380,30,220,360));
		animation_numrerico->setLoopCount(1);
		animation_numrerico->start();


		QPropertyAnimation * animation_0 = new QPropertyAnimation(ui.Teclado_0,"geometry");
		animation_0->setDuration(duracion);
		animation_0->setStartValue(QRect(95,165,0,0));
		animation_0->setEndValue(QRect(80,220,60,60));
		animation_0->setLoopCount(1);
		animation_0->start();

		QPropertyAnimation * animation_1 = new QPropertyAnimation(ui.Teclado_1,"geometry");
		animation_1->setDuration(duracion);
		animation_1->setStartValue(QRect(95,165,0,0));
		animation_1->setEndValue(QRect(10,150,60,60));
		animation_1->setLoopCount(1);
		animation_1->start();

		QPropertyAnimation * animation_2 = new QPropertyAnimation(ui.Teclado_2,"geometry");
		animation_2->setDuration(duracion);
		animation_2->setStartValue(QRect(95,165,0,0));
		animation_2->setEndValue(QRect(80,150,60,60));
		animation_2->setLoopCount(1);
		animation_2->start();

		QPropertyAnimation * animation_3 = new QPropertyAnimation(ui.Teclado_3,"geometry");
		animation_3->setDuration(duracion);
		animation_3->setStartValue(QRect(95,165,0,0));
		animation_3->setEndValue(QRect(150,150,60,60));
		animation_3->setLoopCount(1);
		animation_3->start();

		QPropertyAnimation * animation_4 = new QPropertyAnimation(ui.Teclado_4,"geometry");
		animation_4->setDuration(duracion);
		animation_4->setStartValue(QRect(95,165,0,0));
		animation_4->setEndValue(QRect(10,80,60,60));
		animation_4->setLoopCount(1);
		animation_4->start();

		QPropertyAnimation * animation_5 = new QPropertyAnimation(ui.Teclado_5,"geometry");
		animation_5->setDuration(duracion);
		animation_5->setStartValue(QRect(95,165,0,0));
		animation_5->setEndValue(QRect(80,80,60,60));
		animation_5->setLoopCount(1);
		animation_5->start();

		QPropertyAnimation * animation_6 = new QPropertyAnimation(ui.Teclado_6,"geometry");
		animation_6->setDuration(duracion);
		animation_6->setStartValue(QRect(95,165,0,0));
		animation_6->setEndValue(QRect(150,80,60,60));
		animation_6->setLoopCount(1);
		animation_6->start();

		QPropertyAnimation * animation_7 = new QPropertyAnimation(ui.Teclado_7,"geometry");
		animation_7->setDuration(duracion);
		animation_7->setStartValue(QRect(95,165,0,0));
		animation_7->setEndValue(QRect(10,10,60,60));
		animation_7->setLoopCount(1);
		animation_7->start();

		QPropertyAnimation * animation_8 = new QPropertyAnimation(ui.Teclado_8,"geometry");
		animation_8->setDuration(duracion);
		animation_8->setStartValue(QRect(95,165,0,0));
		animation_8->setEndValue(QRect(80,10,60,60));
		animation_8->setLoopCount(1);
		animation_8->start();

		QPropertyAnimation * animation_9 = new QPropertyAnimation(ui.Teclado_9,"geometry");
		animation_9->setDuration(duracion);
		animation_9->setStartValue(QRect(95,165,0,0));
		animation_9->setEndValue(QRect(150,10,60,60));
		animation_9->setLoopCount(1);
		animation_9->start();

		QPropertyAnimation * animation_cancel = new QPropertyAnimation(ui.Teclado_cancel,"geometry");
		animation_cancel->setDuration(duracion);
		animation_cancel->setStartValue(QRect(95,165,0,0));
		animation_cancel->setEndValue(QRect(120,290,90,60));
		animation_cancel->setLoopCount(1);
		animation_cancel->start();

		QPropertyAnimation * animation_cl = new QPropertyAnimation(ui.Teclado_cl,"geometry");
		animation_cl->setDuration(duracion);
		animation_cl->setStartValue(QRect(95,165,0,0));
		animation_cl->setEndValue(QRect(150,220,60,60));
		animation_cl->setLoopCount(1);
		animation_cl->start();

		QPropertyAnimation * animation_ok = new QPropertyAnimation(ui.Teclado_ok,"geometry");
		animation_ok->setDuration(duracion);
		animation_ok->setStartValue(QRect(95,165,0,0));
		animation_ok->setEndValue(QRect(10,290,90,60));
		animation_ok->setLoopCount(1);
		animation_ok->start();

		QPropertyAnimation * animation_coma = new QPropertyAnimation(ui.Teclado_coma,"geometry");
		animation_coma->setDuration(duracion);
		animation_coma->setStartValue(QRect(95,165,0,0));
		animation_coma->setEndValue(QRect(10,220,60,60));
		animation_coma->setLoopCount(1);
		animation_coma->start();

		vez = 1;
	}
	else
	{
		QPropertyAnimation * animation_numrerico = new QPropertyAnimation(ui.Teclado,"geometry");
		animation_numrerico->setDuration(duracion);
		animation_numrerico->setEndValue(QRect(490,210,0,0));
		animation_numrerico->setStartValue(QRect(380,30,220,360));
		animation_numrerico->setLoopCount(1);
		animation_numrerico->start();


		QPropertyAnimation * animation_0 = new QPropertyAnimation(ui.Teclado_0,"geometry");
		animation_0->setDuration(duracion);
		animation_0->setEndValue(QRect(95,165,0,0));
		animation_0->setStartValue(QRect(80,220,60,60));
		animation_0->setLoopCount(1);
		animation_0->start();

		QPropertyAnimation * animation_1 = new QPropertyAnimation(ui.Teclado_1,"geometry");
		animation_1->setDuration(duracion);
		animation_1->setEndValue(QRect(95,165,0,0));
		animation_1->setStartValue(QRect(10,150,60,60));
		animation_1->setLoopCount(1);
		animation_1->start();

		QPropertyAnimation * animation_2 = new QPropertyAnimation(ui.Teclado_2,"geometry");
		animation_2->setDuration(duracion);
		animation_2->setEndValue(QRect(95,165,0,0));
		animation_2->setStartValue(QRect(80,150,60,60));
		animation_2->setLoopCount(1);
		animation_2->start();

		QPropertyAnimation * animation_3 = new QPropertyAnimation(ui.Teclado_3,"geometry");
		animation_3->setDuration(duracion);
		animation_3->setEndValue(QRect(95,165,0,0));
		animation_3->setStartValue(QRect(150,150,60,60));
		animation_3->setLoopCount(1);
		animation_3->start();

		QPropertyAnimation * animation_4 = new QPropertyAnimation(ui.Teclado_4,"geometry");
		animation_4->setDuration(duracion);
		animation_4->setEndValue(QRect(95,165,0,0));
		animation_4->setStartValue(QRect(10,80,60,60));
		animation_4->setLoopCount(1);
		animation_4->start();

		QPropertyAnimation * animation_5 = new QPropertyAnimation(ui.Teclado_5,"geometry");
		animation_5->setDuration(duracion);
		animation_5->setEndValue(QRect(95,165,0,0));
		animation_5->setStartValue(QRect(80,80,60,60));
		animation_5->setLoopCount(1);
		animation_5->start();

		QPropertyAnimation * animation_6 = new QPropertyAnimation(ui.Teclado_6,"geometry");
		animation_6->setDuration(duracion);
		animation_6->setEndValue(QRect(95,165,0,0));
		animation_6->setStartValue(QRect(150,80,60,60));
		animation_6->setLoopCount(1);
		animation_6->start();

		QPropertyAnimation * animation_7 = new QPropertyAnimation(ui.Teclado_7,"geometry");
		animation_7->setDuration(duracion);
		animation_7->setEndValue(QRect(95,165,0,0));
		animation_7->setStartValue(QRect(10,10,60,60));
		animation_7->setLoopCount(1);
		animation_7->start();

		QPropertyAnimation * animation_8 = new QPropertyAnimation(ui.Teclado_8,"geometry");
		animation_8->setDuration(duracion);
		animation_8->setEndValue(QRect(95,165,0,0));
		animation_8->setStartValue(QRect(80,10,60,60));
		animation_8->setLoopCount(1);
		animation_8->start();

		QPropertyAnimation * animation_9 = new QPropertyAnimation(ui.Teclado_9,"geometry");
		animation_9->setDuration(duracion);
		animation_9->setEndValue(QRect(95,165,0,0));
		animation_9->setStartValue(QRect(150,10,60,60));
		animation_9->setLoopCount(1);
		animation_9->start();

		QPropertyAnimation * animation_cancel = new QPropertyAnimation(ui.Teclado_cancel,"geometry");
		animation_cancel->setDuration(duracion);
		animation_cancel->setEndValue(QRect(95,165,0,0));
		animation_cancel->setStartValue(QRect(120,290,90,60));
		animation_cancel->setLoopCount(1);
		animation_cancel->start();

		QPropertyAnimation * animation_cl = new QPropertyAnimation(ui.Teclado_cl,"geometry");
		animation_cl->setDuration(duracion);
		animation_cl->setEndValue(QRect(95,165,0,0));
		animation_cl->setStartValue(QRect(150,220,60,60));
		animation_cl->setLoopCount(1);
		animation_cl->start();

		QPropertyAnimation * animation_ok = new QPropertyAnimation(ui.Teclado_ok,"geometry");
		animation_ok->setDuration(duracion);
		animation_ok->setEndValue(QRect(95,165,0,0));
		animation_ok->setStartValue(QRect(10,290,90,60));
		animation_ok->setLoopCount(1);
		animation_ok->start();

		QPropertyAnimation * animation_coma = new QPropertyAnimation(ui.Teclado_coma,"geometry");
		animation_coma->setDuration(duracion);
		animation_coma->setEndValue(QRect(95,165,0,0));
		animation_coma->setStartValue(QRect(10,220,60,60));
		animation_coma->setLoopCount(1);
		animation_coma->start();

		vez = 0;
	}
}
