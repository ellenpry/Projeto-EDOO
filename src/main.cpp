#include "../include/Jogo.h"
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brazil.utf8");
    
    Jogo jogo;
    jogo.iniciar();
    return 0;
}