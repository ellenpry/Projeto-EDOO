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
        std::cout << "4. Sobre o jogo\n";
        std::cout << "5. Sair\n";
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
                sobreJogo();
                break;
            case 5:
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
    std::cout << "João é um estudante que está se preparando para uma prova importante de cálculo I.\n";
    std::cout << "Caio: Resiliente, sempre buscando superação.\n";
    std::cout << "Caio é um atleta que está se preparando para uma prova que irá definir se ele irá para as Olimpíadas.\n";
    std::cout << "Alice: Inteligente e analítica, confia na razão.\n";
    std::cout << "Alice é uma desenvolvedora que está se preparando para uma entrevista de um cargo de liderança na sua empresa dos sonhos.\n";
}

void Menu::mostrarAtributos() {
    std::cout << "\n--- Atributos ---\n";
    std::cout << "Carisma: Influencia relações interpessoais.\n";
    std::cout << "Inteligência: Reflete preparo e raciocínio.\n";
    std::cout << "Resistência: Determina energia e foco mental.\n";
}

void Menu::sobreJogo() {
    std::cout << "\n--- Sobre o Jogo ---\n";
    std::cout << "O jogo consiste na escolha de decisões que devem ser tomadas por cada personagem diante de um Evento.\n";
    std::cout << "Essas decisões irão impactar em alguns de seus atributos: Resistência, Carisma ou Inteligência.\n";
    std::cout << "A estratégia é pensar em quais atributos são mais importantes para cada personagem e quais escolhas devem ser tomadas para atingir o melhor resultado!\n";
}

bool Menu::desejaJogarNovamente() {
    char resposta;
    std::cout << "\nDeseja jogar novamente? (s/n): ";
    std::cin >> resposta;
    std::cin.ignore(10000, '\n');

    return resposta == 's' || resposta == 'S';
}
