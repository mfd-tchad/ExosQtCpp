#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    Q_OBJECT

    public:
    MaFenetre();
    MaFenetre(int largeur, int hauteur);
    ~MaFenetre();

    public slots:
    void changerLargeur(int largeur);
    void changerHauteur(int hauteur);

    signals:
    void agrandissementMax();

    private:
    QSlider *m_sliderH;
    QSlider *m_sliderV;
};

#endif // MAFENETRE_H
