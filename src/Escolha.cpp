#include "Escolha.h"

// construtor
Escolha::Escolha(const std::string& desc, int* carisma, int* inteligencia, int* resistencia)
    : descricao(desc), carisma(carisma), inteligencia(inteligencia), resistencia(resistencia) {}

// aplica os efeitos no ponteiro direto
void Escolha::aplicarEfeitos() const {
    if (carisma) *carisma += 1;
    if (inteligencia) *inteligencia += 1;
    if (resistencia) *resistencia += 1;
}

// retorna o texto descritivo da escolha
std::string Escolha::getDescricao() const {
    return descricao;
}
