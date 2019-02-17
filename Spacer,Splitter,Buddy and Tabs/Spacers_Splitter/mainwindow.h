#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "frame.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Frame *m_frame;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
