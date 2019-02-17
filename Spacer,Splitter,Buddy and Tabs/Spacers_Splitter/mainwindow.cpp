#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_frame=new Frame(this);
    setCentralWidget(m_frame);
}

MainWindow::~MainWindow()
{

}
