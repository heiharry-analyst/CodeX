#pragma once
#pragma warning(disable:26812)
#include <QtWidgets/QMainWindow>
#include "ui_CodeX.h"

class CodeX : public QMainWindow
{
	Q_OBJECT

public:
	CodeX(QWidget *parent = Q_NULLPTR);

private:
	Ui::CodeX *ui;
};