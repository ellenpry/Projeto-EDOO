#include <iostream>
#include "../include/Autista.h"

// funcao principal do programa
int main() {
    // cria um personagem do tipo autista
    Autista p1(L"Ana");

    // mostra o estado inicial
    std::wcout << L"estado inicial:" << std::endl;
    p1.mostrarEstado();

    // personagem passa por algumas situacoes
    std::wcout << std::endl << L"simulando situacoes..." << std::endl;
    p1.reagirSituacao(L"ambiente barulhento");
    p1.reagirSituacao(L"ambiente calmo");
    p1.reagirSituacao(L"rotina alterada");
    p1.reagirSituacao(L"sala vazia");

    // mostra o estado final
    std::wcout << std::endl << L"estado final:" << std::endl;
    p1.mostrarEstado();

    return 0;
}