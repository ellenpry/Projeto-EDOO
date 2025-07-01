#include "Joao.h"
#include "EventosJoao.h"
#include <iostream>

Joao::Joao() {
    nome = "João";
    carisma = 3;
    resistencia = 3;
    inteligencia = 4;
}

void Joao::inicializarEventos() {
    eventos.clear();
    
    std::cout << "Carregando eventos do João...\n";
    eventos.push_back(criarEventoJoao1());
    eventos.push_back(criarEventoJoao2());
    eventos.push_back(criarEventoJoao3());
    eventos.push_back(criarEventoJoao4());
    
    std::cout << eventos.size() << " eventos carregados para João\n";
}

void Joao::tomarDecisao() {
    // Chama a implementação base que mostra os eventos e processa escolhas
    Personagem::tomarDecisao();
    
    // Comportamento específico do João pode ser adicionado aqui
    // std::cout << "João fez algo especial!\n";
}

void Joao::gerarFeedback() {
    // Primeiro chama o feedback base
    Personagem::gerarFeedback();
    
    // Depois adiciona feedback específico do João
    std::cout << "\n=== FEEDBACK ESPECÍFICO DO JOÃO ===\n";
    
    if (inteligencia >= 5) {
        std::cout << "João se saiu muito bem academicamente!\n";
    }
    if (carisma >= 5) {
        std::cout << "João foi muito sociável durante o período!\n";
    }
    
    std::cout << "===============================\n";
}