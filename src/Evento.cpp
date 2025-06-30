#include "Evento.h"
#include "Personagem.h"
#include <iostream>

// construtor
Evento::Evento(const std::string& contexto, const std::vector<Escolha>& opcoes)
    : contexto(contexto), opcoes(opcoes) {}

// exibe o texto do evento e as opções disponíveis
void Evento::mostrarEvento() const {
    std::cout << "\n--- EVENTO ---\n";
    std::cout << contexto << "\n\n";

    for (size_t i = 0; i < opcoes.size(); ++i) {
        std::cout << (i + 1) << ") " << opcoes[i].getDescricao() << "\n";
    }
    std::cout << "\nEscolha uma opção (1-" << opcoes.size() << "): ";
}

// aplica os efeitos da escolha no personagem
void Evento::executarEscolha(int indice, Personagem* personagem) {
    if (indice >= 1 && indice <= static_cast<int>(opcoes.size())) {
        opcoes[indice - 1].aplicarEfeitos();
    } else {
        std::cout << "Escolha inválida.\n";
    }
}

const std::string& Evento::getContexto() const {
    return contexto;
}

const std::vector<Escolha>& Evento::getOpcoes() const {
    return opcoes;
}