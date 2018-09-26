#include "mafenetre.h"

 MaFenetre::MaFenetre() : QWidget()

{
    setFixedSize(300, 120);


    m_boutonDialogue = new QPushButton("Ouvrir la boite de dialogue", this);
    m_boutonDialogue->move(40,30);

    QObject::connect(m_boutonDialogue, SIGNAL(clicked()), this, SLOT(ouvrirDialogue()));

    m_boutonQuestion = new QPushButton("Ouvrir ne nouvelle boite de dialogue", this);
    m_boutonQuestion->move(40,60);

    QObject::connect(m_boutonQuestion, SIGNAL(clicked()), this, SLOT(ouvrirQuestion()));
 }

 void MaFenetre::ouvrirDialogue()
 {
    bool ok = false;
    QString pseudo = QInputDialog::getText(this, "Pseudo", "Quel est votre pseudo ?",QLineEdit::Normal,QString(),&ok);
    if (ok && !pseudo.isEmpty())
     {
        QMessageBox::information(this, "Pseudo", "Bonjour " + pseudo + ", ça va ?");
     }
    else
     {
        QMessageBox::critical(this, "Pseudo", "Vous n'avez pas voulu donner votre nom… snif.");
     }
 }

 void MaFenetre::ouvrirQuestion()
 {
     int reponse = QMessageBox::question(this, "Interrogatoire", "Dites voir, <strong>Etes vous vraiment un zéro ? !</strong>", QMessageBox::Yes | QMessageBox::No);
     if (reponse == QMessageBox::Yes)
     {
         QMessageBox::information(this, "Interrogatoire", "Alors bienvenue chezles Zéros !");
     }
     else if (reponse == QMessageBox::No)
     {
         QMessageBox::critical(this, "Interrogatoire", "Tricheur ! Menteur ! Voleur ! Ingrat ! Lâche ! Traître !\nSors d'ici ou j'appelle la police !");
     }
 }

MaFenetre::~MaFenetre()
{
    delete m_boutonDialogue;
}
