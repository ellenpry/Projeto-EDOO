#include "Caio.h"
#include "EventosCaio.h"
#include <iostream>

Caio::Caio() {
    nome = "Caio";
    carisma = 3;
    carismaInicial = 3;

    resistencia = 5;
    resistenciaInicial = 5;

    inteligencia = 2;
    inteligenciaInicial = 2;
}

void Caio::inicializarEventos() {
    
    std::cout << nome << " iniciou seus eventos!\n";
    eventos.push_back(criarEventoCaio1());
    eventos.push_back(criarEventoCaio2());
    eventos.push_back(criarEventoCaio3());
    eventos.push_back(criarEventoCaio4());
}

void Caio::tomarDecisao() {

    Personagem::tomarDecisao();
    
    std::cout << nome << " tomou uma decisão!\n";
    // Lógica específica de decisão de Caio
}

void Caio::gerarFeedback() {
    // Primeiro chama o feedback base
    Personagem::gerarFeedback();
    
    // Depois adiciona feedback específico
    std::cout << "\n=== FEEDBACK ESPECÍFICO DA CAIO ===\n";

    if (carisma >= 4) {
        std::cout << "Caio consegue um patrocinador devido ao seu jeito carismático durante a competição.\n";
    }
    else if (carisma < 4) {
        std::cout << "Caio não estava muito contente, o que gerou um clima hostil em patrocinadores que estavam vendo a competição.\n";
    }

    if (resistencia >= 4) {
        std::cout << "Caio consegue uma boa colocação. Seus esforços valeram a pena!\n";
    }
    else if (resistencia < 4) {
        std::cout << "Caio acaba numa colocação não tão boa. As incertezas tomam conta no momento.\n";
    }

    if (inteligencia >= 4) {
        std::cout << "Caio fica orgulhoso ao ver que tomou as melhores escolhas, independente do resultado.\n";
    }
    else if (inteligencia < 4) {
        std::cout << "Caio fica frustrado ao perceber que poderia ter tomado decisões diferentes.\n";
    }
    
    std::cout << "=================================\n";

    pontucaoTotal = resistencia * 3 + carisma * 2 + inteligencia;

    std::cout << "\n=== RESULTADO FINAL ===\n";

    if (pontucaoTotal >= 30) {
        std::cout << "Caio fica emocionado ao ver seu nome entre os primeiros colocados da competição! Seu desempenho foi impecável!\n";
        std::cout << "Os juízes o observam com admiração, e o público o ovaciona. Ele não só se classifica, como se torna um dos favoritos ao título.\n";
    }
    else if (pontucaoTotal >= 25 && pontucaoTotal < 30) {
        std::cout << "Caio respira fundo ao ouvir o resultado. Foi por pouco, mas ele conseguiu se classificar.\n";
        std::cout << "A performance não foi brilhante, mas suficiente para passar. Ele sabe que há margem para melhorar.\n";
    }
    else {
        std::cout << "O silêncio pesa quando Caio vê seu nome fora da lista de classificados.\n";
        std::cout << "Apesar do esforço, o desempenho ficou abaixo do esperado. Ele sente o impacto das suas decisões, mas sabe que faz parte da vida.\n";
    }

}
