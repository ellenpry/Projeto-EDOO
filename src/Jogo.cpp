#include "Jogo.h"
#include "Joao.h"
#include "Caio.h"
#include "Alice.h"
#include "EventosCaio.h"
#include "EventosAlice.h"
#include "EventosJoao.h"

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
    std::cout << "1 - João\n";
    std::cout << "2 - Caio\n";
    std::cout << "3 - Alice\n";
    int opcao;
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            personagemAtual = std::make_unique<Joao>();
            break;
        case 2:
            personagemAtual = std::make_unique<Caio>();
            break;
        case 3:
            personagemAtual = std::make_unique<Alice>();
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
