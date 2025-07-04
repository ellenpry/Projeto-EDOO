#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Evento.h"

class Evento; // declaração antecipada

// Classe base para personagens do jogo
class Personagem {
protected:
    std::string nome; // Nome do personagem

    // Atributos do personagem
    int carisma;
    int resistencia;
    int inteligencia;
    int carismaInicial;
    int resistenciaInicial;
    int inteligenciaInicial;
    int pontucaoTotal;

    std::vector<Evento> eventos; // Lista de eventos disponíveis para o personagem

public:
    virtual ~Personagem() = default;

    virtual void inicializarEventos() = 0; // Inicializa os eventos do personagem
    virtual void tomarDecisao();  // Personagem toma decisão
    virtual void gerarFeedback(); // Gera feedback

    void adicionarEvento(const Evento& evento);  // Adiciona evento à lista
    
    std::string getNome() const; // Retorna o nome do personagem

    // Getters para modificar os atributos
    int& getCarisma();
    int& getResistencia();
    int& getInteligencia();

    // Getters constantes
    int getCarisma() const;
    int getResistencia() const;
    int getInteligencia() const;
};