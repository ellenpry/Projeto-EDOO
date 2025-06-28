#ifndef EVENTO_H
#define EVENTO_H
// evita multiplas inclusoes desse arquivo

#include <string>
#include <vector>
#include "Escolha.h"
#include "Personagem.h"

// representa um evento que afeta o personagem com base em uma escolha
class Evento {
private:
    std::wstring contexto;                    // descricao do evento
    std::vector<Escolha> opcoes;              // 3 escolhas possiveis

public:
    Evento(const std::wstring& contexto, const std::vector<Escolha>& opcoes);

    void mostrarEvento() const;               // mostra o evento e suas opcoes
    void executarEscolha(int indice, Personagem* personagem); // aplica os efeitos da escolha

    std::wstring getContexto() const;
    std::vector<Escolha> getOpcoes() const;
};

#endif // EVENTO_H
