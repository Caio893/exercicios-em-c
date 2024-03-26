#include <stdio.h>
#include <string.h> // para strcmp

int main() {
    float salario, desconto, novo_salario;
    char sexo[2]; // Alterado para uma string de tamanho 2

    printf("Digite o valor do seu salário para sabermos o desconto: \n");
    scanf("%f", &salario);

    printf("Qual seu sexo de nascimento ('M' para masculino, 'F' para feminino): \n");
    scanf("%s", sexo); // Lendo uma string

    if (salario <= 600 && strcmp(sexo, "M") == 0) {
        desconto = salario * (20.0/100.0);
        novo_salario = salario - desconto;
        printf("Seu desconto é de %.1f R$\n", desconto);
    }
    else if (salario <= 1200 && strcmp(sexo, "F") == 0) {
        desconto = salario * (20.0/100.0);
        novo_salario = salario - desconto;
        printf("Seu desconto é de %.1f R$\n", desconto);       
    }
    else if (salario <= 2000 && strcmp(sexo, "M") == 0) {
        desconto = salario * (25.0/100.0);
        novo_salario = salario - desconto;
        printf("Seu desconto é de %.1f R$\n", desconto);    
    }
    else {
        desconto = salario * (30.0/100.0);
        novo_salario = salario - desconto;
        printf("Seu desconto é de %.1f R$\n", desconto);
    }
    return 0;
}

/*Aqui existem várias mudanças para serem anotadas.
Na versão 1.0 Há alguns erros de sintaxe e de lógica no seu código. Vou destacar os principais problemas:
No seu código, as estruturas de controle de fluxo if, else if e else devem ser seguidas por blocos de código delimitados por chaves {}. Se o bloco contém mais de uma instrução, deve ser delimitado por chaves, mesmo se houver apenas uma instrução no bloco. No seu código, o if, else if e else não estão utilizando chaves, o que faz com que apenas a primeira instrução após a condição seja considerada no bloco. Se você quiser mais de uma instrução em cada bloco, você precisa delimitá-las por chaves.
No C, você não pode comparar strings diretamente com o operador ==. Em vez disso, você deve usar a função strcmp() para comparar strings.
Ao usar scanf() para ler um caractere, você precisa ter cuidado com a quebra de linha pendente no buffer de entrada, que pode ser deixada pela leitura anterior. Para evitar isso, você pode adicionar um espaço antes do %c na sua chamada scanf(), o que faz com que scanf() ignore espaços em branco, incluindo quebras de linha.
Aqui está uma versão corrigida do seu código: ...
Além disso, o cálculo do novo salário pareceu estar incorreto. O novo salário deve ser calculado subtraindo o desconto do salário original. Eu corrigi isso no código acima. Certifique-se de que esteja de acordo com o que você pretende calcular.

Na versão 2.0 Se você deseja comparar strings em C, você pode usar a função strcmp() da biblioteca string.h. Aqui está como você pode modificar seu código para usar strcmp() para comparar strings:
Aqui, strcmp() compara a string sexo com a string "M" ou "F". Se as strings forem iguais, strcmp() retorna 0. Se as strings forem diferentes, ele retorna um valor diferente de zero. Por isso, estamos verificando se strcmp(sexo, "M") == 0 ou strcmp(sexo, "F") == 0 para determinar o sexo. Certifique-se de declarar sexo como uma string com tamanho suficiente para armazenar o caractere mais o caractere nulo terminador.

Na versão 3.0 O aviso que você está recebendo é devido ao fato de que sexo é uma variável do tipo char, enquanto strcmp() espera argumentos do tipo const char *. Isso ocorre porque strcmp() espera ponteiros para strings (arrays de caracteres), não apenas caracteres individuais.

Para resolver isso, você pode declarar sexo como uma string de tamanho suficiente para armazenar o caractere mais o caractere nulo terminador, e você pode usar scanf() para ler uma string em vez de um caractere único. Aqui está o código modificado para fazer isso:
Aqui, sexo é declarado como um array de caracteres com tamanho 2 para armazenar um caractere e o caractere nulo terminador. A leitura da entrada foi modificada para ler uma string usando %s. Isso resolverá os avisos que você estava recebendo. */