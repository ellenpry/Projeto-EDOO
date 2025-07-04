#pragma once
#include <memory>
#include <vector>
#include "Personagem.h"
#include "Evento.h"

// Classe principal do jogo
class Jogo {
private:
    std::unique_ptr<Personagem> personagemAtual; // Personagem escolhido pelo jogador
    std::vector<Evento> eventos;                 // Lista de eventos do jogo

public:
    void iniciar();              // Inicia o jogo
    void escolherPersonagem();   // Permite escolher o personagem
    void jogarEventos();         // Executa os eventos do jogo
    void finalizar();            // Finaliza o jogo
    
    // Métodos auxiliares
    void mostrarMenu();        
    void mostrarPersonagens();   
    void mostrarAtributos();     
};