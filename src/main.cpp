#include "../include/Jogo.h"
#include "../include/Menu.h"
#include <windows.h>

// Função principal que inicia o jogo
int main() {
    SetConsoleOutputCP(CP_UTF8); // Configuração para caracteres especiais
    Jogo jogo; 
    Menu menu;

    menu.exibir(jogo); // chama o menu inicial
    return 0;
}