#pragma once
#include "Jogo.h"

class Menu {
public:
    void exibir(Jogo& jogo); // controla o menu principal
private:
    void mostrarPersonagens();
    void mostrarAtributos();
    bool desejaJogarNovamente(); // ← nova função
};
