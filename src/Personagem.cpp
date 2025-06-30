#include "Personagem.h"
#include <iostream>

std::string Personagem::getNome() const {
    return nome;
}

int& Personagem::getCarisma() {
    return carisma;
}

int& Personagem::getResistencia() {
    return resistencia;
}

int& Personagem::getInteligencia() {
    return inteligencia;
}

int Personagem::getCarisma() const {
    return carisma;
}

int Personagem::getResistencia() const {
    return resistencia;
}

int Personagem::getInteligencia() const {
    return inteligencia;
}

void Personagem::tomarDecisao() {
    for (Evento& evento : eventos) {
        evento.mostrarEvento();      // Mostra o evento + 3 opções

        int escolha;
        std::cin >> escolha;         // Jogador escolhe uma opção

        evento.executarEscolha(escolha, this);  // Aplica efeitos

        std::cout << "\nAtributos após decisão:\n";
        std::cout << "Carisma: " << carisma << "\n";
        std::cout << "Inteligência: " << inteligencia << "\n";
        std::cout << "Resistência: " << resistencia << "\n";
    }
}
