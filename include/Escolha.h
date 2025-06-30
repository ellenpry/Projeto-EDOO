#ifndef ESCOLHA_H
#define ESCOLHA_H

#include <string>

class Escolha {
private:
    std::string descricao;
    int* carisma;
    int* inteligencia;
    int* resistencia;

public:
    Escolha(const std::string& desc, int* carisma, int* inteligencia, int* resistencia);

    void aplicarEfeitos() const;
    std::string getDescricao() const;
};

#endif
