
# 🎓 Projeto SocialQuest

Projeto da disciplina de **Estrutura de Dados Orientada a Objetos**, no Centro de Informática da **Universidade de Pernambuco**, ministrada pelo Professor **Francisco Paulo Magalhães**.  
O objetivo do trabalho foi desenvolver um jogo interativo em **C++**, aplicando conceitos fundamentais da **Programação Orientada a Objetos (POO)**, como **herança**, **polimorfismo**, **encapsulamento**, além de boas práticas de organização de código e modularidade.

## 🎮 Sobre o Jogo

**SocialQuest** é um jogo narrativo em terminal onde o jogador acompanha a rotina de um dos três personagens: **João**, **Caio** ou **Alice**.  
Ao longo do jogo, cada decisão afeta atributos principais (**Carisma**, **Inteligência** e **Resistência**) e leva a finais diferentes, oferecendo um **feedback personalizado** ao final da jornada.

## 🛠️ Funcionalidades

- **Escolha de personagens**: Cada um com atributos e eventos exclusivos.
- **Eventos interativos**: Com múltiplas opções de decisão.
- **Sistema de atributos**: Decisões impactam diretamente Carisma, Inteligência e Resistência.
- **Feedback final**: Relatório com análise das escolhas e evolução dos atributos.
- **Narrativa ramificada**: Diferentes combinações de escolhas levam a finais distintos.

## 📃 Estrutura do Projeto

O projeto está organizado de forma modular, seguindo boas práticas de separação de interface (arquivos `.h`) e implementação (arquivos `.cpp`):

```
📂 include/
├── Personagem.h
├── Alice.h
├── Caio.h
├── Joao.h
├── Evento.h
├── Escolha.h
├── Jogo.h
└── Menu.h

📂 src/
├── Personagem.cpp
├── Alice.cpp
├── Caio.cpp
├── Joao.cpp
├── Evento.cpp
├── Escolha.cpp
├── Jogo.cpp
├── Menu.cpp
└── main.cpp
```

- **include/**: arquivos de cabeçalho (.h) com definições das classes e métodos.
- **src/**: arquivos de implementação (.cpp) com a lógica do jogo.
- **main.cpp**: ponto de entrada do programa.

## 🧩 Conceitos de Orientação a Objetos Aplicados

### ✅ Herança
Classe base **Personagem** com atributos e métodos comuns.  
**João**, **Caio** e **Alice** herdam dela, mantendo comportamentos compartilhados e adicionando particularidades.

### ✅ Polimorfismo
Métodos virtuais como `inicializarEventos()`, `tomarDecisao()` e `gerarFeedback()` são sobrescritos nas classes derivadas, permitindo respostas diferentes para cada personagem.

### ✅ Encapsulamento
Atributos são private ou protected, garantindo segurança e consistência. Alterações só ocorrem por métodos controlados.

### ✅ Composição/Agregação
- A classe **Jogo** possui uma composição com o personagem selecionado.
- A classe **Evento** contém uma lista de **Escolhas**, representando as decisões disponíveis para o jogador.

## 🚀 Fluxo do Jogo

1️⃣ **Início**: Execução do `main()` inicializa o jogo.  
2️⃣ **Menu principal**: Permite começar, conhecer personagens ou sair.  
3️⃣ **Escolha de personagem**: Selecionar João, Caio ou Alice.  
4️⃣ **Eventos**: Tomar decisões que modificam atributos.  
5️⃣ **Feedback final**: Exibe evolução de atributos e resultado da jornada.  
6️⃣ **Reiniciar**: Jogador pode começar uma nova jornada.

## 📦 Como Jogar

### 📌 Pré-requisitos
- Compilador C++ (g++)
- Terminal (Windows, Linux ou MacOS)

### 🔧 Compilação e Execução

```bash
# Crie um diretório para saída (executar apenas na primeira vez)
mkdir output

# Compile todos os arquivos fonte
g++ src/*.cpp -Iinclude -o output/SocialQuest.exe

# Execute o jogo
./output/SocialQuest.exe
```

## 👥 Equipe

| Nome     | GitHub                        |
|---------|-------------------------------|
| Millena Ellen| [@Millena](https://github.com/) |
| Júlia Maria  | [@Julia](https://github.com/)   |
| Lucas Emanoel| [@Lucas](https://github.com/)   |
| Vinícius Pena| [@Vinicius](https://github.com/ViniciusCavalcantiap)|

## 🔍 Divisão de Responsabilidades

- **Menu e fluxo do sistema** — Millena  
- **Implementação dos personagens** — Júlia  
- **Eventos e escolhas** — Lucas  
- **Interface e relatório final** — Vinícius  

Toda a equipe colaborou na **criação dos personagens, eventos e narrativa**.

## 📝 Conclusão

O **SocialQuest** demonstra, de forma prática, os principais conceitos de **POO** aplicados em C++, utilizando herança, polimorfismo e encapsulamento.  
Com um design modular, permite fácil expansão e manutenção, servindo como exemplo de como estruturar projetos C++ orientados a objetos.

🎮 Experimente jogar, tomar decisões e descubra como suas escolhas impactam a jornada do personagem!
