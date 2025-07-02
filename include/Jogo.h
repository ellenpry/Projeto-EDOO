#pragma once
#include <memory>
#include <vector>
#include "Personagem.h"
#include "Evento.h"

class Jogo {
private:
    std::unique_ptr<Personagem> personagemAtual;
    std::vector<Evento> eventos;

public:
    void iniciar();
    void escolherPersonagem();
    void jogarEventos();
    void finalizar();

    void mostrarMenu();
    void mostrarPersonagens();
    void mostrarAtributos();
};
