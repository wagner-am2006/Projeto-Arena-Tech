# Projeto Arena Tech — Planejador de Maratona Gamer

> **Projeto 1** da disciplina de Algoritmos e Pensamento Computacional  
> **Professor:** Vinicius Alves  

---

## Integrantes do Grupo

- **Maria Eduarda Flausino Alves** — *RGM:* `49177681`
- **Wagner Alves Moreira** — *RGM:* `47547821`

---

## Descrição da Solução

O programa foi desenvolvido em **linguagem C** com o objetivo de automatizar a estimativa e a organização dos custos do evento **Arena Tech**.

### Como Funciona:
1. **Entrada de Dados:** O sistema solicita e lê as informações essenciais digitadas pelo usuário (quantidade de participantes, número de computadores, potência das máquinas, duração do evento e valores monetários).
2. **Processamento e Cálculos:**
   - **Times Necessários:** Divisão dos participantes pelos jogadores por time, utilizando a função `ceil()` para arredondar para cima (garantindo que times incompletos sejam contabilizados).
   - **Consumo de Energia (kWh):** Calculado a partir da multiplicação de computadores, potência em Watts e horas de uso, dividido por `1000`.
   - **Custos:** Cálculo individual do custo de energia e alimentação, somado aos demais custos fixos para obter o **Custo Total**.
   - **Custo por Participante:** Divisão do custo total pelo número total de participantes.
3. **Relatório Final:** Exibição clara e organizada de todas as métricas calculadas com formatação de duas casas decimais para valores financeiros.

---

## Tecnologias e Compilação

- **Linguagem:** C
- **Bibliotecas:** `<stdio.h>`, `<math.h>`


