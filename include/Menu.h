#pragma once
#include "Jogo.h"

// Classe responsável pelo menu principal
class Menu {
public:
    void exibir(Jogo& jogo); // Controla o menu principal
private:
    // Métodos auxiliares para o menu
    void mostrarPersonagens();      
    void mostrarAtributos();        
    bool desejaJogarNovamente();   
    void sobreJogo();              
};