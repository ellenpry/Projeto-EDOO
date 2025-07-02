#include "Menu.h"
#include <iostream>

void Menu::exibir(Jogo& jogo) {
    bool continuar = true;

    while (continuar) {
        int opcao = 0;

        std::cout << "\n=== MENU PRINCIPAL ===\n";
        std::cout << "1. Iniciar Jogo\n";
        std::cout << "2. Ver Personagens\n";
        std::cout << "3. Ver Atributos\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
        std::cin.ignore(10000, '\n');

        switch (opcao) {
            case 1:
                jogo.escolherPersonagem();
                jogo.jogarEventos();
                jogo.finalizar();
                continuar = desejaJogarNovamente(); // ← aqui decide se volta pro menu
                break;
            case 2:
                mostrarPersonagens();
                break;
            case 3:
                mostrarAtributos();
                break;
            case 4:
                continuar = false;
                break;
            default:
                std::cout << "\nOpção inválida. Tente novamente.\n";
        }
    }

    std::cout << "\nObrigado por jogar SocialQuest!\n";
}

void Menu::mostrarPersonagens() {
    std::cout << "\n--- Personagens ---\n";
    std::cout << "João: Equilibrado, carismático e esforçado.\n";
    std::cout << "Caio: Resiliente, sempre buscando superação.\n";
    std::cout << "Alice: Inteligente e analítica, confia na razão.\n";
}

void Menu::mostrarAtributos() {
    std::cout << "\n--- Atributos ---\n";
    std::cout << "Carisma: Influencia relações interpessoais.\n";
    std::cout << "Inteligência: Reflete preparo e raciocínio.\n";
    std::cout << "Resistência: Determina energia e foco mental.\n";
}

bool Menu::desejaJogarNovamente() {
    char resposta;
    std::cout << "\nDeseja jogar novamente? (s/n): ";
    std::cin >> resposta;
    std::cin.ignore(10000, '\n');

    return resposta == 's' || resposta == 'S';
}
