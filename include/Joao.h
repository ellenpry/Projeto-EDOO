#pragma once
#include "Personagem.h"

class Joao : public Personagem {
public:
    Joao();

    void inicializarEventos() override;
    void tomarDecisao() override;
};
