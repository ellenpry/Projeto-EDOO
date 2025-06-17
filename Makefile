# compilador a ser usado
CXX = g++

# flags para compilação
# -Wall e -Wextra ativam warnings
# -g3 ativa debug info
# -Iinclude adiciona a pasta include para procurar os headers
CXXFLAGS = -Wall -Wextra -g3 -Iinclude

# pasta onde estão os arquivos fonte
SRC = src

# pasta para colocar o executavel gerado
BIN = build

# nome do executavel
TARGET = $(BIN)/jogo.exe

# arquivos fonte do projeto
SRCS = $(SRC)/main.cpp $(SRC)/Personagem.cpp $(SRC)/Autista.cpp

# regra padrão: compila tudo e gera o executavel
all: $(TARGET)

# regra para compilar e linkar o executavel a partir dos fontes
$(TARGET): $(SRCS)
	# cria a pasta build caso nao exista
	mkdir -p $(BIN)
	# comando para compilar e linkar
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# regra para apagar o executavel e recompilar do zero
clean:
	rm -f $(TARGET)

# rodar no terminal caso presice
g++ -Wall -Wextra -g3 -Iinclude src/main.cpp src/Personagem.cpp src/Autista.cpp -o output/main.exe && output\main.exe

# rodar o main.exe no terminal
.\output\main.exe

