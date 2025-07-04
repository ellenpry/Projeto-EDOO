#pragma once
#include <string>

// Representa uma escolha feita pelo personagem
class Escolha {
private:
    std::string descricao;      // Descrição da escolha

    // Mudanças nos atributos
    int deltaCarisma;        
    int deltaInteligencia;    
    int deltaResistencia;  
         
    std::string impacto;        // Descrição do impacto

public:
    // Construtor
    Escolha(const std::string& desc, int carisma, int inteligencia, int resistencia, const std::string& impacto);

    void aplicarEfeitos(int& carisma, int& inteligencia, int& resistencia) const; // Aplica efeitos nos atributos
    std::string getDescricao() const;   // Retorna descrição
    std::string getImpacto() const;     // Retorna impacto
};