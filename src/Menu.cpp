#include "Menu.h"
#include <iostream>

// Inclui o cabeçalho do jogo
void Menu::exibir(Jogo& jogo) {
    bool continuar = true;

    // Exibe o menu principal até que o usuário decida sair
    while (continuar) {
        int opcao = 0;

        std::cout << "\n===== MENU PRINCIPAL =====\n";
        std::cout << "1. Iniciar Jogo\n";
        std::cout << "2. Ver Personagens\n";
        std::cout << "3. Ver Atributos\n";
        std::cout << "4. Sobre o jogo\n";
        std::cout << "5. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
        std::cin.ignore(10000, '\n');
        
        // Verifica se a entrada é um número válido
        switch (opcao) {
            case 1: // Inicia o jogo
                jogo.escolherPersonagem();
                jogo.jogarEventos();
                jogo.finalizar();
                continuar = desejaJogarNovamente(); 
                break;
            case 2: // Mostra os personagens disponíveis
                mostrarPersonagens();
                break;
            case 3: // Mostra os atributos do jogo
                mostrarAtributos();
                break;
            case 4: // Exibe informações sobre o jogo
                sobreJogo();
                break;
            case 5: // Sai do jogo
                continuar = false;
                break;
            default: // Opção inválida
                std::cout << "\nOpção inválida. Tente novamente.\n";
        }
    }

    std::cout << "\nObrigado por jogar SocialQuest!\n";
}

// Mostra informações sobre os personagens disponíveis
void Menu::mostrarPersonagens() {
    std::cout << "\n----- Personagens -----\n";
    std::cout << "João: Equilibrado, carismático e esforçado.\n";
    std::cout << "João é um estudante que está se preparando para uma prova importante de cálculo I.\n";
    std::cout << "Caio: Resiliente, sempre buscando superação.\n";
    std::cout << "Caio é um atleta que está se preparando para uma prova que irá definir se ele irá para as Olimpíadas.\n";
    std::cout << "Alice: Inteligente e analítica, confia na razão.\n";
    std::cout << "Alice é uma desenvolvedora que está se preparando para uma entrevista de um cargo de liderança na sua empresa dos sonhos.\n";
}

// Mostra informações sobre os atributos do jogo
void Menu::mostrarAtributos() {
    std::cout << "\n----- Atributos -----\n";
    std::cout << "Carisma: Influencia relações interpessoais.\n";
    std::cout << "Inteligência: Reflete preparo e raciocínio.\n";
    std::cout << "Resistência: Determina energia e foco mental.\n";
}

// Exibe informações sobre o jogo
void Menu::sobreJogo() {
    std::cout << "\n----- Sobre o Jogo -----\n";
    std::cout << "O jogo consiste na escolha de decisões que devem ser tomadas por cada personagem diante de um Evento.\n";
    std::cout << "Essas decisões irão impactar em alguns de seus atributos: Resistência, Carisma ou Inteligência.\n";
    std::cout << "A estratégia é pensar em quais atributos são mais importantes para cada personagem e quais escolhas devem ser tomadas para atingir o melhor resultado!\n";
}

// Pergunta ao usuário se deseja jogar novamente, com verificação de erro
bool Menu::desejaJogarNovamente() {
    char resposta;
    while (true) {
        std::cout << "\nDeseja jogar novamente? (s/n): ";
        std::cin >> resposta;
        std::cin.ignore(10000, '\n');

        if (resposta == 's' || resposta == 'S')
            return true;
        else if (resposta == 'n' || resposta == 'N')
            return false;
        else
            std::cout << "Opção inválida. Digite 's' para sim ou 'n' para não.\n";
    }
}