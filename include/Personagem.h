#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Evento.h"

class Evento; // declaração antecipada

class Personagem {
protected:
    std::string nome;
    int carisma;
    int resistencia;
    int inteligencia;
    int carismaInicial;
    int resistenciaInicial;
    int inteligenciaInicial;
    int pontucaoTotal;
    std::vector<Evento> eventos;

public:
    virtual ~Personagem() = default;

    virtual void inicializarEventos() = 0;
    virtual void tomarDecisao();
    virtual void gerarFeedback();

    void adicionarEvento(const Evento& evento);
    
    std::string getNome() const;

    // getters para modificar os atributos
    int& getCarisma();
    int& getResistencia();
    int& getInteligencia();

    // getters constantes
    int getCarisma() const;
    int getResistencia() const;
    int getInteligencia() const;
};