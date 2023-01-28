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
    void on_B00_clicked();
    void on_B01_clicked();
    void on_B02_clicked();
    void on_B03_clicked();
    void on_B04_clicked();
    void on_B05_clicked();
    void on_B06_clicked();
    void on_B07_clicked();
    void on_B10_clicked();
    void on_B11_clicked();
    void on_B12_clicked();
    void on_B13_clicked();
    void on_B14_clicked();
    void on_B15_clicked();
    void on_B16_clicked();
    void on_B17_clicked();
    void on_B20_clicked();
    void on_B21_clicked();
    void on_B22_clicked();
    void on_B23_clicked();
    void on_B24_clicked();
    void on_B25_clicked();
    void on_B26_clicked();
    void on_B27_clicked();
    void on_B30_clicked();
    void on_B31_clicked();
    void on_B32_clicked();
    void on_B33_clicked();
    void on_B34_clicked();
    void on_B35_clicked();
    void on_B36_clicked();
    void on_B37_clicked();
    void on_B40_clicked();
    void on_B41_clicked();
    void on_B42_clicked();
    void on_B43_clicked();
    void on_B44_clicked();
    void on_B45_clicked();
    void on_B46_clicked();
    void on_B47_clicked();
    void on_B50_clicked();
    void on_B51_clicked();
    void on_B52_clicked();
    void on_B53_clicked();
    void on_B54_clicked();
    void on_B55_clicked();
    void on_B56_clicked();
    void on_B57_clicked();
    void on_B60_clicked();
    void on_B61_clicked();
    void on_B62_clicked();
    void on_B63_clicked();
    void on_B64_clicked();
    void on_B65_clicked();
    void on_B66_clicked();
    void on_B67_clicked();
    void on_B70_clicked();
    void on_B71_clicked();
    void on_B72_clicked();
    void on_B73_clicked();
    void on_B74_clicked();
    void on_B75_clicked();
    void on_B76_clicked();
    void on_B77_clicked();
    void on_Breset_clicked();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
