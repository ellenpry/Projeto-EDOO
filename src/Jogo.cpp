#include "Jogo.h"
#include "Joao.h"
// Inclua outros personagens aqui no futuro

#include <iostream>

void Jogo::iniciar() {
    std::cout << "Bem-vindo ao SocialQuest!\n";
    escolherPersonagem();
    personagemAtual->inicializarEventos();
    jogarEventos();
    finalizar();
}

void Jogo::escolherPersonagem() {
    std::cout << "Escolha seu personagem:\n";
    std::cout << "1 - Joao\n";
    // Adicione outras opções se tiver mais personagens
    int opcao;
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            personagemAtual = std::make_unique<Joao>();
            break;
        default:
            std::cout << "Opção inválida. João será selecionado por padrão.\n";
            personagemAtual = std::make_unique<Joao>();
            break;
    }

    std::cout << "Personagem escolhido: " << personagemAtual->getNome() << "\n";
}

void Jogo::jogarEventos() {
    // Aqui você chamaria a sequência de eventos do personagem
    personagemAtual->tomarDecisao(); // simulação por enquanto
}

void Jogo::finalizar() {
    personagemAtual->gerarFeedback();
    std::cout << "Obrigado por jogar!\n";
}
