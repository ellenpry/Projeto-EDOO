#ifndef ESCOLHA_H
#define ESCOLHA_H

#include <string>
#include "Personagem.h"

class Escolha {
private:
    std::wstring descricao;
    int deltaCarisma;
    int deltaInteligencia;
    int deltaResistencia;

public:
    Escolha(const std::wstring& desc, int carisma, int inteligencia, int resistencia);
    
    void aplicarEfeitos(Personagem& personagem) const;
    std::wstring getDescricao() const;
};

#endif