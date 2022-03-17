#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *e)
{
    // Objeto que perite dibujar (Picaso)
    // Como lienzo, enviamos a TODO el formulario (this)
    QPainter  painter(this);

    // Establecer un pincel azul (esfero)
    painter.setPen(Qt::blue);

    // Establecer un tipo de letra (font)
    painter.setFont(QFont("Arial", 30));

    // Dibujar un texto
    painter.drawText(rect(),Qt::AlignCenter, "Rodrigo");

    // Crear un pincel
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Establecer el nuevo pincel
    painter.setPen(pincel);

    // Dibujar una línea
    painter.drawLine(100,100, 200, 200);

    // Establecer una brocha
    painter.setBrush(Qt::lightGray);

    // Dibuar un rectángulo
    painter.drawRect(300,100,50,100);

    // Crear orto pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::darkGreen);
    pincel2.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel y otra brocha
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    // Dibujar una circunferenfcia
    painter.drawEllipse(400,100, 50, 50);

    // Dibujar un arco
    QRect rectangulo(500, 100, 50, 50);
    int anguloIni = 30 * 16;
    int anguloFin = 120 * 16;
    painter.drawArc(rectangulo, anguloIni, anguloFin);





}

