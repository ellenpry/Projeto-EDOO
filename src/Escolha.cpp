#include "Escolha.h"

// construtor
Escolha::Escolha(const std::wstring& desc, int carisma, int inteligencia, int resistencia)
    : descricao(desc), deltaCarisma(carisma), deltaInteligencia(inteligencia), deltaResistencia(resistencia) {}

// aplica os efeitos da escolha no personagem
void Escolha::aplicarEfeitos(Personagem& personagem) const {
    personagem.alterarAtributo(L"carisma", deltaCarisma);
    personagem.alterarAtributo(L"inteligencia", deltaInteligencia);
    personagem.alterarAtributo(L"resistencia", deltaResistencia);
}

// retorna o texto descritivo da escolha
std::wstring Escolha::getDescricao() const {
    return descricao;
}