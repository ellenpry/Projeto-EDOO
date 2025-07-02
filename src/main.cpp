#include "../include/Jogo.h"
#include "../include/Menu.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Jogo jogo;
    Menu menu;

    menu.exibir(jogo); // chama o menu inicial
    return 0;
}