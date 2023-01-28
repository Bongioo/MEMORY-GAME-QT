#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QMessageBox>
#include <QPushButton>
#include <QPixmap>
#include <QIcon>
#include <QProcess>
#include <QApplication>

int matrice[8][8];
QString firstCard = "";
QString secondCard = "";
QPushButton *matrixButtons[8][8];
QPushButton *firstCardButton = nullptr;
QPushButton *secondCardButton = nullptr;

int pairsFound = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            matrice[i][j]=-1;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_B00_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B00->setIconSize(QSize(68,120));
            ui->B00->setFixedSize(QSize(68,70));
            ui->B00->setIcon(ButtonIcon);
            ui->B00->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;

    if (matrice[0][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg";
            firstCardButton = clickedButton;
            matrice[0][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }

        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg";
            secondCardButton = clickedButton;
            matrice[0][0]=-1;
            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B00->setIcon(ButtonIcon); ui->B11->setIcon(ButtonIcon);
                ui->B00->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B11->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B01_clicked()
{
    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B01->setIconSize(QSize(102,70));
            ui->B01->setFixedSize(QSize(68,70));
            ui->B01->setIcon(ButtonIcon);
            ui->B01->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;
    if (matrice[0][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg";
            firstCardButton = clickedButton;
            matrice[0][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg";
            secondCardButton = clickedButton;
            matrice[0][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B01->setIcon(ButtonIcon); ui->B73->setIcon(ButtonIcon);
                ui->B01->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B73->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B01->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B02_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B02->setIconSize(QSize(68,90));
            ui->B02->setFixedSize(QSize(68,70));
            ui->B02->setIcon(ButtonIcon);
            ui->B02->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[0][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg";
            firstCardButton = clickedButton;
            matrice[0][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg";
            secondCardButton = clickedButton;
            matrice[0][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B02->setIcon(ButtonIcon); ui->B14->setIcon(ButtonIcon);
                ui->B02->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B14->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B02->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B03_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B03->setIconSize(QSize(68,70));
            ui->B03->setFixedSize(QSize(68,70));
            ui->B03->setIcon(ButtonIcon);
            ui->B03->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[0][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg";
            firstCardButton = clickedButton;
            matrice[0][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }
        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg";
            secondCardButton = clickedButton;
            matrice[0][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B03->setIcon(ButtonIcon); ui->B67->setIcon(ButtonIcon);
                ui->B03->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B67->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B03->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B04_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B04->setIconSize(QSize(68,110));
            ui->B04->setFixedSize(QSize(68,70));
            ui->B04->setIcon(ButtonIcon);
            ui->B04->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;
    if (matrice[0][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg";
            firstCardButton = clickedButton;
            matrice[0][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg";
            secondCardButton = clickedButton;
            matrice[0][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B04->setIcon(ButtonIcon); ui->B10->setIcon(ButtonIcon);
                ui->B04->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B10->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B04->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B05_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B05->setIconSize(QSize(68,70));
            ui->B05->setFixedSize(QSize(68,70));
            ui->B05->setIcon(ButtonIcon);
            ui->B05->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[0][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg";
            firstCardButton = clickedButton;
            matrice[0][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg";
            secondCardButton = clickedButton;
            matrice[0][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B05->setIcon(ButtonIcon); ui->B76->setIcon(ButtonIcon);
                ui->B05->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B76->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B05->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B06_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B06->setIconSize(QSize(175,75));
            ui->B06->setFixedSize(QSize(68,70));
            ui->B06->setIcon(ButtonIcon);
            ui->B06->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[0][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg";
            firstCardButton = clickedButton;
            matrice[0][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg";
            secondCardButton = clickedButton;
            matrice[0][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B06->setIcon(ButtonIcon); ui->B37->setIcon(ButtonIcon);
                ui->B06->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B37->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B06->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B07_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B07->setIconSize(QSize(100,75));
            ui->B07->setFixedSize(QSize(68,70));
            ui->B07->setIcon(ButtonIcon);
            ui->B07->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[0][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg";
            firstCardButton = clickedButton;
            matrice[0][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg";
            secondCardButton = clickedButton;
            matrice[0][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B07->setIcon(ButtonIcon); ui->B70->setIcon(ButtonIcon);
                ui->B07->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B70->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B07->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B10_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B10->setIconSize(QSize(68,110));
            ui->B10->setFixedSize(QSize(68,70));
            ui->B10->setIcon(ButtonIcon);
            ui->B10->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg";
            firstCardButton = clickedButton;
            matrice[1][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/ee1fa268-8010-4534-90de-deb3bd59cdb2.jpg";
            secondCardButton = clickedButton;
            matrice[1][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B04->setIcon(ButtonIcon); ui->B10->setIcon(ButtonIcon);
                ui->B04->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B10->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B10->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B11_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B11->setIconSize(QSize(68,120));
            ui->B11->setFixedSize(QSize(68,70));
            ui->B11->setIcon(ButtonIcon);
            ui->B11->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg";
            firstCardButton = clickedButton;
            matrice[1][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/08864467-6de1-4b39-8aaa-a1edcb47756a.jpg";
            secondCardButton = clickedButton;
            matrice[1][1] = -1;

            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B00->setIcon(ButtonIcon); ui->B11->setIcon(ButtonIcon);
                ui->B00->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B11->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B11->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B12_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B12->setIconSize(QSize(68,70));
            ui->B12->setFixedSize(QSize(68,70));
            ui->B12->setIcon(ButtonIcon);
            ui->B12->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg";
            firstCardButton = clickedButton;
            matrice[1][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg";
            secondCardButton = clickedButton;
            matrice[1][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B12->setIcon(ButtonIcon); ui->B16->setIcon(ButtonIcon);
                ui->B12->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B16->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B12->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B13_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B13->setIconSize(QSize(68,85));
            ui->B13->setFixedSize(QSize(68,70));
            ui->B13->setIcon(ButtonIcon);
            ui->B13->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg";
            firstCardButton = clickedButton;
            matrice[1][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg";
            secondCardButton = clickedButton;
            matrice[1][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B13->setIcon(ButtonIcon); ui->B17->setIcon(ButtonIcon);
                ui->B13->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B17->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B13->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B14_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B14->setIconSize(QSize(68,90));
            ui->B14->setFixedSize(QSize(68,70));
            ui->B14->setIcon(ButtonIcon);
            ui->B14->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg";
            firstCardButton = clickedButton;
            matrice[1][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/7ffdd006-5845-4d64-bc97-4bfb3ea68e15.jpg";
            secondCardButton = clickedButton;
            matrice[1][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B02->setIcon(ButtonIcon); ui->B14->setIcon(ButtonIcon);
                ui->B02->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B14->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B14->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B15_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B15->setIconSize(QSize(90,70));
            ui->B15->setFixedSize(QSize(68,70));
            ui->B15->setIcon(ButtonIcon);
            ui->B15->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg";
            firstCardButton = clickedButton;
            matrice[1][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg";
            secondCardButton = clickedButton;
            matrice[1][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B15->setIcon(ButtonIcon); ui->B35->setIcon(ButtonIcon);
                ui->B15->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B35->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B15->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B16_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B16->setIconSize(QSize(68,70));
            ui->B16->setFixedSize(QSize(68,70));
            ui->B16->setIcon(ButtonIcon);
            ui->B16->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg";
            firstCardButton = clickedButton;
            matrice[1][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/08f84efe-a585-4196-b462-88346ea929ef.jpg";
            secondCardButton = clickedButton;
            matrice[1][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B12->setIcon(ButtonIcon); ui->B16->setIcon(ButtonIcon);
                ui->B12->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B16->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B16->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B17_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B17->setIconSize(QSize(68,85));
            ui->B17->setFixedSize(QSize(68,70));
            ui->B17->setIcon(ButtonIcon);
            ui->B17->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[1][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg";
            firstCardButton = clickedButton;
            matrice[1][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/e85efbbb-bb52-42df-96cd-7a316c7225a9.jpg";
            secondCardButton = clickedButton;
            matrice[1][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B13->setIcon(ButtonIcon); ui->B17->setIcon(ButtonIcon);
                ui->B13->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B17->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B17->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B20_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp");
            QIcon ButtonIcon(pixmap);
            ui->B20->setIconSize(QSize(128,70));
            ui->B20->setFixedSize(QSize(68,70));
            ui->B20->setIcon(ButtonIcon);
            ui->B20->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp";
            firstCardButton = clickedButton;
            matrice[2][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp";
            secondCardButton = clickedButton;
            matrice[2][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B20->setIcon(ButtonIcon); ui->B21->setIcon(ButtonIcon);
                ui->B20->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B21->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B20->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B21_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp");
            QIcon ButtonIcon(pixmap);
            ui->B21->setIconSize(QSize(128,70));
            ui->B21->setFixedSize(QSize(68,70));
            ui->B21->setIcon(ButtonIcon);
            ui->B21->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp";
            firstCardButton = clickedButton;
            matrice[2][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/1280x720_1442485145375_spiderman.webp";
            secondCardButton = clickedButton;
            matrice[2][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B20->setIcon(ButtonIcon); ui->B21->setIcon(ButtonIcon);
                ui->B20->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B21->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B21->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B22_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B22->setIconSize(QSize(68,90));
            ui->B22->setFixedSize(QSize(68,70));
            ui->B22->setIcon(ButtonIcon);
            ui->B22->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg";
            firstCardButton = clickedButton;
            matrice[2][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg";
            secondCardButton = clickedButton;
            matrice[2][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B22->setIcon(ButtonIcon); ui->B31->setIcon(ButtonIcon);
                ui->B22->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B31->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B22->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B23_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B23->setIconSize(QSize(98,70));
            ui->B23->setFixedSize(QSize(68,70));
            ui->B23->setIcon(ButtonIcon);
            ui->B23->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg";
            firstCardButton = clickedButton;
            matrice[2][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg";
            secondCardButton = clickedButton;
            matrice[2][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B23->setIcon(ButtonIcon); ui->B75->setIcon(ButtonIcon);
                ui->B23->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B75->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B23->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B24_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B24->setIconSize(QSize(68,70));
            ui->B24->setFixedSize(QSize(68,70));
            ui->B24->setIcon(ButtonIcon);
            ui->B24->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg";
            firstCardButton = clickedButton;
            matrice[2][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg";
            secondCardButton = clickedButton;
            matrice[2][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B24->setIcon(ButtonIcon); ui->B25->setIcon(ButtonIcon);
                ui->B24->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B25->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B24->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B25_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B25->setIconSize(QSize(68,70));
            ui->B25->setFixedSize(QSize(68,70));
            ui->B25->setIcon(ButtonIcon);
            ui->B25->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg";
            firstCardButton = clickedButton;
            matrice[2][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/d8f5331c-ff1a-4276-9d2b-7bc88d277f3d.jpg";
            secondCardButton = clickedButton;
            matrice[2][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B24->setIcon(ButtonIcon); ui->B25->setIcon(ButtonIcon);
                ui->B24->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B25->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B25->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B26_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B26->setIconSize(QSize(68,70));
            ui->B26->setFixedSize(QSize(68,70));
            ui->B26->setIcon(ButtonIcon);
            ui->B26->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg";
            firstCardButton = clickedButton;
            matrice[2][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg";
            secondCardButton = clickedButton;
            matrice[2][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B26->setIcon(ButtonIcon); ui->B33->setIcon(ButtonIcon);
                ui->B26->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B33->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B26->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B27_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B27->setIconSize(QSize(68,70));
            ui->B27->setFixedSize(QSize(68,70));
            ui->B27->setIcon(ButtonIcon);
            ui->B27->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[2][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg";
            firstCardButton = clickedButton;
            matrice[2][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg";
            secondCardButton = clickedButton;
            matrice[2][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B27->setIcon(ButtonIcon); ui->B46->setIcon(ButtonIcon);
                ui->B27->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B46->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B27->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B30_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B30->setIconSize(QSize(68,70));
            ui->B30->setFixedSize(QSize(68,70));
            ui->B30->setIcon(ButtonIcon);
            ui->B30->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg";
            firstCardButton = clickedButton;
            matrice[3][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg";
            secondCardButton = clickedButton;
            matrice[3][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B30->setIcon(ButtonIcon); ui->B44->setIcon(ButtonIcon);
                ui->B30->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B44->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B30->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B31_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B31->setIconSize(QSize(68,90));
            ui->B31->setFixedSize(QSize(68,70));
            ui->B31->setIcon(ButtonIcon);
            ui->B31->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg";
            firstCardButton = clickedButton;
            matrice[3][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/10eb039c-7253-4430-a2fc-c780dd26e2b9.jpg";
            secondCardButton = clickedButton;
            matrice[3][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B22->setIcon(ButtonIcon); ui->B31->setIcon(ButtonIcon);
                ui->B22->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B31->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B31->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B32_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B32->setIconSize(QSize(68,90));
            ui->B32->setFixedSize(QSize(68,70));
            ui->B32->setIcon(ButtonIcon);
            ui->B32->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg";
            firstCardButton = clickedButton;
            matrice[3][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg";
            secondCardButton = clickedButton;
            matrice[3][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B32->setIcon(ButtonIcon); ui->B42->setIcon(ButtonIcon);
                ui->B32->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B42->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B32->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B33_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B33->setIconSize(QSize(68,70));
            ui->B33->setFixedSize(QSize(68,70));
            ui->B33->setIcon(ButtonIcon);
            ui->B33->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg";
            firstCardButton = clickedButton;
            matrice[3][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/istockphoto-1438449551-170667a.jpg";
            secondCardButton = clickedButton;
            matrice[3][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B26->setIcon(ButtonIcon); ui->B33->setIcon(ButtonIcon);
                ui->B26->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B33->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B33->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B34_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B34->setIconSize(QSize(68,100));
            ui->B34->setFixedSize(QSize(68,70));
            ui->B34->setIcon(ButtonIcon);
            ui->B34->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg";
            firstCardButton = clickedButton;
            matrice[3][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg";
            secondCardButton = clickedButton;
            matrice[3][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B34->setIcon(ButtonIcon); ui->B50->setIcon(ButtonIcon);
                ui->B34->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B50->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B34->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B35_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B35->setIconSize(QSize(90,70));
            ui->B35->setFixedSize(QSize(68,70));
            ui->B35->setIcon(ButtonIcon);
            ui->B35->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg";
            firstCardButton = clickedButton;
            matrice[3][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/78f82f16-ca5d-4040-8cfa-44f6dd2f6a39.jpg";
            secondCardButton = clickedButton;
            matrice[3][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B15->setIcon(ButtonIcon); ui->B35->setIcon(ButtonIcon);
                ui->B15->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B35->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B35->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B36_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B36->setIconSize(QSize(68,70));
            ui->B36->setFixedSize(QSize(68,70));
            ui->B36->setIcon(ButtonIcon);
            ui->B36->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg";
            firstCardButton = clickedButton;
            matrice[3][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg";
            secondCardButton = clickedButton;
            matrice[3][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B36->setIcon(ButtonIcon); ui->B45->setIcon(ButtonIcon);
                ui->B36->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B45->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B36->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B37_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B37->setIconSize(QSize(175,75));
            ui->B37->setFixedSize(QSize(68,70));
            ui->B37->setIcon(ButtonIcon);
            ui->B37->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[3][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg";
            firstCardButton = clickedButton;
            matrice[3][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/343e8322-261c-4225-9266-c2a8baeeff08.jpg";
            secondCardButton = clickedButton;
            matrice[3][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B06->setIcon(ButtonIcon); ui->B37->setIcon(ButtonIcon);
                ui->B06->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B37->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B37->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B40_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B40->setIconSize(QSize(68,95));
            ui->B40->setFixedSize(QSize(68,70));
            ui->B40->setIcon(ButtonIcon);
            ui->B40->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg";
            firstCardButton = clickedButton;
            matrice[4][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg";
            secondCardButton = clickedButton;
            matrice[4][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B40->setIcon(ButtonIcon); ui->B54->setIcon(ButtonIcon);
                ui->B40->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B54->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B40->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B41_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B41->setIconSize(QSize(68,150));
            ui->B41->setFixedSize(QSize(68,70));
            ui->B41->setIcon(ButtonIcon);
            ui->B41->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg";
            firstCardButton = clickedButton;
            matrice[4][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg";
            secondCardButton = clickedButton;
            matrice[4][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B41->setIcon(ButtonIcon); ui->B55->setIcon(ButtonIcon);
                ui->B41->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B55->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B41->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B42_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B42->setIconSize(QSize(68,90));
            ui->B42->setFixedSize(QSize(68,70));
            ui->B42->setIcon(ButtonIcon);
            ui->B42->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg";
            firstCardButton = clickedButton;
            matrice[4][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/128ae5dd-120b-4a36-b452-cebefdd1ad68.jpg";
            secondCardButton = clickedButton;
            matrice[4][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B32->setIcon(ButtonIcon); ui->B42->setIcon(ButtonIcon);
                ui->B32->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B42->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B42->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B43_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B43->setIconSize(QSize(68,70));
            ui->B43->setFixedSize(QSize(68,70));
            ui->B43->setIcon(ButtonIcon);
            ui->B43->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg";
            firstCardButton = clickedButton;
            matrice[4][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg";
            secondCardButton = clickedButton;
            matrice[4][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B43->setIcon(ButtonIcon); ui->B52->setIcon(ButtonIcon);
                ui->B43->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B52->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B43->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B44_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B44->setIconSize(QSize(68,70));
            ui->B44->setFixedSize(QSize(68,70));
            ui->B44->setIcon(ButtonIcon);
            ui->B44->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg";
            firstCardButton = clickedButton;
            matrice[4][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f96a70d4-536f-4aad-9f62-f2b31a62ae26.jpg";
            secondCardButton = clickedButton;
            matrice[4][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B30->setIcon(ButtonIcon); ui->B44->setIcon(ButtonIcon);
                ui->B30->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B44->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B44->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B45_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B45->setIconSize(QSize(68,70));
            ui->B45->setFixedSize(QSize(68,70));
            ui->B45->setIcon(ButtonIcon);
            ui->B45->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg";
            firstCardButton = clickedButton;
            matrice[4][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/3412859-baby-popcorn-personaggio-cartone-animato-con-ciuccio-gratuito-vettoriale.jpg";
            secondCardButton = clickedButton;
            matrice[4][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B36->setIcon(ButtonIcon); ui->B45->setIcon(ButtonIcon);
                ui->B36->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B45->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B45->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B46_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B46->setIconSize(QSize(68,70));
            ui->B46->setFixedSize(QSize(68,70));
            ui->B46->setIcon(ButtonIcon);
            ui->B46->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg";
            firstCardButton = clickedButton;
            matrice[4][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/6002ad27-c8c6-4c79-b4a6-2af2729f4f82.jpg";
            secondCardButton = clickedButton;
            matrice[4][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B27->setIcon(ButtonIcon); ui->B46->setIcon(ButtonIcon);
                ui->B27->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B46->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B46->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B47_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B47->setIconSize(QSize(68,70));
            ui->B47->setFixedSize(QSize(68,70));
            ui->B47->setIcon(ButtonIcon);
            ui->B47->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[4][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg";
            firstCardButton = clickedButton;
            matrice[4][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg";
            secondCardButton = clickedButton;
            matrice[4][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B47->setIcon(ButtonIcon); ui->B71->setIcon(ButtonIcon);
                ui->B47->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B71->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B47->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B50_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B50->setIconSize(QSize(68,100));
            ui->B50->setFixedSize(QSize(68,70));
            ui->B50->setIcon(ButtonIcon);
            ui->B50->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg";
            firstCardButton = clickedButton;
            matrice[5][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/b0a05f29-8a1c-485c-bda2-a633ffdcc7aa.jpg";
            secondCardButton = clickedButton;
            matrice[5][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B34->setIcon(ButtonIcon); ui->B50->setIcon(ButtonIcon);
                ui->B34->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B50->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B50->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B51_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B51->setIconSize(QSize(128,70));
            ui->B51->setFixedSize(QSize(68,70));
            ui->B51->setIcon(ButtonIcon);
            ui->B51->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg";
            firstCardButton = clickedButton;
            matrice[5][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg";
            secondCardButton = clickedButton;
            matrice[5][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B51->setIcon(ButtonIcon); ui->B62->setIcon(ButtonIcon);
                ui->B51->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B62->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B51->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B52_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B52->setIconSize(QSize(68,70));
            ui->B52->setFixedSize(QSize(68,70));
            ui->B52->setIcon(ButtonIcon);
            ui->B52->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg";
            firstCardButton = clickedButton;
            matrice[5][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/172d4ae4-a613-4209-9ee6-45178e88f8a9.jpg";
            secondCardButton = clickedButton;
            matrice[5][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B43->setIcon(ButtonIcon); ui->B52->setIcon(ButtonIcon);
                ui->B43->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B52->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B52->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B53_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B53->setIconSize(QSize(128,70));
            ui->B53->setFixedSize(QSize(68,70));
            ui->B53->setIcon(ButtonIcon);
            ui->B53->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg";
            firstCardButton = clickedButton;
            matrice[5][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg";
            secondCardButton = clickedButton;
            matrice[5][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B53->setIcon(ButtonIcon); ui->B60->setIcon(ButtonIcon);
                ui->B53->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B60->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B53->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B54_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B54->setIconSize(QSize(68,95));
            ui->B54->setFixedSize(QSize(68,70));
            ui->B54->setIcon(ButtonIcon);
            ui->B54->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg";
            firstCardButton = clickedButton;
            matrice[5][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/321d084c-dee2-46c6-9406-0c029eed5e2f.jpg";
            secondCardButton = clickedButton;
            matrice[5][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B40->setIcon(ButtonIcon); ui->B54->setIcon(ButtonIcon);
                ui->B40->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B54->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B54->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B55_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B55->setIconSize(QSize(68,150));
            ui->B55->setFixedSize(QSize(68,70));
            ui->B55->setIcon(ButtonIcon);
            ui->B55->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg";
            firstCardButton = clickedButton;
            matrice[5][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/772ff19a-e924-4816-9b5e-03413437bfab.jpg";
            secondCardButton = clickedButton;
            matrice[5][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B41->setIcon(ButtonIcon); ui->B55->setIcon(ButtonIcon);
                ui->B41->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B55->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B55->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B56_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B56->setIconSize(QSize(78,70));
            ui->B56->setFixedSize(QSize(68,70));
            ui->B56->setIcon(ButtonIcon);
            ui->B56->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg";
            firstCardButton = clickedButton;
            matrice[5][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg";
            secondCardButton = clickedButton;
            matrice[5][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B56->setIcon(ButtonIcon); ui->B57->setIcon(ButtonIcon);
                ui->B56->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B57->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B56->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B57_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B57->setIconSize(QSize(78,70));
            ui->B57->setFixedSize(QSize(68,70));
            ui->B57->setIcon(ButtonIcon);
            ui->B57->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[5][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg";
            firstCardButton = clickedButton;
            matrice[5][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/71658550-4873-4d94-bc52-d1c2502cd167.jpg";
            secondCardButton = clickedButton;
            matrice[5][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B56->setIcon(ButtonIcon); ui->B57->setIcon(ButtonIcon);
                ui->B56->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B57->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B57->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B60_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B60->setIconSize(QSize(128,70));
            ui->B60->setFixedSize(QSize(68,70));
            ui->B60->setIcon(ButtonIcon);
            ui->B60->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg";
            firstCardButton = clickedButton;
            matrice[6][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fef212-e967-44e6-acea-747e4430b29a.jpg";
            secondCardButton = clickedButton;
            matrice[6][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B53->setIcon(ButtonIcon); ui->B60->setIcon(ButtonIcon);
                ui->B53->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B60->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B60->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B61_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B61->setIconSize(QSize(68,140));
            ui->B61->setFixedSize(QSize(68,70));
            ui->B61->setIcon(ButtonIcon);
            ui->B61->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg";
            firstCardButton = clickedButton;
            matrice[6][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg";
            secondCardButton = clickedButton;
            matrice[6][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B61->setIcon(ButtonIcon); ui->B74->setIcon(ButtonIcon);
                ui->B61->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B74->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B61->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B62_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B62->setIconSize(QSize(128,70));
            ui->B62->setFixedSize(QSize(68,70));
            ui->B62->setIcon(ButtonIcon);
            ui->B62->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg";
            firstCardButton = clickedButton;
            matrice[6][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/ade8d750-8d54-48b0-8cf8-e025c1230148.jpg";
            secondCardButton = clickedButton;
            matrice[6][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B51->setIcon(ButtonIcon); ui->B62->setIcon(ButtonIcon);
                ui->B51->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B62->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B62->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B63_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B63->setIconSize(QSize(68,70));
            ui->B63->setFixedSize(QSize(68,70));
            ui->B63->setIcon(ButtonIcon);
            ui->B63->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg";
            firstCardButton = clickedButton;
            matrice[6][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg";
            secondCardButton = clickedButton;
            matrice[6][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B63->setIcon(ButtonIcon); ui->B64->setIcon(ButtonIcon);
                ui->B63->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B64->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B63->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B64_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B64->setIconSize(QSize(68,70));
            ui->B64->setFixedSize(QSize(68,70));
            ui->B64->setIcon(ButtonIcon);
            ui->B64->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg";
            firstCardButton = clickedButton;
            matrice[6][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f7fa191f-cedb-498e-a2e5-59142b2fc58c.jpg";
            secondCardButton = clickedButton;
            matrice[6][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B63->setIcon(ButtonIcon); ui->B64->setIcon(ButtonIcon);
                ui->B63->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B64->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B64->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B65_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B65->setIconSize(QSize(68,70));
            ui->B65->setFixedSize(QSize(68,70));
            ui->B65->setIcon(ButtonIcon);
            ui->B65->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg";
            firstCardButton = clickedButton;
            matrice[6][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg";
            secondCardButton = clickedButton;
            matrice[6][5] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B65->setIcon(ButtonIcon); ui->B77->setIcon(ButtonIcon);
                ui->B65->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B77->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B65->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B66_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B66->setIconSize(QSize(78,70));
            ui->B66->setFixedSize(QSize(68,70));
            ui->B66->setIcon(ButtonIcon);
            ui->B66->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg";
            firstCardButton = clickedButton;
            matrice[6][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg";
            secondCardButton = clickedButton;
            matrice[6][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B66->setIcon(ButtonIcon); ui->B72->setIcon(ButtonIcon);
                ui->B66->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B72->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B66->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B67_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B67->setIconSize(QSize(68,70));
            ui->B67->setFixedSize(QSize(68,70));
            ui->B67->setIcon(ButtonIcon);
            ui->B67->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[6][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg";
            firstCardButton = clickedButton;
            matrice[6][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/f2ca2614-725d-497f-9bd0-1f5d0dbbc82c.jpg";
            secondCardButton = clickedButton;
            matrice[6][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B67->setIcon(ButtonIcon); ui->B03->setIcon(ButtonIcon);
                ui->B03->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B67->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B67->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B70_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B70->setIconSize(QSize(100,75));
            ui->B70->setFixedSize(QSize(68,70));
            ui->B70->setIcon(ButtonIcon);
            ui->B70->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][0] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg";
            firstCardButton = clickedButton;
            matrice[7][0] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/1be6d8d4-faab-4379-8aca-72c6989dda3a.jpg";
            secondCardButton = clickedButton;
            matrice[7][0] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B07->setIcon(ButtonIcon); ui->B70->setIcon(ButtonIcon);
                ui->B07->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B70->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B70->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B71_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B71->setIconSize(QSize(68,70));
            ui->B71->setFixedSize(QSize(68,70));
            ui->B71->setIcon(ButtonIcon);
            ui->B71->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][1] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg";
            firstCardButton = clickedButton;
            matrice[7][1] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/5d845bc0-a827-4994-8468-813f6ac1b842.jpg";
            secondCardButton = clickedButton;
            matrice[7][1] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B47->setIcon(ButtonIcon); ui->B71->setIcon(ButtonIcon);
                ui->B47->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B71->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B71->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B72_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B72->setIconSize(QSize(78,70));
            ui->B72->setFixedSize(QSize(68,70));
            ui->B72->setIcon(ButtonIcon);
            ui->B72->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][2] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg";
            firstCardButton = clickedButton;
            matrice[7][2] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/a51fc373-70e5-4c3e-a74d-8b3ed8c974a3.jpg";
            secondCardButton = clickedButton;
            matrice[7][2] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B66->setIcon(ButtonIcon); ui->B72->setIcon(ButtonIcon);
                ui->B66->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B72->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B72->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B73_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B73->setIconSize(QSize(102,70));
            ui->B73->setFixedSize(QSize(68,70));
            ui->B73->setIcon(ButtonIcon);
            ui->B73->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][3] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg";
            firstCardButton = clickedButton;
            matrice[7][3] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/95cf58ba-18f3-4c0f-91aa-29c56d483c19.jpg";
            secondCardButton = clickedButton;
            matrice[7][3] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B01->setIcon(ButtonIcon); ui->B73->setIcon(ButtonIcon);
                ui->B01->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B73->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B73->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B74_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B74->setIconSize(QSize(68,140));
            ui->B74->setFixedSize(QSize(68,70));
            ui->B74->setIcon(ButtonIcon);
            ui->B74->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][4] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg";
            firstCardButton = clickedButton;
            matrice[7][4] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/6ed04ed6-84a6-4cc7-9220-d08843764c3b.jpg";
            secondCardButton = clickedButton;
            matrice[7][4] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B74->setIcon(ButtonIcon); ui->B61->setIcon(ButtonIcon);
                ui->B74->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B61->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B74->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B75_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B75->setIconSize(QSize(98,70));
            ui->B75->setFixedSize(QSize(68,70));
            ui->B75->setIcon(ButtonIcon);
            ui->B75->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][5] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg";
            firstCardButton = clickedButton;
            matrice[7][5] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/682a1bc5-087e-43cf-9d6f-e842458021a9.jpg";
            secondCardButton = clickedButton;
            matrice[7][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B23->setIcon(ButtonIcon); ui->B75->setIcon(ButtonIcon);
                ui->B23->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B75->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B75->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B76_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B76->setIconSize(QSize(68,70));
            ui->B76->setFixedSize(QSize(68,70));
            ui->B76->setIcon(ButtonIcon);
            ui->B76->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][6] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg";
            firstCardButton = clickedButton;
            matrice[7][6] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/4ea02444-ea25-4706-94ce-ad2f8b10e843.jpg";
            secondCardButton = clickedButton;
            matrice[7][6] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B05->setIcon(ButtonIcon); ui->B76->setIcon(ButtonIcon);
                ui->B05->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B76->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B76->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_B77_clicked()
{
      QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg");
            QIcon ButtonIcon(pixmap);
            ui->B77->setIconSize(QSize(68,70));
            ui->B77->setFixedSize(QSize(68,70));
            ui->B77->setIcon(ButtonIcon);
            ui->B77->setText("");
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());;





    if (matrice[7][7] == -1) {
        if (firstCard == "") {
            firstCard = "C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg";
            firstCardButton = clickedButton;
            matrice[7][7] = 0;
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    matrice[i][j]=-1;
                }
            }


        } else {
            secondCard = "C:/Users/Utente/Documents/memory2/MEMORY/52f5047ae0256589e9f8d56509d233c1.jpg";
            secondCardButton = clickedButton;
            matrice[7][7] = -1;


            if (firstCard == secondCard) {
                QTimer::singleShot(1000, this, [this]() {
                QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
                                ui->B65->setIcon(ButtonIcon); ui->B77->setIcon(ButtonIcon);
                ui->B65->setStyleSheet("background-color: rgb(175, 255, 252); ");
                ui->B77->setStyleSheet("background-color: rgb(175, 255, 252); ");

});
                firstCard = "";
                secondCard = "";
                firstCardButton = nullptr;
                secondCardButton = nullptr;
                pairsFound++;
                if (pairsFound == 32) {
                    QMessageBox::information(this, "VITTORIA!", "BRAVO!, HAI TROVATO TUTTE LE COPPIE, PREMI RESET PER GIOCARE DI NUOVO!");
                }
            } else {
                QTimer::singleShot(1000, this, [this]() {
                    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                                QIcon ButtonIcon(pixmap);
               ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);

                    ui->B77->setIcon(ButtonIcon);
                    firstCardButton->setChecked(false);
                    secondCardButton->setChecked(false);
                    firstCard = "";
                    secondCard = "";
                    firstCardButton = nullptr;
                    secondCardButton = nullptr;
                });
            }
        }
    }
}

void MainWindow::on_Breset_clicked()
{
    ui->B00->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B01->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B02->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B03->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B04->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B05->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B06->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B07->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B10->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B11->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B12->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B13->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B14->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B15->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B16->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B17->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B20->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B21->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B22->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B23->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B24->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B25->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B26->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B27->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B30->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B31->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B32->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B33->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B34->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B35->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B36->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B37->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B40->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B41->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B42->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B43->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B44->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B45->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B46->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B47->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B50->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B51->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B52->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B53->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B54->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B55->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B56->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B57->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B60->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B61->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B62->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B63->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B64->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B65->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B66->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B67->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B70->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B71->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B72->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B73->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B74->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B75->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B76->setStyleSheet("background-color: rgb(97, 160, 155); ");
    ui->B77->setStyleSheet("background-color: rgb(97, 160, 155); ");
    QPixmap pixmap("C:/Users/Utente/Documents/memory2/MEMORY/file%20vuoto%20(1).webp");
                QIcon ButtonIcon(pixmap);
ui->B00->setIcon(ButtonIcon);ui->B01->setIcon(ButtonIcon);ui->B02->setIcon(ButtonIcon);ui->B03->setIcon(ButtonIcon);ui->B04->setIcon(ButtonIcon);ui->B05->setIcon(ButtonIcon);ui->B06->setIcon(ButtonIcon);ui->B07->setIcon(ButtonIcon);ui->B10->setIcon(ButtonIcon);ui->B11->setIcon(ButtonIcon);ui->B12->setIcon(ButtonIcon);ui->B13->setIcon(ButtonIcon);ui->B14->setIcon(ButtonIcon);ui->B15->setIcon(ButtonIcon);ui->B16->setIcon(ButtonIcon);ui->B17->setIcon(ButtonIcon);ui->B20->setIcon(ButtonIcon);ui->B21->setIcon(ButtonIcon);ui->B22->setIcon(ButtonIcon);ui->B23->setIcon(ButtonIcon);ui->B24->setIcon(ButtonIcon);ui->B25->setIcon(ButtonIcon);ui->B26->setIcon(ButtonIcon);ui->B27->setIcon(ButtonIcon);ui->B30->setIcon(ButtonIcon);ui->B31->setIcon(ButtonIcon);ui->B32->setIcon(ButtonIcon);ui->B33->setIcon(ButtonIcon);ui->B34->setIcon(ButtonIcon);ui->B35->setIcon(ButtonIcon);ui->B36->setIcon(ButtonIcon);ui->B37->setIcon(ButtonIcon);ui->B40->setIcon(ButtonIcon);ui->B41->setIcon(ButtonIcon);ui->B42->setIcon(ButtonIcon);ui->B43->setIcon(ButtonIcon);ui->B44->setIcon(ButtonIcon);ui->B45->setIcon(ButtonIcon);ui->B46->setIcon(ButtonIcon);ui->B47->setIcon(ButtonIcon);ui->B50->setIcon(ButtonIcon);ui->B51->setIcon(ButtonIcon);ui->B52->setIcon(ButtonIcon);ui->B53->setIcon(ButtonIcon);ui->B54->setIcon(ButtonIcon);ui->B55->setIcon(ButtonIcon);ui->B56->setIcon(ButtonIcon);ui->B57->setIcon(ButtonIcon);ui->B60->setIcon(ButtonIcon);ui->B61->setIcon(ButtonIcon);ui->B62->setIcon(ButtonIcon);ui->B63->setIcon(ButtonIcon);ui->B64->setIcon(ButtonIcon);ui->B65->setIcon(ButtonIcon);ui->B66->setIcon(ButtonIcon);ui->B67->setIcon(ButtonIcon);ui->B70->setIcon(ButtonIcon);ui->B71->setIcon(ButtonIcon);ui->B72->setIcon(ButtonIcon);ui->B73->setIcon(ButtonIcon);ui->B74->setIcon(ButtonIcon);ui->B75->setIcon(ButtonIcon);ui->B76->setIcon(ButtonIcon);ui->B77->setIcon(ButtonIcon);
    pairsFound = 0;
    firstCard = "";
    secondCard = "";
    firstCardButton = nullptr;
    secondCardButton = nullptr;

        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                matrice[i][j]=-1;
            }
        }

}




