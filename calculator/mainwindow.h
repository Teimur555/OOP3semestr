#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_push_button1_clicked();

    void on_push_button_plus_clicked();

    void on_push_button_calc_clicked();

    void on_push_button2_clicked();

    void on_push_button3_clicked();

    void on_push_button4_clicked();

    void on_push_button5_clicked();

    void on_push_button6_clicked();

    void on_push_button7_clicked();

    void on_push_button8_clicked();

    void on_push_button9_clicked();

    void on_push_buttonC_clicked();

    void on_push_button_minus_clicked();

    void on_push_button_multiply_clicked();

    void on_push_button_division_clicked();

    void on_push_button_comma_clicked();

    void on_push_button_zero_clicked();

    void on_push_button_sin_clicked();

    void on_push_button_cos_clicked();

    void on_push_button_tng_clicked();

    void on_push_button_pow_clicked();

    void on_push_button_ln_clicked();

    void on_push_button_exp_clicked();

private:
    Ui::MainWindow *ui;

    float first_value;
    float second_value;
    float result;
    float PI;
    float value;

    QString operation;
};
#endif // MAINWINDOW_H
