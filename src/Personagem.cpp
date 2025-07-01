#include "Personagem.h"
#include <iostream>

void Personagem::tomarDecisao() {
    for (Evento& evento : eventos) {
        evento.mostrarEvento();
        
        int escolha;
        std::cin >> escolha;
        std::cin.ignore();
        
        evento.executarEscolha(escolha - 1, this);
        
        std::cout << "\nPressione Enter para continuar...";
        std::cin.ignore();
    }
}

void Personagem::gerarFeedback() {
    std::cout << "\n=== ATRIBUTOS FINAIS ===" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Carisma: " << carisma << std::endl;
    std::cout << "Resistencia: " << resistencia << std::endl;
    std::cout << "Inteligencia: " << inteligencia << std::endl;
}

void Personagem::adicionarEvento(const Evento& evento) {
    eventos.push_back(evento);
}

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