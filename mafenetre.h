#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    public:
    MaFenetre();
    MaFenetre(int largeur, int hauteur);
    ~MaFenetre();

    private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif // MAFENETRE_H
