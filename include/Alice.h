#pragma once
#include "Personagem.h"

// Classe derivada de Personagem
class Alice : public Personagem {
public:
    Alice(); // Construtor
    void inicializarEventos() override; // Inicializa eventos de Alice
    void tomarDecisao() override;       // Alice toma decisão
    void gerarFeedback() override;      // Gera feedback
};