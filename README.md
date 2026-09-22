# Projeto-Arena-Tech

Participantes do projeto:

Maria Eduarda Flausino Alves - RGM: 
Wagner Alves Moreira - RGM: 47547821

### Explicação da Solução - Arena Tech

O programa foi desenvolvido em linguagem C para ajudar na organização dos custos do evento. 
Primeiro, solicitamos e lemos os dados de entrada informados pelo usuário, como quantidade de participantes, computadores, potência e preços. 
Em seguida, realizamos os cálculos aritméticos do evento:
- Calculamos a quantidade de times dividindo o total de participantes pelo limite por time, usando a função `ceil()` para arredondar para cima.
- O consumo de energia foi calculado multiplicando computadores, potência e horas de duração, convertendo para kWh ao dividir por 1000.
- Calculamos os custos de energia, alimentação e o custo total somando todas as despesas.
- Por fim, dividimos o custo total pelo número de participantes para obter o valor por pessoa.
O programa exibe na tela um relatório limpo e organizado com os resultados formatados em duas casas decimais.
