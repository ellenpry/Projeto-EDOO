#pragma once
#include <string>

class Escolha {
private:
    std::string descricao;
    int deltaCarisma;
    int deltaInteligencia;
    int deltaResistencia;

public:
    Escolha(const std::string& desc, int carisma, int inteligencia, int resistencia);

    void aplicarEfeitos(int& carisma, int& inteligencia, int& resistencia) const;
    std::string getDescricao() const;
};
