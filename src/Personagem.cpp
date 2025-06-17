#include "Personagem.h"
#include <iostream>

// classe personagem
Personagem::Personagem(std::wstring nome)
    : nome(std::move(nome)), conforto(0), estresse(0) {}

std::wstring Personagem::getNome() const {
    return nome;
}

// retorna o nivel atual de conforto
int Personagem::getConforto() const {
    return conforto;
}

// retorna o nivel atual de estresse
int Personagem::getEstresse() const {
    return estresse;
}

void Personagem::aumentarConforto(int valor) {
    conforto += valor;
}

void Personagem::aumentarEstresse(int valor) {
    estresse += valor;
}

// metodo virtual para reagir a uma situacao
// a ideia e que classes filhas possam mudar esse comportamento
void Personagem::reagirSituacao(const std::wstring& situacao) {
    situacoes_passadas.push_back(situacao);
    std::wcout << nome << L" passou pela situacao: " << situacao << std::endl;
}

// mostra o estado atual do personagem no terminal
void Personagem::mostrarEstado() const {
    std::wcout << L"nome: " << nome << std::endl;
    std::wcout << L"conforto: " << conforto << std::endl;
    std::wcout << L"estresse: " << estresse << std::endl;
    std::wcout << L"situacoes passadas: " << std::endl;

    for (const auto& s : situacoes_passadas) {
        std::wcout << L"- " << s << std::endl;
    }
}