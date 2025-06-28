#include "Evento.h"
#include <iostream>

// construtor
Evento::Evento(const std::wstring& contexto, const std::vector<Escolha>& opcoes)
    : contexto(contexto), opcoes(opcoes) {}


// exibe o texto do evento e as opcoes disponiveis
void Evento::mostrarEvento() const {
    std::wcout << L"\n--- EVENTO ---\n";
    std::wcout << contexto << L"\n\n";

    for (size_t i = 0; i < opcoes.size(); ++i) {
        std::wcout << i + 1 << L") " << opcoes[i].getDescricao() << L"\n";
    }
    std::wcout << L"\nEscolha uma opção (1-" << opcoes.size() << L"): ";
}

// aplica os efeitos da escolha escolhida no personagem
void Evento::executarEscolha(int indice, Personagem* personagem) {
    if (indice >= 0 && indice < static_cast<int>(opcoes.size())) {
        opcoes[indice].aplicarEfeitos(*personagem);
    } else {
        std::wcout << L"Escolha inválida.\n";
    }
}

std::wstring Evento::getContexto() const {
    return contexto;
}

std::vector<Escolha> Evento::getOpcoes() const {
    return opcoes;
}