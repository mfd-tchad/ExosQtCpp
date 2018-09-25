#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>


class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();
    MaFenetre(int largeur, int hauteur);
    ~MaFenetre();

    private:
    QPushButton *m_bouton;
};

#endif // MAFENETRE_H
