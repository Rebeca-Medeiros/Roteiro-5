#ifndef DESPESA_H
#define DESPESA_H


class Despesa
{
    public:
        double getvalor();
        void setvalor(double v);

        double gettipoDeGasto();
        void settipoDeGasto(double tdg);

    private:
        double valor;
        double tipoDeGasto;
};

#endif // DESPESA_H
