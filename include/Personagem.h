#pragma once
#include <string>
#include <vector>
#include "Evento.h"

class Evento; // declaração antecipada

class Personagem {
protected:
    std::string nome;
    int carisma;
    int resistencia;
    int inteligencia;
    std::vector<Evento> eventos;
    int eventoAtual = 0;

public:
    virtual ~Personagem() = default;

    virtual void inicializarEventos() = 0;
    virtual void tomarDecisao() = 0;

    void atualizarAtributos();
    void proximoEvento(Evento& evento);
    void gerarFeedback();

    std::string getNome() const;
    int getCarisma() const;
    int getResistencia() const;
    int getInteligencia() const;
};
