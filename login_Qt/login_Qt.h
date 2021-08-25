#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_login_Qt.h"
#include "QPixmap"
#include "secDialog.h"
using namespace std;
class login_Qt : public QMainWindow
{
    Q_OBJECT

public:
    login_Qt(QWidget *parent = Q_NULLPTR);
    
private:
    Ui::login_QtClass ui;
    secDialog* SecDialog;
public slots:
    void pushButton_clicked();
};
