#include "Jogo.h"
#include "Joao.h"
#include "Caio.h"
#include "Alice.h"
#include <iostream>
#include <limits>
#include <locale.h>  // Para caracteres especiais no Windows

void Jogo::iniciar() {
    // Configuração para caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    
    std::cout << "Bem-vindo ao SocialQuest!\n";
    escolherPersonagem();
    jogarEventos();
    finalizar();
}

void Jogo::escolherPersonagem() {
    int escolha;
    do {
        std::cout << "\nEscolha seu personagem:\n";
        std::cout << "1 - João\n";
        std::cout << "2 - Caio\n";
        std::cout << "3 - Alice\n";
        std::cout << "Sua escolha: ";
        
        std::cin >> escolha;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor, digite 1, 2 ou 3.\n";
            continue;
        }
    } while (escolha < 1 || escolha > 3);

    switch (escolha) {
        case 1: 
            personagemAtual = std::make_unique<Joao>();
            break;
        case 2: 
            personagemAtual = std::make_unique<Caio>();
            break;
        case 3: 
            personagemAtual = std::make_unique<Alice>();
            break;
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
    std::cout << "\nObrigado por jogar SocialQuest!\n";
}