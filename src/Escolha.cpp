#include "Escolha.h"

Escolha::Escolha(const std::string& desc, int carisma, int inteligencia, int resistencia)
    : descricao(desc), deltaCarisma(carisma), deltaInteligencia(inteligencia), deltaResistencia(resistencia) {}

void Escolha::aplicarEfeitos(int& carisma, int& inteligencia, int& resistencia) const {
    carisma += deltaCarisma;
    inteligencia += deltaInteligencia;
    resistencia += deltaResistencia;
}

std::string Escolha::getDescricao() const {
    return descricao;
}
