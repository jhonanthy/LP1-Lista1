#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        Horario();
        Horario(int hora, int minuto, int segundo);
        void SetHorario(int hora, int minuto, int segundo);
        void SetHoras(int hora);
        void SetMinutos(int minuto);
        void SetSegundos(int segundo);
        void AvancaHorario();
        int GetHoras();
        int GetMinutos();
        int GetSegundos();
};

#endif // HORARIO_H
