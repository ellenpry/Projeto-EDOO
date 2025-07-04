#include "EventosCaio.h"
#include "Escolha.h"

// Cria o primeiro evento de Caio
Evento criarEventoCaio1() {
    std::string contexto = "Durante um treino intenso, Caio sente um desconforto incomum na perna. Ainda não é uma lesão grave, mas algo parece errado.";

    std::vector<Escolha> escolhas = {
        Escolha("Ignorar o sinal e continuar o treino normalmente.", 0, -1, 1, 
                "Caio forçou demais a perna, o que pode piorar a lesão futuramente."),
        Escolha("Diminuir o ritmo e relatar ao treinador.", -1, 1, 0, 
                "Caio evitou maiores problemas e recebeu orientação para recuperação."),
        Escolha("Encerrar o treino do dia e procurar um fisioterapeuta.", 0, 1, -1, 
                "Caio cuidou da saúde, priorizando a recuperação, mas perdeu tempo de treino.")
    };

    return Evento(contexto, escolhas);
}

// Cria o segundo evento de Caio
Evento criarEventoCaio2() {
    std::string contexto = "Uma empresa de apostas esportivas propõe patrocinar Caio com alto valor e visibilidade. A proposta divide opiniões entre colegas e seu treinador.";

    std::vector<Escolha> escolhas = {
        Escolha("Aceitar o patrocínio sem consultar ninguém.", 1, -1, 0, 
                "Caio garantiu um bom patrocínio, mas gerou desconforto entre colegas e família."),
        Escolha("Recusar, mantendo distância de temas polêmicos.", -1, 1, 0, 
                "Caio evitou polêmicas, mantendo boa relação com todos, mas perdeu a chance financeira."),
        Escolha("Levar o assunto para debate com o treinador e a família.", 0, 1, -1, 
                "Caio tomou uma decisão mais consciente, equilibrando opiniões e riscos.")
    };

    return Evento(contexto, escolhas);
}

// Cria o terceiro evento de Caio
Evento criarEventoCaio3() {
    std::string contexto = "Na véspera da prova, os colegas chamam Caio para uma festa";

    std::vector<Escolha> escolhas = {
        Escolha("Ir à festa e aproveitar com os amigos.", 1, 0, -1, 
                "Caio se divertiu, mas chegou cansado para a prova."),
        Escolha("Recusar e descansar.", -1, 0, 1, 
                "Caio descansou bem, chegando preparado para o desafio."),
        Escolha("Ir, mas sair cedo.", 0, 1, -1, 
                "Caio aproveitou a festa sem exagerar, mas ainda assim ficou um pouco cansado.")
    };

    return Evento(contexto, escolhas);
}

// Cria o quarto evento de Caio
Evento criarEventoCaio4() {
    std::string contexto = "Durante o fim treinamento, o treinador de Caio cobra a ele para se esforçar mais, mesmo estando extremamente cansado";

    std::vector<Escolha> escolhas = {
        Escolha("Discutir com o treinador.", -1, 0, 1, 
                "Caio expressou seu cansaço, mas criou um clima tenso com o treinador."),
        Escolha("Não falar nada e continuar treinado.", 1, 0, -1, 
                "Caio mostrou força de vontade, mas seu corpo sofreu as consequências."),
        Escolha("Avisar ao treinador que está extremamente cansado.", 0, 1, 1, 
                "Caio foi honesto, recebendo apoio para se recuperar sem perder o foco.")
    };

    return Evento(contexto, escolhas);
}