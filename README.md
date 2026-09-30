# Estudos em C

Repositório com atividades e exercícios de programação em C desenvolvidos durante a faculdade.

## Estrutura do Repositório

### 📚 Lógica de Programação
Arquivos iniciais com conceitos básicos:
- `LogicaDeProgramacao_ATV (1).c` a `(11).c` — Primeiros programas, entrada/saída, variáveis, operadores
- Inclui versões `.cpp` (C++) para alguns exercícios

### 📝 Listas de Exercícios
**Lista 2** (16 exercícios) — Estruturas de decisão, loops, funções básicas:
- Cálculo de salário com reajuste
- Operações matemáticas
- Condicionais e laços de repetição

**Lista 3** (8 exercícios) — Tópicos mais avançados:
- Arrays/vetores
- Manipulação de strings
- Funções com parâmetros

### 🎯 Exercícios Individuais
`exercicio01.c` a `exercicio17.c` — Prática progressiva:
- Operações aritméticas básicas
- Estruturas condicionais (if/else)
- Laços (for, while, do-while)
- Funções e modularização
- Vetores e matrizes
- Ponteiros (básico)

### 📄 Outros Arquivos
- `Prova.c` — Exercício de avaliação
- `lucro.c` — Cálculo de lucro/prejuízo
- `Untitled*.c` — Rascunhos e testes diversos

## Como Compilar e Executar

```bash
# Compilar um arquivo específico
gcc exercicio01.c -o exercicio01

# Executar
./exercicio01
```

Ou compile todos de uma vez:
```bash
for f in *.c; do gcc "$f" -o "${f%.c}"; done
```

## Progresso de Aprendizado

| Fase | Conceitos | Arquivos |
|------|-----------|----------|
| Iniciante | Hello World, printf/scanf, variáveis | LogicaDeProgramacao_ATV (1-3) |
| Básico | Operadores, if/else, loops | Lista 2, exercicio01-07 |
| Intermediário | Funções, vetores, strings | Lista 3, exercicio08-13 |
| Avançado | Ponteiros, structs, arquivos | exercicio14-17, Prova.c |

## Observações

- Código escrito para fins educacionais
- Alguns arquivos podem conter warnings de compilação (uso de `gets`, encoding de caracteres especiais)
- Comentários em português
- Padrão C99/C11

---

*Atualizado conforme novos exercícios são adicionados ao longo do semestre.*