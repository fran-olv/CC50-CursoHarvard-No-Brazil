# Semana 1: Linguagem C

# Aprendizados

## Execução e Compilação em C

- Compilação em C:
```make <nome do arquivo.c>```

- Execução em C:
```.\<nome do arquivo>```
> o arquivo que será executado, não tem a extenção ```.c``` porque o que será executado é o que foi compilado

- Correção do Exercício Proposto
Normalmente quando tem algum exercício que o CS50 tem teste para corrigir.

> check50 irá verificar a exatidão do nosso código com alguns testes automatizados. A equipe escreve testes especificamente para alguns dos programas que escreveremos no curso, e as instruções para usar o check50 serão incluídas em cada conjunto de problemas ou laboratório, conforme necessário. Depois de executar check50, veremos algum output nos informando se nosso código passou nos testes relevantes.

Eles fornecem o comando que faz essa verificação. 
seu código está correto usando check50. E o style50 verifica o stilo de escrita.
Na semana 1 tivemos:

```check50 cs50/problems/2021/x/hello```

```check50 cs50/problems/2021/x/mario/less```

```style50 mario.c```


---
## Tipos e Códigos de Formato

### tipos de dados
tipo de dado   | caracterítica 
--------- | :------
bool  | expressão booleana verdadeira ou falsa
char  | único caractere ASCII como a ou 2
double  | valor com vírgula flutuante com mais dígitos do que um float
float  |  valor com vírgula flutuante ou número real com um valor decimal
int   |  inteiros até um certo tamanho ou número de bits
long   |   inteiros com mais bits, para que possam contar mais do que um int
string   |  uma linha de caracteres

Biblioteca CS50 tem funções correspondentes para obter entrada de vários tipos:

- ```get_char```
- ```get_double``` 
- ```get_float``` 
- ```get_int``` 
- ```get_long``` 
- ```get_string```

Para ```printf```, também, existem diferentes marcadores de posição para cada tipo:

 - ```%c```  para caracteres
 - ```%f```  para flutuadores, duplos
 - ```%i```  para ints
 - ```%li```  para longos
 - ```%s```  para strings

### Casting - converção de tipo de dado
exemplo: 
```float z = (float) x / (float) y;```

---

### Loop

quando colocamos while (true) - queremos que esse loop seja executado para sempre

---

### Memória, imprecisão e Estouro

- _Imprecisão de vírgula flutuante_ quando não temos bits suficientes para armazenar todos os valores possíveis. Com um número finito de bits para um float , não podemos representar todos os números reais possíveis (dos quais existe um número infinito de), então o computador tem que armazenar o valor mais próximo que puder. E isso pode levar a problemas em que mesmo pequenas diferenças no valor se somam, a menos que o programador use alguma outra maneira para representar os valores decimais com a precisão necessária.

- _overflow (“vazamento”) de inteiro_ quando temos um número limitado de bits para representar números, quando esse número chega no limite, começamos a perder informações. 

> Temos três bits e precisamos contar mais do que sete (ou 111), adicionamos outro bit para obter oito, 1000 . Mas se tivéssemos apenas três bits disponíveis, não teríamos lugar para o 1 extra . Ele desapareceria e estaríamos de volta a 000.

> O problema Y2K surgiu porque muitos programas armazenavam o ano civil com apenas dois dígitos, como 98 para 1998 e 99 para 1999. Mas quando o ano 2000 se aproximou, os programas tiveram que armazenar apenas 00, levando a confusão entre os anos 1900 e 2000

> Em 2038, também ficaremos sem bits para rastrear o tempo, já que há muitos anos alguns humanos decidiram usar 32 bits como o número padrão de bits para contar o número de segundos desde 1º de janeiro de 1970. Mas com 32 bits representando apenas números positivos, só podemos contar até cerca de quatro bilhões e, em 2038, atingiremos esse limite, a menos que atualizemos o software em todos os nossos sistemas de computador: 18 de janeiro de 2038




## Árvore de arquivos de codificação

```
hello/
│   └── hello.c
│   └── additional.c
│   └── truncation.c
│   └── condition.c
│   └── concorda.c
│   └── miaw.c
│   └── get_positive_int.c
│   └── mario.c
pset1/
└── mario
│   └── pseudocodigo.txt
│   └── mario.c

```
