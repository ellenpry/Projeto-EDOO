#pragma once
#include "Personagem.h"

// Classe derivada de Personagem
class Caio : public Personagem {
public:
    Caio(); // Construtor

    void inicializarEventos() override; // Inicializa eventos de Caio
    void tomarDecisao() override;       // Caio toma decisão
    void gerarFeedback() override;      // Gera feedback
};