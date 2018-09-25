#include "mafenetre.h"

 MaFenetre::MaFenetre() : QWidget()

{
    setFixedSize(300, 150);

    // Construction du bouton
    m_bouton = new QPushButton("Quitter", this);

    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.jpg"));
    m_bouton->move(110, 50);

    // Connexion du clic du bouton à la fermeture de l'application
    QObject::connect(m_bouton,SIGNAL(clicked()), qApp, SLOT(quit()));
}

 MaFenetre::MaFenetre(int p_largeur, int p_hauteur) : QWidget()
 {
     setFixedSize(p_largeur, p_hauteur);

     // Construction du bouton
     m_bouton = new QPushButton("Quitter", this);

     m_bouton->setFont(QFont("Comic Sans MS", 14));
     m_bouton->setCursor(Qt::PointingHandCursor);
     m_bouton->setIcon(QIcon("smile.jpg"));
     m_bouton->move(110, 50);

     // Connexion du clic du bouton à la fermeture de l'application
     QObject::connect(m_bouton,SIGNAL(clicked()), qApp, SLOT(quit()));
 }

MaFenetre::~MaFenetre()
{
    delete m_bouton;
}
