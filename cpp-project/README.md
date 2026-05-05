# 🖥️ cpp-estudos-ufop

![C++](https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=c%2B%2B)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow?style=for-the-badge)
![UFOP](https://img.shields.io/badge/UFOP-BCC-red?style=for-the-badge)

> Repositório de projetos e exercícios práticos em C++ desenvolvidos durante o curso de Ciência da Computação na Universidade Federal de Ouro Preto (UFOP).

---

## 📋 Índice

- [Sobre o Projeto](#-sobre-o-projeto)
- [Estrutura de Diretórios](#-estrutura-de-diretórios)
- [Pré-requisitos](#-pré-requisitos)
- [Como Compilar](#-como-compilar)
- [Funcionalidades](#-funcionalidades)
- [Testes](#-testes)
- [Fluxo de Desenvolvimento](#-fluxo-de-desenvolvimento-gitflow)
- [Autor](#-autor)

---

## 📖 Sobre o Projeto

Este repositório reúne implementações em C++ com foco em boas práticas de versionamento, estruturação de projetos e desenvolvimento orientado a testes (TDD). O fluxo de trabalho segue o modelo **GitFlow**, com branches `master`, `staging` e `develop`.

---

## 📁 Estrutura de Diretórios

```
cpp-estudos-ufop/
├── src/          # Código-fonte principal (.cpp e .hpp)
│   ├── main.cpp
│   ├── bib.hpp
│   └── bib.cpp
├── include/      # Cabeçalhos externos / bibliotecas de terceiros
├── bin/          # Binários gerados pela compilação (ignorados pelo Git)
├── test/         # Testes funcionais / regressivos
│   └── main.cpp
├── doc/          # Documentação do projeto
├── .gitignore
├── Makefile
└── README.md
```

---

## 🔧 Pré-requisitos

- GCC / G++ (versão 9 ou superior)
- GNU Make
- Git

```bash
# Ubuntu/Debian
sudo apt install build-essential git

# Arch/CachyOS
sudo pacman -S base-devel git
```

---

## ⚙️ Como Compilar

```bash
# Compilar o projeto principal
make

# Compilar e executar
make run

# Compilar e executar os testes regressivos
make test

# Limpar binários gerados
make clean
```

---

## 🚀 Funcionalidades

### `calcularFatorial(int n)`
Calcula o fatorial de um número inteiro não-negativo.

```cpp
#include "bib.hpp"
int resultado = calcularFatorial(5); // retorna 120
```

### `calcularFibonacci(int n)`
Retorna o n-ésimo termo da sequência de Fibonacci.

```cpp
#include "bib.hpp"
int resultado = calcularFibonacci(7); // retorna 13
```

---

## 🧪 Testes

Os testes funcionais ficam em `test/main.cpp` e utilizam `assert` para validação. O binário de teste é gerado em `bin/testeRegressivo`.

```bash
make test
# Saída esperada: Todos os testes passaram!
```

---

## 🌿 Fluxo de Desenvolvimento (GitFlow)

| Branch      | Finalidade                                      |
|-------------|--------------------------------------------------|
| `master`    | Código estável em produção                       |
| `staging`   | Código aceito pelo P.O., aguardando produção     |
| `develop`   | Integração das features em desenvolvimento       |
| `feat/...`  | Branch de feature, criada a partir de `develop`  |

**Boards de Issues:**
- 📌 Sprint Backlog → 🔨 Doing → ⏳ Waiting Acceptance → ✅ Done

---

## 👤 Autor

Desenvolvido por **Rafael** — Estudante de BCC/UFOP  
📍 Ouro Preto, MG

---

*"Talk is cheap. Show me the code."* — Linus Torvalds
