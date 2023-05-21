#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString UserName = ui->lineEdit->text();
        QString Password = ui->lineEdit_2->text();
                if(UserName=="Babar"&&Password=="12345")
        {
                QMessageBox::information(this,"login","username and password is correct");
                ui->stackedWidget->setCurrentIndex(2);

    }
                else
                {
                    QMessageBox::warning(this,"login","username and password is not correct");
                }
}


void MainWindow::on_sales_module_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Accounts_module_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_hr_payroll_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Adminstration_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit_3->text();
    ui->lineEdit_4->text();
    ui->lineEdit_5->text();
    ui->lineEdit_6->text();
    ui->label_17->setText(ui->lineEdit_3->text());
    ui->label_18->setText(ui->lineEdit_4->text());
    ui->label_19->setText(ui->lineEdit_5->text());
    ui->label_20->setText(ui->lineEdit_6->text());
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_Sales_entry_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_Sale_return_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_stock_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_s_R_l_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_c_D_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_C_P_H_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_C_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_P_P_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_C_P_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_C_v_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
}


void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_B_A_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_B_S_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_S_P_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);
}


void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_A_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_E_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);
}


void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_A_D_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);
}


void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_S_P_H_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_P_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);
}


void MainWindow::on_pushButton_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_P_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(25);
}


void MainWindow::on_pushButton_26_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_D_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(27);
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_D_L_clicked()
{
    ui->stackedWidget->setCurrentIndex(30);
}


void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_C_E_clicked()
{
    ui->stackedWidget->setCurrentIndex(29);
}
void MainWindow::on_pushButton_29_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_30_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}



void MainWindow::on_pushButton_31_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pushButton_32_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_33_clicked()
{
    ui->lineEdit_7->text();
    ui->lineEdit_8->text();
    ui->lineEdit_9->text();
    ui->lineEdit_10->text();
    ui->label_27->setText(ui->lineEdit_7->text());
    ui->label_28->setText(ui->lineEdit_8->text());
    ui->label_29->setText(ui->lineEdit_9->text());
    ui->label_30->setText(ui->lineEdit_10->text());
}


void MainWindow::on_pushButton_34_clicked()
{
    ui->lineEdit_14->text();
    ui->lineEdit_13->text();
    ui->lineEdit_12->text();
    ui->lineEdit_16->text();
    ui->lineEdit_19->text();
    ui->lineEdit_21->text();
    ui->lineEdit_15->text();
    ui->lineEdit_17->text();
    ui->lineEdit_11->text();
    ui->lineEdit_18->text();
    ui->lineEdit_20->text();
    ui->lineEdit_22->text();
    ui->label_34->setText(ui->lineEdit_14->text());
    ui->label_36->setText(ui->lineEdit_13->text());
    ui->label_38->setText(ui->lineEdit_12->text());
    ui->label_40->setText(ui->lineEdit_16->text());
    ui->label_42->setText(ui->lineEdit_19->text());
    ui->label_44->setText(ui->lineEdit_21->text());
    ui->label_35->setText(ui->lineEdit_15->text());
    ui->label_37->setText(ui->lineEdit_17->text());
    ui->label_39->setText(ui->lineEdit_11->text());
    ui->label_41->setText(ui->lineEdit_18->text());
    ui->label_43->setText(ui->lineEdit_20->text());
    ui->label_45->setText(ui->lineEdit_22->text());
}


void MainWindow::on_pushButton_35_clicked()
{
    ui->lineEdit_23->text();
    ui->lineEdit_25->text();
    ui->lineEdit_27->text();
    ui->lineEdit_24->text();
    ui->lineEdit_26->text();
    ui->lineEdit_28->text();
    ui->label_47->setText(ui->lineEdit_23->text());
    ui->label_49->setText(ui->lineEdit_25->text());
    ui->label_51->setText(ui->lineEdit_27->text());
    ui->label_48->setText(ui->lineEdit_24->text());
    ui->label_50->setText(ui->lineEdit_26->text());
    ui->label_52->setText(ui->lineEdit_28->text());
}


void MainWindow::on_pushButton_36_clicked()
{
    ui->lineEdit_30->text();
    ui->lineEdit_31->text();
    ui->lineEdit_32->text();
    ui->lineEdit_29->text();
    ui->label_92->setText(ui->lineEdit_30->text());
    ui->label_93->setText(ui->lineEdit_31->text());
    ui->label_91->setText(ui->lineEdit_32->text());
    ui->label_90->setText(ui->lineEdit_29->text());
}


void MainWindow::on_pushButton_37_clicked()
{
    ui->lineEdit_34->text();
    ui->lineEdit_35->text();
    ui->lineEdit_33->text();
    ui->label_96->setText(ui->lineEdit_34->text());
    ui->label_95->setText(ui->lineEdit_35->text());
    ui->label_94->setText(ui->lineEdit_33->text());
}


void MainWindow::on_pushButton_38_clicked()
{
    ui->lineEdit_37->text();
    ui->lineEdit_36->text();
    ui->lineEdit_38->text();
    ui->label_99->setText(ui->lineEdit_37->text());
    ui->label_98->setText(ui->lineEdit_36->text());
    ui->label_97->setText(ui->lineEdit_38->text());
}


void MainWindow::on_pushButton_39_clicked()
{
    ui->lineEdit_40->text();
    ui->lineEdit_42->text();
    ui->lineEdit_39->text();
    ui->lineEdit_41->text();
    ui->label_101->setText(ui->lineEdit_40->text());
    ui->label_103->setText(ui->lineEdit_42->text());
    ui->label_102->setText(ui->lineEdit_39->text());
    ui->label_100->setText(ui->lineEdit_41->text());
}


void MainWindow::on_pushButton_40_clicked()
{
    ui->lineEdit_45->text();
    ui->lineEdit_44->text();
    ui->lineEdit_43->text();
    ui->lineEdit_46->text();
    ui->label_110->setText(ui->lineEdit_45->text());
    ui->label_111->setText(ui->lineEdit_44->text());
    ui->label_112->setText(ui->lineEdit_43->text());
    ui->label_113->setText(ui->lineEdit_46->text());
}


void MainWindow::on_pushButton_41_clicked()
{
    ui->lineEdit_49->text();
    ui->lineEdit_48->text();
    ui->lineEdit_50->text();
    ui->lineEdit_47->text();
    ui->label_105->setText(ui->lineEdit_49->text());
    ui->label_107->setText(ui->lineEdit_48->text());
    ui->label_106->setText(ui->lineEdit_50->text());
    ui->label_104->setText(ui->lineEdit_47->text());
}


void MainWindow::on_pushButton_42_clicked()
{
    ui->lineEdit_52->text();
    ui->lineEdit_51->text();
    ui->label_108->setText(ui->lineEdit_52->text());
    ui->label_109->setText(ui->lineEdit_51->text());
}


void MainWindow::on_pushButton_43_clicked()
{
    ui->lineEdit_53->text();
    ui->lineEdit_54->text();
    ui->lineEdit_55->text();
    ui->lineEdit_56->text();
    ui->label_114->setText(ui->lineEdit_53->text());
    ui->label_115->setText(ui->lineEdit_54->text());
    ui->label_116->setText(ui->lineEdit_55->text());
    ui->label_117->setText(ui->lineEdit_56->text());
}


void MainWindow::on_pushButton_44_clicked()
{
    ui->lineEdit_57->text();
    ui->lineEdit_58->text();
    ui->label_118->setText(ui->lineEdit_57->text());
    ui->label_119->setText(ui->lineEdit_58->text());
}


void MainWindow::on_pushButton_45_clicked()
{
    ui->lineEdit_59->text();
    ui->lineEdit_60->text();
    ui->label_118->setText(ui->lineEdit_59->text());
    ui->label_119->setText(ui->lineEdit_60->text());
}

