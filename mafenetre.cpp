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
    QString fichier = QFileDialog::getOpenFileName(this,"Ouvrir un fichier", QString(),"Images (*.png *.gif *.jpg, *.jpeg)");
    QMessageBox::information(this, "Fichier", "Vous avez sélectionné :\n" + fichier);
 }

 void MaFenetre::ouvrirQuestion()
 {
    QString dossier = QFileDialog::getExistingDirectory(this);
    QString fichier = QFileDialog::getSaveFileName(this, "Enregistrer un fichier", dossier, "Images (*.png *.gif *.jpg, *.jpeg)");
 }

MaFenetre::~MaFenetre()
{
    delete m_boutonDialogue;
    delete m_boutonQuestion;
}
