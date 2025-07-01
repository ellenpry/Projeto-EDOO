#pragma once
#include <string>

class Escolha {
private:
    std::string descricao;
    int deltaCarisma;
    int deltaInteligencia;
    int deltaResistencia;
    std::string impacto;

public:
    Escolha(const std::string& desc, int carisma, int inteligencia, int resistencia, const std::string& impacto);

    void aplicarEfeitos(int& carisma, int& inteligencia, int& resistencia) const;
    std::string getDescricao() const;
    std::string getImpacto() const;
};
