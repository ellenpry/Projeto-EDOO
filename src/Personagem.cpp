#include "Personagem.h"
#include <iostream>

void Personagem::atualizarAtributos() {
    // lógica para atualizar atributos com base em decisões
}

void Personagem::proximoEvento(Evento& evento) {
    // lógica para ir para o próximo evento
}

void Personagem::gerarFeedback() {
    std::cout << nome << " terminou os eventos.\n";
}

std::string Personagem::getNome() const { return nome; }
int Personagem::getCarisma() const { return carisma; }
int Personagem::getResistencia() const { return resistencia; }
int Personagem::getInteligencia() const { return inteligencia; }
