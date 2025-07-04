#include "Escolha.h"

// Construtor: inicializa a escolha com descrição, efeitos e impacto
Escolha::Escolha(const std::string& desc, int carisma, int inteligencia, int resistencia, const std::string& impacto)
    : descricao(desc), deltaCarisma(carisma), deltaInteligencia(inteligencia), deltaResistencia(resistencia), impacto(impacto) {}

// Aplica os efeitos da escolha nos atributos do personagem
void Escolha::aplicarEfeitos(int& carisma, int& inteligencia, int& resistencia) const {
    carisma += deltaCarisma;
    inteligencia += deltaInteligencia;
    resistencia += deltaResistencia;
}

// Retorna a descrição da escolha
std::string Escolha::getDescricao() const {
    return descricao;
}

// Retorna o impacto da escolha
std::string Escolha::getImpacto() const {
    return impacto;
}