#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>

namespace Ui {
class ToolBar;
}

class ToolBar : public QToolBar
{
    Q_OBJECT

public:
    explicit ToolBar(QWidget *parent = nullptr);
    ~ToolBar();

private:
    Ui::ToolBar *ui;
};

#endif // TOOLBAR_H
