#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QWidget>

namespace Ui {
class checkout;
}

class checkout : public QWidget
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = 0);
    ~checkout();

private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H
