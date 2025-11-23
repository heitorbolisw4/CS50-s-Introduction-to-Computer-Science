# CS50 – Minhas soluções

Este repositório reúne minhas soluções dos exercícios, labs e problem sets do curso **CS50 – Introduction to Computer Science (Harvard)**.  
Aqui registro meu progresso em **C**, lógica, algoritmos e fundamentos de computação.

> ⚠️ Aviso importante  
> Este repositório é **pessoal** e **não é oficial** do CS50 ou de Harvard.  
> Se você também estiver fazendo o curso, use este código apenas como **referência de estudo**. Não copie soluções – isso viola a política de honestidade acadêmica do curso.

---

## Estrutura do repositório

Exemplo de organização (vou ajustando conforme avanço nas semanas):

- `week0/` – Fundamentos iniciais / Scratch (se aplicável)
- `week1/` – C, tipos, condições, loops
- `week2/` – Arrays, strings, algoritmos simples
- `week3/` – Algoritmos de busca e ordenação
- `week4/` – Memória (ponteiros, alocação, etc.)
- `week5/` – Estruturas de dados
- `week6/` – Python
- `week7/` – SQL
- `week8/` – Web
- `labs/` – Laboratórios separados por semana
- `notes/` – Anotações, testes e experimentos pessoais

_Nomes e pastas podem mudar com o tempo, conforme eu reorganizar o conteúdo._

---

## Ambiente de desenvolvimento

Atualmente estou utilizando:

- **WSL (Ubuntu)** em um ambiente Windows  
- Compilador **gcc** ou **clang**
- Editor/IDE: **VS Code**

Você pode adaptar para seu próprio ambiente (Linux nativo, macOS, etc.).

---

## Como compilar e executar (C)

Dentro de uma pasta com um arquivo `.c`:

```bash
# Compilar
gcc -o programa programa.c -std=c11 -Wall -Wextra -Werror

# Executar
./programa
