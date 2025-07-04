#pragma once
#include "Personagem.h"

// Classe derivada de Personagem
class Joao : public Personagem {
public:
    Joao(); // Construtor

    void inicializarEventos() override; // Inicializa eventos de Joao
    void tomarDecisao() override;       // Joao toma decisão
    void gerarFeedback() override;      // Gera feedback
};