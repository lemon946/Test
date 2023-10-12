#include "toolbar.h"
#include "ui_toolbar.h"

ToolBar::ToolBar(QWidget *parent) :
    QToolBar(parent),
    ui(new Ui::ToolBar)
{
    ui->setupUi(this);
    this->addAction("123");
}

ToolBar::~ToolBar()
{
    delete ui;
}
