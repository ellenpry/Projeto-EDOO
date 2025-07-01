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

public:
    virtual ~Personagem() = default;

    virtual void inicializarEventos() = 0;
    virtual void tomarDecisao(); // Agora é implementado na base
    virtual void gerarFeedback(); // Tornado virtual para permitir override

    void atualizarAtributos();
    void proximoEvento(Evento& evento);
    void adicionarEvento(const Evento& evento); // novo método útil

    std::string getNome() const;

    // getters para modificar os atributos
    int& getCarisma();
    int& getResistencia();
    int& getInteligencia();

    // getters constantes (somente leitura)
    int getCarisma() const;
    int getResistencia() const;
    int getInteligencia() const;
};
