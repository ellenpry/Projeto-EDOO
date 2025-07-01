#include "EventosAlice.h"
#include "Escolha.h"

Evento criarEventoAlice1() {
    std::string contexto = "Alice está concentrada finalizando uma tarefa quando é chamada de surpresa para uma reunião com gestores de outro setor. não houve briefing prévio, e ela não sabe se precisará se posicionar ou apenas acompanhar. todos na sala parecem mais experientes, o que a deixa um pouco insegura.";

    std::vector<Escolha> escolhas = {
        Escolha("Improvisar com carisma e simpatia.", 1, -1, 0),
        Escolha("Ficar em silêncio e observar.", -1, 1, 0),
        Escolha("Tentar sair da reunião alegando estar sobrecarregada", -1, 0, 1)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoAlice2() {
    std::string contexto = "A equipe de Alice organiza uma happy hour de última hora para descontrair depois de uma semana intensa. ela foi convidada e sabe que seria bom se enturmar, mas está cansada e prefere dormir cedo para manter a rotina antes da entrevista.";

    std::vector<Escolha> escolhas = {
        Escolha("Ir e aproveitar até tarde com os colegas", 1, 0, -1),
        Escolha("Ir, mas sair cedo", 0, 1, -1),
        Escolha("Recusar e descansar em casa", -1, 0, 1)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoAlice3() {
    std::string contexto = "Na véspera da entrevista, Alice se sente nervosa e começa a duvidar de si mesma. ela pensa em revisar tudo de novo, mas também considera tentar relaxar. a ansiedade pesa, e ela precisa decidir como enfrentar a noite para chegar bem ao dia seguinte.";

    std::vector<Escolha> escolhas = {
        Escolha("Estudar até tarde com energético", 0, 1, -1),
        Escolha("Relaxar e dormir cedo", 0, -1, 1),
        Escolha("Ligar para um amigo e desabafar", 1, -1, 0)
    };

    return Evento(contexto, escolhas);
}

Evento criarEventoAlice4() {
    std::string contexto = "Parecendo nervosa, seus pais percebem que Alice não está apta para ir sozinha para a Empresa. Eles perguntam se Alice quer carona para entrevista.";

    std::vector<Escolha> escolhas = {
        Escolha("Aceita a carona e conversa com seus pais", 1, 0, 2),
        Escolha("Aceita a carona, mas decide estudar no carro", 0, 1, -1),
        Escolha("Não aceita a carona ", -1, -1, 0)
    };

    return Evento(contexto, escolhas);
}