#include "fileview.h"
#include "ui_fileview.h"

FileView::FileView(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::FileView)
{
    ui->setupUi(this);
}

FileView::~FileView()
{
    delete ui;
}
