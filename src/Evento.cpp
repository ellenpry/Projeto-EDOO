#include "Evento.h"
#include "Personagem.h"
#include <iostream>

// Construtor: inicializa o evento com contexto e opções de escolha
Evento::Evento(const std::string& contexto, const std::vector<Escolha>& opcoes) 
    : contexto(contexto), opcoes(opcoes) {}

// Exibe o evento e suas opções de escolha
void Evento::mostrarEvento() const {
    std::cout << "\n=====================================\n";
    std::cout << contexto << "\n\n";
    
    for (size_t i = 0; i < opcoes.size(); ++i) {
        std::cout << "[" << i + 1 << "] " << opcoes[i].getDescricao() << "\n";
    }
    std::cout << "\nDigite o número da sua escolha (1-" << opcoes.size() << "): ";
}

// Executa a escolha selecionada e aplica os efeitos no personagem
void Evento::executarEscolha(int indice, Personagem* personagem) {
    if (indice >= 0 && indice < static_cast<int>(opcoes.size())) {
        const Escolha& escolha = opcoes[indice];
        escolha.aplicarEfeitos(
            personagem->getCarisma(),
            personagem->getInteligencia(),
            personagem->getResistencia()
        );
        std::cout << "\nVocê escolheu: " << escolha.getDescricao() << "\n";
        std::cout << "Efeito: " << escolha.getImpacto() << "\n\n";
    } else {
        std::cout << "\nEscolha inválida!\n";
    }
}

// retorna o contexto do evento
const std::string& Evento::getContexto() const {
    return contexto;
}

// Retorna as opções do evento
const std::vector<Escolha>& Evento::getOpcoes() const {
    return opcoes;
}