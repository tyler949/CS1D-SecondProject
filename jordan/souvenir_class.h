#ifndef SOUVENIR_CLASS_H
#define SOUVENIR_CLASS_H

#include <iostream>
#include <QString>

class souvenir
{
    private:
        QString type;
        double  price;
        int     quantity;

    public:
        // C O N S T R U C T O R S
        souvenir() :
            type    (""),
            price   (0.0),
            quantity(0) {  }
        souvenir(QString t,
                 double p,
                 int q) :
            type    (t),
            price   (p),
            quantity(q) {  }
        souvenir(const souvenir& o) :
            type    (o.type),
            price   (o.price),
            quantity(o.quantity) {  }

        // D E S T R U C T O R S
        ~souvenir() {  }

        // G E T T E R S
        QString get_type    () const { return type;     }
        double  get_price   () const { return price;    }
        int     get_quantity() const { return quantity; }

        // S E T T E R S
        void set_type    (QString t) { type     = t; }
        void set_price   (double  p) { price    = p; }
        void set_quantity(int     q) { quantity = q; }
};

#endif
