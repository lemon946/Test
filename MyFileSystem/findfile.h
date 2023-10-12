#ifndef FINDFILE_H
#define FINDFILE_H

#include <QDockWidget>

namespace Ui {
class FindFile;
}

class FindFile : public QDockWidget
{
    Q_OBJECT

public:
    explicit FindFile(QWidget *parent = nullptr);
    ~FindFile();

private:
    Ui::FindFile *ui;
};

#endif // FINDFILE_H
