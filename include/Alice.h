#pragma once
#include "Personagem.h"

class Alice : public Personagem {
public:
    Alice();

    void inicializarEventos() override;
    void tomarDecisao() override;
};
