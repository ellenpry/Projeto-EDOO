#ifndef EVENTO_H
#define EVENTO_H

#include <string>
#include <vector>
#include "Escolha.h"

class Personagem; // Forward declaration

// Representa um evento com contexto e opções de escolha
class Evento {
private:
    std::string contexto;              // Contexto do evento
    std::vector<Escolha> opcoes;       // Opções disponíveis

public:
    Evento(const std::string& contexto, const std::vector<Escolha>& opcoes); // Construtor

    void mostrarEvento() const;        // Exibe o evento e opções
    void executarEscolha(int indice, Personagem* personagem); // Executa a escolha selecionada

    const std::string& getContexto() const;           // Retorna o contexto
    const std::vector<Escolha>& getOpcoes() const;    // Retorna as opções
};

#endif
