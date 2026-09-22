#include <stdio.h>
#include <math.h>

int main(void) {
    // Declaração das variáveis
    int participantes, jogadoresPorTime, computadores;
    float potencia, duracao, precoKwh, precoKit, outrosCustos;
    
    int timesNecessarios;
    float consumoEnergia, custoEnergia, custoAlimentacao, custoTotal, custoPorParticipante;

    // Solicitação e leitura dos dados de entrada
    printf("Digite a quantidade de participantes: ");
    scanf("%d", &participantes);

    printf("Digite a quantidade de jogadores por time: ");
    scanf("%d", &jogadoresPorTime);

    printf("Digite a quantidade de computadores: ");
    scanf("%d", &computadores);

    printf("Digite a potencia dos computadores (em Watts): ");
    scanf("%f", &potencia);

    printf("Digite a duracao do evento (em horas): ");
    scanf("%f", &duracao);

    printf("Digite o preco do kWh (R$): ");
    scanf("%f", &precoKwh);

    printf("Digite o preco do kit de alimentacao (R$): ");
    scanf("%f", &precoKit);

    printf("Digite os outros custos (R$): ");
    scanf("%f", &outrosCustos);
    
    timesNecessarios = ceil((float)participantes / jogadoresPorTime);
    consumoEnergia = (computadores * potencia * duracao) / 1000;
    custoEnergia = consumoEnergia * precoKwh;
    custoAlimentacao = participantes * precoKit;
    custoTotal = custoEnergia + custoAlimentacao + outrosCustos;
    custoPorParticipante = custoTotal / participantes;
    
    // Saída dos dados, todos calculados 
    printf ("========== ARENA TECH ==========\n");
    printf ("Participantes: %d\n", participantes);
    printf ("Times necessários: %d\n", timesNecessarios);
    printf ("Consumo estimado: %.2f kWh\n", consumoEnergia);
    printf ("Custo da energia: R$ %.2f\n", custoEnergia);
    printf ("Custo da alimentação: R$ %.2f\n", custoAlimentacao);
    printf ("Outros custos: R$ %.2f\n", outrosCustos);
    printf ("CUSTO TOTAL: R$ %.2f\n", custoTotal);
    printf ("CUSTO POR PARTICIPANTE: R$ %.2f\n", custoPorParticipante);
    printf ("=================================\n");
    return 0;
}
