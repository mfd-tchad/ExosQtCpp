#include "mafenetre.h"

 MaFenetre::MaFenetre() : QWidget()

{
    setFixedSize(300, 150);

    // Construction du bouton
    m_bouton = new QPushButton("Pimp mon bouton !", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.jpg"));
    m_bouton->move(60, 50);
}

 MaFenetre::MaFenetre(int p_largeur, int p_hauteur) : QWidget()
 {
     setFixedSize(p_largeur, p_hauteur);

     // Construction du bouton
     m_bouton = new QPushButton("Pimp mon bouton !", this);

     m_bouton->setFont(QFont("Comic Sans MS", 14));
     m_bouton->setCursor(Qt::PointingHandCursor);
     m_bouton->setIcon(QIcon("smile.jpg"));
     m_bouton->move(60, 50);
 }

MaFenetre::~MaFenetre()
{
    delete m_bouton;
}
