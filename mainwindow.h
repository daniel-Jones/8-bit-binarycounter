#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();

		private slots:
		void on_bit_128_button_clicked();

		void on_bit_64_button_clicked();

		void on_bit_32_button_clicked();

		void on_bit_16_button_clicked();

		void on_bit_8_button_clicked();

		void on_bit_4_button_clicked();

		void on_bit_2_button_clicked();

		void on_bit_1_button_clicked();

	private:
		void calculate();
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
