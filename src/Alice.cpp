#include "Alice.h"
#include "EventosAlice.h"
#include <iostream>

Alice::Alice() {
    nome = "Alice";
    carisma = 3;
    resistencia = 2;
    inteligencia = 5;
}

void Alice::inicializarEventos() {
    std::cout << nome << " está carregando seus eventos...\n";
    eventos.push_back(criarEventoAlice1());
    eventos.push_back(criarEventoAlice2());
    eventos.push_back(criarEventoAlice3());
    eventos.push_back(criarEventoAlice4());
    
    // Debug para verificar se os eventos foram carregados
    std::cout << "Total de eventos da Alice: " << eventos.size() << "\n";
}

void Alice::tomarDecisao() {
    // Chama a implementação base que mostra os eventos e processa escolhas
    Personagem::tomarDecisao();
    
    // Comportamento específico da Alice pode ser adicionado aqui
    // std::cout << "Alice fez algo único!\n";
}

// Opcional: Adicione feedback específico da Alice
void Alice::gerarFeedback() {
    // Primeiro chama o feedback base
    Personagem::gerarFeedback();
    
    // Depois adiciona feedback específico
    std::cout << "\n=== FEEDBACK ESPECÍFICO DA ALICE ===\n";
    
    if (inteligencia >= 5) {
        std::cout << "Alice demonstrou grande preparo técnico!\n";
    }
    if (carisma >= 3) {
        std::cout << "Alice se comunicou bem nas situações sociais!\n";
    }
    
    std::cout << "=================================\n";
}