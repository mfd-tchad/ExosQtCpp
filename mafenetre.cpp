#include "mafenetre.h"

 MaFenetre::MaFenetre() : QWidget()

{
    setFixedSize(200, 120);


    m_sliderH = new QSlider(Qt::Horizontal, this);
    m_sliderH->setRange(200,600);
    m_sliderH->setGeometry(10,60,150,20);

    m_sliderV = new QSlider(Qt::Vertical, this);
    m_sliderV->setRange(120,500);
    m_sliderV->setGeometry(170,10,20,100);

    QObject::connect(m_sliderH, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int))) ;
    QObject::connect(m_sliderV, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int))) ;
    QObject::connect(this, SIGNAL(agrandissementMax()), qApp, SLOT(quit()));
 }

 MaFenetre::MaFenetre(int p_largeur, int p_hauteur) : QWidget()
 {
     setFixedSize(p_largeur, p_hauteur);

     m_sliderH = new QSlider(Qt::Horizontal, this);
     m_sliderH->setRange(200,600);
     m_sliderH->setGeometry(10,60,150,20);

     m_sliderV = new QSlider(Qt::Vertical, this);
     m_sliderV->setRange(120,500);
     m_sliderV->setGeometry(170,10,20,100);

     QObject::connect(m_sliderH, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int))) ;
     QObject::connect(m_sliderV, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int))) ;
     QObject::connect(this, SIGNAL(agrandissementMax()), qApp, SLOT(quit()));
 }

 void MaFenetre::changerLargeur(int largeur)
 {
     setFixedSize(largeur, height());
     if (largeur ==600)
     {
         emit agrandissementMax();
     }
 }

 void MaFenetre::changerHauteur(int hauteur)
 {
     setFixedSize(width(), hauteur);
     if (hauteur == 500)
     {
         emit agrandissementMax();
     }
 }

MaFenetre::~MaFenetre()
{
    delete m_sliderH;
    delete m_sliderV;
}
