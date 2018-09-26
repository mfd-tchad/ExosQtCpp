#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QPalette>

class MaFenetre : public QWidget // On hérite de QWidget (IMPORTANT)
{
    Q_OBJECT

    public:
    MaFenetre();
    ~MaFenetre();

    public slots:
    void ouvrirDialogue();
    void ouvrirQuestion();

    private:
    QPushButton *m_boutonDialogue;
    QPushButton *m_boutonQuestion;
 };

#endif // MAFENETRE_H
