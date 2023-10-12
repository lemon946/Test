#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QMessageBox>
#include <QDir>
#include <QFileInfo>
#include <QTreeWidget>
#include <QTreeWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("文件管理器");

    //this->resize(1180,650);
    // 设置图标
    QIcon qicon(":/resources/icon_app.ico");
    this->setWindowIcon(qicon);
    //setupMenuBar();

    // 创建 QActionGroup
    QActionGroup *actionGroup = new QActionGroup(this);
    // 将这些 QAction 添加到 QActionGroup
    actionGroup->addAction(ui->action_chinese);
    actionGroup->addAction(ui->action_English);
    // 设置 QActionGroup 的单选模式
    ui->action_chinese->setChecked(true);
    actionGroup->setExclusive(true);
}

void MainWindow::setupMenuBar()
{
    // 菜单栏创建
    QMenuBar * bar = new QMenuBar();
    setMenuBar(bar);

    //QToolBar
    // 创建 "文件" 菜单
    QMenu *fileMenu = bar->addMenu(tr("文件(&F)")); // 使用"&"来标记快捷键
    QAction *exitAction = fileMenu->addAction(tr("退出(&X)"), qApp, &QCoreApplication::quit, Qt::QueuedConnection);
    //exitAction->setShortcuts(QKeySequence::Quit);
    exitAction->setShortcut(Qt::CTRL | Qt::Key_Q);

    QMenu * viewMenu = bar->addMenu("视图(&V)");


    QMenu * optionMenu = bar->addMenu("选项(&O)");

    // help menu
    QMenu *helpMenu = menuBar()->addMenu(tr("帮助(&H)"));
    QAction *aboutAct = helpMenu->addAction(tr("About(&A)"), this, &MainWindow::about);
    //   aboutAct->setToolTip(tr("Show the application's About box"));
    QAction *aboutQtAct = helpMenu->addAction(tr("About Qt(&Q)"), qApp, &QApplication::aboutQt);
    //    aboutQtAct->setToolTip(tr("Show the Qt library's About box"));
}

// show about message
void MainWindow::about()
{
    static const char message[] =
        "<p><b>FileManagerDemo</b></p>"

        "<p>Version:&nbsp;Beta2(x64)</p>"
        "<p>Author:&nbsp;&nbsp;Javier Zhou</p>"
        "<p>Date:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2021/10/07</p>"

        "<p></p>"
        "<p>Project:&nbsp;&nbsp;<a href=\"https://github.com/Jawez/FileManager\">Github repository</a>"
        "<p>Video:&nbsp;&nbsp;&nbsp;&nbsp;<a href=\"https://www.bilibili.com/video/BV1ng411L7gx\">BiliBili video</a>"
        ;

    //    QMessageBox::about(this, tr("About"), message);
    QMessageBox *msgBox = new QMessageBox(this);
    msgBox->setAttribute(Qt::WA_DeleteOnClose);
    msgBox->setWindowTitle(tr("About"));
    msgBox->setText(message);
    QPixmap pm(QLatin1String(":/resources/icon_app_64.png"));
    if (!pm.isNull())
        msgBox->setIconPixmap(pm);

    msgBox->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

