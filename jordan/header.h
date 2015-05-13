#ifndef HEADER_H
#define HEADER_H

#include "user_class.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>

class build
{
public:
    // C O N S T R U C T O R S
    build() {  }

    // D E S T R U C T O R S
    ~build() {  }

    // R E A D   I N
    void read_in();

    // R E A D  O U T
    void read_out(QVector<baseball_team*> tms);
    void souvenir_out(QVector<souvenir*> souvs);

    // G E T T E R S
    QVector<baseball_team*> get_built() { return teams; }

    // P R I N T E R S
    void print_built();

private:
    QVector<baseball_team*> teams;
};

#endif
