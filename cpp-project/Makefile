CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC_DIR  = src
TEST_DIR = test
BIN_DIR  = bin

# Todos os .cpp em src/ exceto main.cpp (para montar a biblioteca)
LIB_SRCS = $(filter-out $(SRC_DIR)/main.cpp, $(wildcard $(SRC_DIR)/*.cpp))
LIB_OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.o, $(LIB_SRCS))

MAIN_SRC = $(SRC_DIR)/main.cpp
TARGET   = $(BIN_DIR)/programa

TEST_SRC = $(TEST_DIR)/main.cpp
TEST_BIN = $(BIN_DIR)/testeRegressivo

# -------------------------------------------------------
# Regra padrão: compila o projeto principal
# -------------------------------------------------------
all: $(BIN_DIR) $(TARGET)

$(TARGET): $(LIB_OBJS) $(BIN_DIR)/main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BIN_DIR)/main.o: $(MAIN_SRC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compila qualquer .cpp de src/ em .o dentro de bin/
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/bib.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# -------------------------------------------------------
# Executa o programa principal
# -------------------------------------------------------
run: all
	./$(TARGET)

# -------------------------------------------------------
# Compila e executa os testes regressivos
# -------------------------------------------------------
test: $(BIN_DIR) $(TEST_BIN)
	./$(TEST_BIN)

$(TEST_BIN): $(LIB_OBJS) $(BIN_DIR)/test_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BIN_DIR)/test_main.o: $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# -------------------------------------------------------
# Cria o diretório bin/ se não existir
# -------------------------------------------------------
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# -------------------------------------------------------
# Remove binários gerados
# -------------------------------------------------------
clean:
	rm -rf $(BIN_DIR)

.PHONY: all run test clean
