#include "Joao.h"
#include "EventosJoao.h"
#include <iostream>

Joao::Joao() {
    nome = "João";
    carisma = 3;
    carismaInicial = 3;

    resistencia = 3;
    resistenciaInicial = 3;

    inteligencia = 4;
    inteligenciaInicial = 4;
}

void Joao::inicializarEventos() {
    eventos.clear();
    
    std::cout << nome << " iniciou seus eventos!\n";
    eventos.push_back(criarEventoJoao1());
    eventos.push_back(criarEventoJoao2());
    eventos.push_back(criarEventoJoao3());
    eventos.push_back(criarEventoJoao4());
    
    std::cout << eventos.size() << " eventos carregados para João\n";
}

void Joao::tomarDecisao() {
    // Chama a implementação base que mostra os eventos e processa escolhas
    Personagem::tomarDecisao();
    
    // Comportamento específico do João pode ser adicionado aqui
    // std::cout << "João fez algo especial!\n";
}

void Joao::gerarFeedback() {
    // Primeiro chama o feedback base
    Personagem::gerarFeedback();
    
    // Depois adiciona feedback específico do João
    std::cout << "\n=== FEEDBACK ESPECÍFICO DO JOÃO ===\n";

    if (carisma >= 4) {
        std::cout << "João se relacionou bem com seus colegas, criando um clima amigável.\n";
    }
    else if (carisma < 4) {
        std::cout << "João acabou se distanciando dos seus amigos... Eles aparentam estar magoados.\n";
    }

    if (resistencia >= 4) {
        std::cout << "João realizou uma boa prova, devido as energias guardadas para a prova.\n";
    }
    else if (resistencia < 4) {
        std::cout << "João estava exausto. Durante a prova, seu cansaço atrapalhou seus pensamentos.\n";
    }

    if (inteligencia >= 4) {
        std::cout << "João estava bem preparado para prova, sua nota com certeza será boa!\n";
    }
    else if (inteligencia < 4) {
        std::cout << "João poderia ter estudado mais... Quem sabe ele estuda mais na próxima.\n";
    }


    std::cout << "===============================\n";

    pontucaoTotal = inteligencia * 3 + resistencia * 2 + carisma;

    std::cout << "\n=== RESULTADO FINAL ===\n";

    if (pontucaoTotal >= 30) {
        std::cout << "João teve um desempenho excelente! Ele estudou bastante e se preparou muito bem para a prova.\n";
        std::cout << "Tudo indica que sua nota será muito boa e ele está no caminho certo para o sucesso.\n";
    }
    else if (pontucaoTotal >= 25 && pontucaoTotal < 30) {
        std::cout << "João mostrou pontos positivos em sua prova, mas ainda há aspectos que podem ser melhorados.\n";
        std::cout << "Com mais atenção e preparo, ele tem potencial para melhorar bastante nas próximas avaliações.\n";
    }
    else {
        std::cout << "João enfrentou dificuldades durante a prova. Seu preparo deixou a desejar.\n";
        std::cout << "É importante que ele se dedique mais e cuide do seu bem-estar para alcançar melhores resultados.\n";
    }
}