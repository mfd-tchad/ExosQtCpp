#include <QApplication>
#include "mafenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // création d'un widget qui servira de fenêtre
    MaFenetre fenetre;

    fenetre.show();
     return app.exec();
}
