#include "Autista.h"
#include <iostream>

// a classe 'autista' chama a classe base
Autista::Autista(std::wstring nome) : Personagem(std::move(nome)) {}

// puxa o reagirSituacao da classe base
void Autista::reagirSituacao(const std::wstring& situacao) {
    situacoes_passadas.push_back(situacao);

    // aqui eu simulo que certas situacoes causam mais estresse no personagem
    if (situacao == L"ambiente barulhento") {
        aumentarEstresse(10);
        std::wcout << nome << L" ficou muito desconfortavel com o barulho" << std::endl;
    } else if (situacao == L"rotina alterada") {
        aumentarEstresse(7);
        std::wcout << nome << L" se sentiu perdido com a mudanca na rotina" << std::endl;
    } else if (situacao == L"ambiente calmo") {
        aumentarConforto(5);
        std::wcout << nome << L" se sentiu bem num ambiente calmo" << std::endl;
    } else {
        // situacoes mais dboa causam estresse leve
        aumentarEstresse(2);
        std::wcout << nome << L" se sentiu um pouco desconfortavel" << std::endl;
    }
}