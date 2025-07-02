#include "Jogo.h"
#include "Joao.h"
#include "Caio.h"
#include "Alice.h"
#include <iostream>
#include <limits>
//#include <locale.h>  // Para caracteres especiais no Windows
#include <windows.h> // Para SetConsoleOutputCP

void Jogo::iniciar() {
    // Configuração para caracteres especiais
    //setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(CP_UTF8); 
    
    std::cout << "Bem-vindo ao SocialQuest!\n";
    escolherPersonagem();
    jogarEventos();
    finalizar();
}

void Jogo::escolherPersonagem() {
    int escolha;
    bool valido = false;

    while (!valido) {
        std::cout << "\nEscolha seu personagem:\n";
        std::cout << "1 - João\n";
        std::cout << "2 - Caio\n";
        std::cout << "3 - Alice\n";
        std::cout << "Sua escolha: ";

        if (!(std::cin >> escolha)) {
            std::cin.clear(); // limpa o estado de erro
            std::cin.ignore(10000, '\n'); // limpa o buffer
            std::cout << "Erro: Digite apenas números!\n";
            continue;
        }

        std::cin.ignore(10000, '\n');

        if (escolha >= 1 && escolha <= 3) {
            valido = true;
        } else {
            std::cout << "\nErro: Digite um número entre 1 e 3!\n";
        }
    }

    switch (escolha) {
        case 1: personagemAtual = std::make_unique<Joao>(); break;
        case 2: personagemAtual = std::make_unique<Caio>(); break;
        case 3: personagemAtual = std::make_unique<Alice>(); break;
    }

    std::cout << "\nPersonagem escolhido: " << personagemAtual->getNome() << "\n";
    personagemAtual->inicializarEventos();
}


void Jogo::jogarEventos() {
    if (!personagemAtual) {
        std::cerr << "Erro: Nenhum personagem selecionado!\n";
        return;
    }
    
    std::cout << "\n=== INÍCIO DA JORNADA ===\n";
    personagemAtual->tomarDecisao();  // Usando tomarDecisao() diretamente
}

void Jogo::finalizar() {
    if (!personagemAtual) return;
    
    std::cout << "\n=== FIM DA JORNADA ===\n";
    personagemAtual->gerarFeedback();
}