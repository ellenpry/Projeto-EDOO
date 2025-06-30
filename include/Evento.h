#ifndef EVENTO_H
#define EVENTO_H

#include <string>
#include <vector>
#include "Escolha.h"
#include "Personagem.h"

class Evento {
private:
    std::string contexto;
    std::vector<Escolha> opcoes;

public:
    Evento(const std::string& contexto, const std::vector<Escolha>& opcoes);

    void mostrarEvento() const;
    void executarEscolha(int indice, Personagem* personagem);

    const std::string& getContexto() const;
    const std::vector<Escolha>& getOpcoes() const;
};

#endif
