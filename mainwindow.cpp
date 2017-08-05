#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	calculate();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_bit_128_button_clicked()
{
	((ui->bit_128_lcd->intValue() == 0) ? ui->bit_128_lcd->display(1) : ui->bit_128_lcd->display(0)); calculate();
}

void MainWindow::on_bit_64_button_clicked()
{
	((ui->bit_64_lcd->intValue() == 0) ? ui->bit_64_lcd->display(1) : ui->bit_64_lcd->display(0)); calculate();
}

void MainWindow::on_bit_32_button_clicked()
{
	((ui->bit_32_lcd->intValue() == 0) ? ui->bit_32_lcd->display(1) : ui->bit_32_lcd->display(0)); calculate();
}

void MainWindow::on_bit_16_button_clicked()
{
	((ui->bit_16_lcd->intValue() == 0) ? ui->bit_16_lcd->display(1) : ui->bit_16_lcd->display(0)); calculate();
}

void MainWindow::on_bit_8_button_clicked()
{
	((ui->bit_8_lcd->intValue() == 0) ? ui->bit_8_lcd->display(1) : ui->bit_8_lcd->display(0)); calculate();
}

void MainWindow::on_bit_4_button_clicked()
{
	((ui->bit_4_lcd->intValue() == 0) ? ui->bit_4_lcd->display(1) : ui->bit_4_lcd->display(0)); calculate();
}

void MainWindow::on_bit_2_button_clicked()
{
	((ui->bit_2_lcd->intValue() == 0) ? ui->bit_2_lcd->display(1) : ui->bit_2_lcd->display(0)); calculate();

}

void MainWindow::on_bit_1_button_clicked()
{
	((ui->bit_1_lcd->intValue() == 0) ? ui->bit_1_lcd->display(1) : ui->bit_1_lcd->display(0)); calculate();
}

void MainWindow::calculate()
{
	int val = 0;
	((ui->bit_1_lcd->intValue() == 1) ? val+=1 : val +=0);
	((ui->bit_2_lcd->intValue() == 1) ? val+=2 : val +=0);
	((ui->bit_4_lcd->intValue() == 1) ? val+=4 : val +=0);
	((ui->bit_8_lcd->intValue() == 1) ? val+=8 : val +=0);
	((ui->bit_16_lcd->intValue() == 1) ? val+=16 : val +=0);
	((ui->bit_32_lcd->intValue() == 1) ? val+=32 : val +=0);
	((ui->bit_64_lcd->intValue() == 1) ? val+=64 : val +=0);
	((ui->bit_128_lcd->intValue() == 1) ? val+=128 : val +=0);
	ui->binary_output_label->setText(QString::number((val)));
}


















