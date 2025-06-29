# compilador a ser usado
CXX = g++

# flags para compilação
CXXFLAGS = -Wall -Wextra -g3 -Iinclude

# pasta onde estão os arquivos fonte
SRC = src

# pasta para colocar o executável gerado
BIN = build

# nome do executável
TARGET = $(BIN)/jogo.exe

# arquivos fonte do projeto
SRCS = \
	$(SRC)/main.cpp \
	$(SRC)/Personagem.cpp \
	$(SRC)/Joao.cpp \
	$(SRC)/Caio.cpp \
	$(SRC)/Alice.cpp \
	$(SRC)/Evento.cpp \
	$(SRC)/Escolha.cpp

# regra padrão: compila tudo e gera o executável
all: $(TARGET)

# cria o executável a partir dos arquivos fonte
$(TARGET): $(SRCS)
	@mkdir -p $(BIN)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# regra para apagar o executável
clean:
	rm -rf $(BIN)

# comando manual para compilar e executar (caso queira rodar diretamente)
run:
	$(MAKE)
	./$(TARGET)
