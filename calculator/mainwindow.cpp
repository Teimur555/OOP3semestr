#include <cmath>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


// цифра 1
void MainWindow::on_push_button1_clicked()
{
    QString s;
    s=ui->line_edit->text();

    ui->line_edit->setText(s+"1");
}
// цифра 2
void MainWindow::on_push_button2_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"2");
}
// цифра 3
void MainWindow::on_push_button3_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"3");
}
// цифра 4
void MainWindow::on_push_button4_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"4");
}
// цифра 5
void MainWindow::on_push_button5_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"5");
}
// цифра 6
void MainWindow::on_push_button6_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"6");
}
// цифра 7
void MainWindow::on_push_button7_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"7");
}
// цифра 8
void MainWindow::on_push_button8_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"8");
}
// цифра 9
void MainWindow::on_push_button9_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"9");
}
// цифра 0
void MainWindow::on_push_button_zero_clicked()
{
    QString s;
    s=ui->line_edit->text();
    ui->line_edit->setText(s+"0");
}
// ","
void MainWindow::on_push_button_comma_clicked()
{
    QString s;
    if(!(ui->line_edit->text().contains('.')))
        ui->line_edit->setText(ui->line_edit->text()+'.');

}
// +
void MainWindow::on_push_button_plus_clicked()
{// при нажатии плюс значение поля запишется в первое значение
    operation = "+";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}
// -
void MainWindow::on_push_button_minus_clicked()
{
    operation = "-";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}
// *
void MainWindow::on_push_button_multiply_clicked()
{
    operation = "*";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}
//  /
void MainWindow::on_push_button_division_clicked()
{
    operation = "/";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

// =
void MainWindow::on_push_button_calc_clicked()
{
    second_value=ui->line_edit->text().toFloat();
    if (operation=="+")
    {result =first_value+second_value;}
    if (operation=="-")
    {result=first_value-second_value;}
    if (operation=="*")
    {result=first_value*second_value;}
    if (operation=="/")
    {result=first_value/second_value;}
    if (operation=="sin")
    {   PI=3.14159265;
        value=first_value*PI/180;
        result=sin(value);} //вычисляем синус
    if (operation=="cos")
    {   value=first_value*PI/180;
        result=cos(value);} //вычисляем косинус
    if (operation=="tng")
    {   PI=3.14159265;
        value=first_value*PI/180;
        result=tan(value);} //вычисляем тангенс
    if (operation=="pow")
    {result=pow(first_value,second_value);} //возведение в степень
    if(operation=="ln") //вычисляем натуральный логарифм
    {result=log(first_value);}
    if(operation=="exp")    //вычисляем экпоненту
    {result=exp(first_value);}
    ui->line_edit->setText(QString::number(result));
    first_value = result;
}


void MainWindow::on_push_buttonC_clicked()
{
    first_value = 0;
    ui->line_edit->clear();
}


void MainWindow::on_push_button_sin_clicked()
{
    operation="sin";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

void MainWindow::on_push_button_cos_clicked()
{
    operation="cos";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

void MainWindow::on_push_button_tng_clicked()
{
    operation="tng";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

void MainWindow::on_push_button_pow_clicked()
{
    operation="pow";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

void MainWindow::on_push_button_ln_clicked()
{
    operation="ln";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}

void MainWindow::on_push_button_exp_clicked()
{
    operation="exp";
    first_value=ui->line_edit->text().toFloat();
    ui->line_edit->clear();
}
