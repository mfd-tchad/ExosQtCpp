#include "mafenetre.h"

 MaFenetre::MaFenetre() : QWidget()

{
    setFixedSize(200, 100);

    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(50, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10,60,150,20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
}

 MaFenetre::MaFenetre(int p_largeur, int p_hauteur) : QWidget()
 {
     setFixedSize(p_largeur, p_hauteur);

     m_lcd = new QLCDNumber(this);
     m_lcd->setSegmentStyle(QLCDNumber::Flat);
     m_lcd->move(50, 20);

     m_slider = new QSlider(Qt::Horizontal, this);
     m_slider->setGeometry(10,60,150,20);

     QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
 }

MaFenetre::~MaFenetre()
{
    delete m_lcd;
    delete m_slider;
}
