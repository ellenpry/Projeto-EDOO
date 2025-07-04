#include "EventosJoao.h"
#include "Escolha.h"

// Cria o primeiro evento de João
Evento criarEventoJoao1() {
    std::string contexto = "Com a prova chegando, João está pensando em ir estudar na biblioteca do CCEN.";

    std::vector<Escolha> escolhas = {
        Escolha("Ir estudar por conta própria", 0, 1, -1, 
                "João focou nos estudos sozinho, mas sentiu falta de interação social."),
        Escolha("Chamar os colegas pra estudar em grupo.", 1, 1, 0, 
                "João aproveitou o apoio do grupo e reforçou o aprendizado."),
        Escolha("Desistir e voltar para casa pra jogar com os amigos", 1, -1, 0, 
                "João se divertiu, mas perdeu tempo importante de estudo.")
    };

    return Evento(contexto, escolhas);
}

// Cria o segundo evento de João
Evento criarEventoJoao2() {
    std::string contexto = "O estresse pré-prova está acabando com o clima dentro de sala de aula. Percebendo isso, Marcos, grande amigo de João, o chama pra sair na sexta-feira e tomar umazinha.";

    std::vector<Escolha> escolhas = {
        Escolha("Aceitar sair com Marcos", 1, 0, -1, 
                "João relaxou e se divertiu, mas chegou cansado para os estudos."),
        Escolha("Recusar, pois precisa estudar.", -1, 2, 0, 
                "João manteve o foco nos estudos, melhorando sua preparação."),
        Escolha("Mentir para Marcos!!! João mente afirmando que vai sair com a namorada.", -2, 1, 0, 
                "João tentou evitar o convite, mas a mentira pode gerar desconforto futuro.")
    };

    return Evento(contexto, escolhas);
}

// Cria o terceiro evento de João
Evento criarEventoJoao3() {
    std::string contexto = "O Grande Sábio da Área 2, William vai dar um aulão pré-prova!!! Será que João deve participar?";

    std::vector<Escolha> escolhas = {
        Escolha("Ir pro aulão e aprender os macetes da prova.", 0, 2, -1, 
                "João aprendeu bastante no aulão, mas acabou cansado no dia seguinte."),
        Escolha("Descansar em casa com a família.", 1, 0, 1, 
                "João descansou bem e recuperou energia para a prova."),
        Escolha("Ensinar os colegas que estão precisando.", 2, 1, 0, 
                "João fortaleceu amizades e consolidou seu conhecimento ensinando.")
    };

    return Evento(contexto, escolhas);
}

// Cria o quarto evento de João
Evento criarEventoJoao4() {
    std::string contexto = "No dia da prova, João é chamado para revisar com os colegas antes da prova. Eles sabem que João é a pessoa mais preparada para prova.";

    std::vector<Escolha> escolhas = {
        Escolha("Ir se encontrar com seus amigos para estudar", 1, 2, 0, 
                "João ajudou os colegas e reforçou seus conhecimentos, aumentando a confiança."),
        Escolha("Decide estudar em casa.", -1, 2, 1, 
                "João focou nos estudos e descansou, chegando bem preparado para a prova."),
        Escolha("Diz aos seus amigos que quer esfriar a mente antes da prova", -1, 0, 2, 
                "João relaxou para evitar o estresse, mas estudou menos do que gostaria.")
    };

    return Evento(contexto, escolhas);
}