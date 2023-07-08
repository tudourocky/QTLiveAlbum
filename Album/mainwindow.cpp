#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QAction>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create Menu
    QMenu* menu_file = menuBar() ->addMenu(tr("File(&F)"));
    // Create Action
    QAction* act_create_pro = new QAction(QIcon(":/icon/createpro.png"), tr("Create Project"), this);
    act_create_pro->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
    menu_file->addAction(act_create_pro);

    //Open Project Action
    QAction* act_open_pro = new QAction(QIcon(":/icon/openpro.png"), tr("Open Project"), this);
    act_open_pro->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
    menu_file->addAction(act_open_pro);

    //Create Settings Menu
    QMenu* menu_set = menuBar()->addMenu(tr("Settings(&S)"));
    //Set Background Music
    QAction* act_music = new QAction(QIcon(":/icon/music.png"), tr("Background Music"), this);
    act_music->setShortcut(QKeySequence(Qt::CTRL, Qt::Key_M));
    menu_set->addAction(act_music);

    //Connect Signal & Slot
    connect(act_create_pro, &QAction::triggered, this, &MainWindow::SlotCreatePro);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotCreatePro(bool)
{
    qDebug() << "slot create pro triggered" << Qt::endl;
}

