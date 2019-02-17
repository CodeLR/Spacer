#ifndef FRAME_H
#define FRAME_H
#include <QFrame>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QLabel>
#include <QSpacerItem>
#include <QFontMetrics>
class Frame:public QFrame
{
    Q_OBJECT
private:
    QPushButton *butOK;
    QPushButton *butCancel;
    QLineEdit *lineedit;
    QGridLayout *layout;
    QLabel *labelTextforLine_edit;

    QSpacerItem *spacer;


public:
    Frame(QWidget *parent=0);
    virtual~Frame(){}

public slots:
    void clear_lineedit();
};
#endif // FRAME_H
