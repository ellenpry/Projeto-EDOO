#include "Personagem.h"

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
