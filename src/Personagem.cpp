#include "Personagem.h"
#include <iostream>

#include "Personagem.h"
#include <iostream>

#include "Personagem.h"
#include <iostream>

// Implementação da classe Personagem
void Personagem::tomarDecisao() {
    for (Evento& evento : eventos) {
        int escolha; 
        bool valido = false;
        
        // Exibe o evento atual e suas opções
        while (!valido) {
            evento.mostrarEvento();
            
            // Solicita a escolha do usuário
            if (!(std::cin >> escolha)) {
                std::cin.clear(); // Limpa estado de erro
                std::cin.ignore(10000, '\n'); // Limpa buffer
                std::cout << "\nErro: Digite apenas números!\n";
                continue;
            }
            
            std::cin.ignore(10000, '\n'); // Limpa buffer
            
            // Converte size_t para int para evitar warning
            int numOpcoes = static_cast<int>(evento.getOpcoes().size());
            
            // Verifica se a escolha é válida
            if (escolha >= 1 && escolha <= numOpcoes) {
                valido = true;
            } else {
                std::cout << "\nErro: Digite um número entre 1 e " << numOpcoes << "!\n";
            }
        }
        
        evento.executarEscolha(escolha - 1, this);
        
        std::cout << "\nPressione Enter para continuar...";
        std::cin.ignore(10000, '\n');
    }
}

// Gera feedback final do personagem após todos os eventos
void Personagem::gerarFeedback() {
    std::cout << "\n===== ATRIBUTOS FINAIS =====" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Carisma inicial: " << carismaInicial << " | Carisma final: " << carisma << std::endl;
    std::cout << "Resistencia inicial: " << resistenciaInicial << " | Resistencia final: " << resistencia << std::endl;
    std::cout << "Inteligencia inicial: " << inteligenciaInicial << " | Inteligencia final: " << inteligencia << std::endl;
}

// Adiciona um evento à lista de eventos do personagem
void Personagem::adicionarEvento(const Evento& evento) {
    eventos.push_back(evento);
}

// Retorna o nome do personagem
std::string Personagem::getNome() const {
    return nome;
}

// Retorna os atributos do personagem
int& Personagem::getCarisma() {
    return carisma;
}

int& Personagem::getResistencia() {
    return resistencia;
}

int& Personagem::getInteligencia() {
    return inteligencia;
}

int Personagem::getCarisma() const {
    return carisma;
}

int Personagem::getResistencia() const {
    return resistencia;
}

int Personagem::getInteligencia() const {
    return inteligencia;
}