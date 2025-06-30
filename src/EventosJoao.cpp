#include "EventosCaio.h"
#include "Escolha.h"

Evento criarEventoJoao1() {
    std::string contexto = "Com a prova chegando, João está pensando em  ir estudar na biblioteca do CCEN.";

    std::vector<Escolha> escolhas = {
        Escolha("Ir estudar por conta própria", 0, 1, -1),
        Escolha("Chamar os colegas pra estudar em grupo.", 1, 1, 0),
        Escolha("Desistir e voltar para casa pra jogar com os amigos", 1, -1, 0)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoJoao2() {
    std::string contexto = "O estresse pré-prova está acabando com o clima dentro de sala de aula. Percebendo isso, Marcos, grande amigo de João, o chama pra sair na sexta-feira e tomar umazinha.";

    std::vector<Escolha> escolhas = {
        Escolha("Aceitar sair com Marcos", 1, 0, -1),
        Escolha("Recusar, pois precisa estudar.", -1, 2, 0),
        Escolha("Mentir para Marcos!!! João mente afirmando que vai sair com a namorada.", -2, 1, 0)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoJoao3() {
    std::string contexto = "O Grande Sábio da Área 2, William vai dar um aulão pré-prova!!! Sera que João deve participar?";

    std::vector<Escolha> escolhas = {
        Escolha("Ir  pro aulão e aprender os macetes da prova.", 0, 2, -1),
        Escolha("Descansar em casa com a família.", 1, 0, 1),
        Escolha("Ensinar os colegas que estão precisando.", 2, 1, 0)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoJoao4() {
    std::string contexto = "No dia da prova, João é chamado para revisar com os colegas antes da prova. Eles sabem que João é a pessoa mais preparada para prova.";

    std::vector<Escolha> escolhas = {
        Escolha("Ir se encontrar com seus amigos para estudar", 1, 2, 0),
        Escolha("Decide estudar em casa.", -1, 2, 1),
        Escolha("Diz aos seus amigos que quer esfriar a mente antes da prova", -1, 0, 2)
    };

    return Evento(contexto, escolhas);
}