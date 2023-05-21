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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_sales_module_clicked();

    void on_pushButton_3_clicked();

    void on_Accounts_module_clicked();

    void on_pushButton_4_clicked();

    void on_logout_clicked();

    void on_hr_payroll_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_Adminstration_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_Sales_entry_clicked();

    void on_Sale_return_clicked();

    void on_pushButton_9_clicked();

    void on_stock_clicked();

    void on_pushButton_10_clicked();

    void on_s_R_l_clicked();

    void on_pushButton_11_clicked();

    void on_c_D_L_clicked();

    void on_pushButton_12_clicked();

    void on_C_P_H_clicked();

    void on_pushButton_13_clicked();

    void on_C_L_clicked();

    void on_pushButton_14_clicked();

    void on_P_P_L_clicked();

    void on_pushButton_15_clicked();

    void on_C_P_clicked();

    void on_pushButton_16_clicked();

    void on_C_v_clicked();

    void on_pushButton_17_clicked();

    void on_B_A_clicked();

    void on_pushButton_18_clicked();

    void on_B_S_clicked();

    void on_pushButton_19_clicked();

    void on_S_P_clicked();

    void on_pushButton_20_clicked();

    void on_A_E_clicked();

    void on_pushButton_21_clicked();

    void on_E_L_clicked();

    void on_pushButton_22_clicked();

    void on_A_D_clicked();

    void on_pushButton_23_clicked();

    void on_S_P_H_clicked();

    void on_pushButton_24_clicked();

    void on_P_E_clicked();

    void on_pushButton_25_clicked();

    void on_P_L_clicked();

    void on_pushButton_26_clicked();

    void on_D_E_clicked();

    void on_pushButton_27_clicked();

    void on_D_L_clicked();

    void on_pushButton_28_clicked();

    void on_C_E_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_45_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
