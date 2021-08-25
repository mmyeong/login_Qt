#include "login_Qt.h"
#include <QmessageBox>
#include <string>

login_Qt::login_Qt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    
    ui.statusBar->addPermanentWidget(ui.label_3);
    ui.statusBar->addPermanentWidget(ui.progressBar);

}
void login_Qt::pushButton_clicked() {

    QString id = ui.lineEdit_ID->text();
    QString passward = ui.lineEdit_password->text();


    //5000ms 5ÃÊ
    if (id == "test" && passward == "test") {
        QPixmap pix("/Users/SAMSUNG/Desktop/up.jpg");
        int w = ui.label_pix->width();
        int h = ui.label_pix->height();

        ui.label_pix->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        //QMessageBox::information(this, "Login", "ID and password is correct");
        //hide();
        //SecDialog = new secDialog;
        //SecDialog->show();
        ui.statusBar->showMessage("ID and Password is correct",5000);

    }
    else {
        QPixmap pix("/Users/SAMSUNG/Desktop/down.jpg");
        int w = ui.label_pix->width();
        int h = ui.label_pix->height();

        ui.label_pix->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        //QMessageBox::warning(this, "Login", "ID and password is not correct");
        ui.statusBar->showMessage("ID and Password is not correct",5000);
    }
}
