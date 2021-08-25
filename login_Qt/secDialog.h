#pragma once

#include <QWidget>
#include "ui_secDialog.h"

class secDialog : public QWidget
{
	Q_OBJECT

public:
	secDialog(QWidget *parent = Q_NULLPTR);
	~secDialog();

private:
	Ui::secDialog ui;
};
