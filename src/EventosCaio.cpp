#include "EventosCaio.h"
#include "Escolha.h"

Evento criarEventoCaio1() {
    std::string contexto = "Durante um treino intenso, Caio sente um desconforto incomum na perna. Ainda não é uma lesão grave, mas algo parece errado.";

    std::vector<Escolha> escolhas = {
        Escolha("Ignorar o sinal e continuar o treino normalmente.", 0, -1, 1),
        Escolha("Diminuir o ritmo e relatar ao treinador.", -1, 1, 0),
        Escolha("Encerrar o treino do dia e procurar um fisioterapeuta.", 0, 1, -1)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoCaio2() {
    std::string contexto = "Uma empresa de apostas esportivas propõe patrocinar Caio com alto valor e visibilidade. A proposta divide opiniões entre colegas e seu treinador.";

    std::vector<Escolha> escolhas = {
        Escolha("Aceitar o patrocínio sem consultar ninguém.", 0, -1, 1),
        Escolha("Recusar, mantendo distância de temas polêmicos.", -1, 1, 0),
        Escolha("Levar o assunto para debate com o treinador e a família.", 0, 1, -1)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoCaio3() {
    std::string contexto = "Na véspera da prova, os colegas chamam Caio  para uma festa";

    std::vector<Escolha> escolhas = {
        Escolha("Ir à festa e aproveitar com os amigos.", 0, -1, 1),
        Escolha("Recusar e descansar.", -1, 1, 0),
        Escolha("Ir, mas sair cedo.", 0, 1, -1)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoCaio4() {
    std::string contexto = "Durante o fim treinamento, o treinador de Caio cobra a ele para se esforçar mais, mesmo estando extremamente cansado";

    std::vector<Escolha> escolhas = {
        Escolha("Discutir com o treinador.", 0, -1, 1),
        Escolha("Não falar nada e continuar treinado.", -1, 1, 0),
        Escolha("Avisar ao treinador que está extremamente cansado.", 0, 1, -1)
    };

    return Evento(contexto, escolhas);
}