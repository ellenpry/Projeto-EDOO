#include "Alice.h"
#include "EventosAlice.h"
#include <iostream>

Alice::Alice() {
    nome = "Alice";
    carisma = 3;
    carismaInicial = 3;

    resistencia = 2;
    resistenciaInicial = 2;

    inteligencia = 5;
    inteligenciaInicial = 5;
}

void Alice::inicializarEventos() {
    
    std::cout << nome << " iniciou seus eventos!\n";
    eventos.push_back(criarEventoAlice1());
    eventos.push_back(criarEventoAlice2());
    eventos.push_back(criarEventoAlice3());
    eventos.push_back(criarEventoAlice4());
    
}

void Alice::tomarDecisao() {
    // Chama a implementação base que mostra os eventos e processa escolhas
    Personagem::tomarDecisao();

    std::cout << nome << " tomou uma decisão!\n";
    
    // Comportamento específico da Alice pode ser adicionado aqui
    // std::cout << "Alice fez algo único!\n";
}

// Opcional: Adicione feedback específico da Alice
void Alice::gerarFeedback() {
    // Primeiro chama o feedback base
    Personagem::gerarFeedback();
    
    // Depois adiciona feedback específico
    std::cout << "\n=== FEEDBACK ESPECÍFICO DA ALICE ===\n";
    
    if (inteligencia >= 4) {
        std::cout << "Alice mostrou seu conhecimento sobre a temática abordada pela entrevista, o que impressionou todos da mesa.\n";
    }
    else if (inteligencia < 4) {
        std::cout << "Alice demonstrou insegurança a respeito da temática proposta pela mesa avaliadora, trazendo incertezas para a equipe de entrevista.\n";
    }

    if (carisma >= 4) {
        std::cout << "Alice conquistou a equipe de entrevista com seu carisma! Tem tudo para dar certo!\n";
    }
    else if (carisma < 4) {
        std::cout << "Alice estava muito estressada, o que claramente foi percebido pela equipe de entrevista.\n";
    }


    if (resistencia >= 4) {
        std::cout << "Alice estava descansada para a entrevista, deixando-a mais animada.\n";
    }
    else if (resistencia < 4) {
        std::cout << "Alice estava cansada para a entrevista, seu humor não estava dos melhores.\n";
    }

    
    std::cout << "=================================\n";

    pontucaoTotal = carisma * 3 + inteligencia * 2 + resistencia;

    std::cout << "\n=== RESULTADO FINAL ===\n";

    if (pontucaoTotal >= 30) {
        std::cout << "Alice teve uma entrevista excelente! Seu conhecimento, carisma e energia conquistaram a equipe completamente.\n";
        std::cout << "Ela está muito bem preparada e tem tudo para alcançar grandes resultados.\n";
    }
    else if (pontucaoTotal >= 25 && pontucaoTotal < 30) {
        std::cout << "Alice apresentou um desempenho satisfatório, com pontos fortes evidentes, mas ainda pode melhorar em alguns aspectos.\n";
        std::cout << "Com um pouco mais de foco, ela pode se destacar muito mais nas próximas oportunidades.\n";
    }
    else {
        std::cout << "Alice enfrentou dificuldades durante a entrevista. Seu desempenho deixou a desejar em vários pontos importantes.\n";
        std::cout << "Será fundamental trabalhar no preparo, controle emocional e disposição para melhorar nos próximos desafios.\n";
    }
}