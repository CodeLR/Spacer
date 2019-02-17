#include "frame.h"

Frame::Frame(QWidget *parent):QFrame(parent)
{
    labelTextforLine_edit=new QLabel(this);
    butOK=new QPushButton("OK",this);
    butCancel=new QPushButton("Cancel",this);
    lineedit=new QLineEdit(this);
    layout=new QGridLayout(this);

    labelTextforLine_edit->setFont(QFont("Times", 50, 100, 0));
    labelTextforLine_edit->setText("Name");


    lineedit->setFont(QFont("Times", 50, 100, 0));
    lineedit->setText("...");
    lineedit->setSizePolicy(QSizePolicy::Expanding,
                            QSizePolicy::Preferred);
    butOK->setSizePolicy(QSizePolicy::Expanding,
                         QSizePolicy::Preferred);
    butCancel->setSizePolicy(QSizePolicy::Expanding,
                         QSizePolicy::Preferred);

    spacer=new QSpacerItem(100,0
                           /*QSizePolicy::Expanding,
                           QSizePolicy::Expanding*/);



//    layout->setColumnMinimumWidth(0, 100);
//    layout->setColumnMinimumWidth(1, 300);
//    layout->setColumnMinimumWidth(2, 100);
    layout->setHorizontalSpacing(30);
    layout->addWidget(labelTextforLine_edit,0,0,Qt::AlignCenter);
    layout->setHorizontalSpacing(30);
    layout->addWidget(lineedit,0,1);
    layout->addWidget(butOK,1,0);
    layout->setVerticalSpacing(50);
    layout->addWidget(butCancel,1,1);
    connect(lineedit,SIGNAL(editingFinished()),
            this,SLOT(clear_lineedit()));

}

void Frame::clear_lineedit()
{
    lineedit->clear();
}


