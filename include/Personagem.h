#ifndef PERSONAGEM_H
#define PERSONAGEM_H
// esse bloco impede que o arquivo seja carregado mais de uma vez
// evita erro de redefinicao da classe personagem

#include <string>
#include <vector>

class Personagem {
protected:
    std::wstring nome;
    int conforto;    // o quanto o personagem se sente bem
    int estresse;    // o quanto o personagem se sente desconfortavel
    std::vector<std::wstring> situacoes_passadas;

public:
    Personagem(std::wstring nome);
    virtual ~Personagem() = default;

    std::wstring getNome() const;
    int getConforto() const;
    int getEstresse() const;

    void aumentarConforto(int valor);
    void aumentarEstresse(int valor);

    virtual void reagirSituacao(const std::wstring& situacao);

    void mostrarEstado() const;
};

#endif // PERSONAGEM_H
