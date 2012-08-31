#include <QtGui/QApplication>
#include "NeuralNet.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    NeuralNet foo;
    foo.show();
    return app.exec();
}
