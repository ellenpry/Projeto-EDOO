#ifndef AUTISTA_H
#define AUTISTA_H
// mesma ideia que eu comentei em personagm.h

#include "Personagem.h"

// classe filha 'autista'
class Autista : public Personagem {
public:
    Autista(std::wstring nome);
    void reagirSituacao(const std::wstring& situacao) override;
};

#endif // AUTISTA_H