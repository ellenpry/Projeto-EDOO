#pragma once
#include "Personagem.h"

class Caio : public Personagem {
public:
    Caio();

    void inicializarEventos() override;
    void tomarDecisao() override;
};
