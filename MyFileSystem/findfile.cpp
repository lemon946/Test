#include "findfile.h"
#include "ui_findfile.h"

FindFile::FindFile(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::FindFile)
{
    ui->setupUi(this);
}

FindFile::~FindFile()
{
    delete ui;
}
