# graph_paths

Matéria: Teoria e Aplicação de Grafos 117901
Segundo Semestre de 2019

Juliana Mayumi Hosoume 180048864

Compilado com g++ versão:
gcc version 5.5.0 20171010 (Ubuntu 5.5.0-12ubuntu1~16.04)

Para compilar o código, na pasta principal (root) do projeto:
$ make

Pode ser necessário realizar uma compilação limpa (eliminando os antigos binários), para isso fazer um
'clean':
$ make clean
$ make

Para executar o programa:
$ ./bin/cic_schedule

Diretórios:
bin : arquivo executável do tradutor
build : arquivos objeto
include : headers dos arquivos C++
src : código em C++ do tradutor
tests : alguns testes utilizados
Makefile : arquivo que auxilia na compilação


Para compilar sem utilizar o Makefile, realizar (considerando que
    os diretórios build e bin foram deletados):
$ mkdir build
$ mkdir bin

$ g++ -std=c++11 --pedantic -O3 -I include -c -o build/helper.o src/helper.cpp
$ g++ -std=c++11 --pedantic -O3 -I include -c -o build/cic_schedule.o src/cic_schedule.cpp
$ g++ -std=c++11 --pedantic -O3 -I include -c -o build/Time.o src/Time.cpp
$ g++ -std=c++11 --pedantic -O3 -I include -c -o build/Graph.o src/Graph.cpp
$ g++ build/helper.o build/cic_schedule.o build/Time.o build/Graph.o -o bin/cic_schedule -lm

---

O arquivo principal é o cic_schedule.cpp  -> nesse arquivo está a montagem do grafo, com as matérias como vértices com as informações de número de créditos e semestre. As arestas são formadas entre matérias com colisão e, portanto, não podem compartilhar coloração.

Foi escolhido um algoritmo guloso, já que encontrar o número de coloração mínima não é crítico. Esse algoritmo não garante que o mínimo de cores seja usado, no entanto para o problema apresentado, possui complexidade satisfatória para a solução. A medida que os vértices são coloridos, são apresentados os passos intermediários em tela.

A partir da execução do programa são gerados arquivos .dot para visualização pelo graphviz (http://www.graphviz.org/). São gerados dois arquivos, um com o grafo sem coloração (cic_curriculum.dot) e outro com o grafo colorido (colored_curriculum.dot). Para gerar os arquivos com as imagens, é necessária a instalação do graphviz. No ubuntu, pode ser realizado com o seguinte comando no terminal:
$ sudo apt-get install graphviz
Em seguida, realiza os comandos:
$ dot -Tpng cic_curriculum.dot -o cic_curriculum.png
$  dot -Tpng colored_curriculum.dot -o colored_curriculum.png
Para visualização dos arquivos (os arquivos .png serão enviados junto com o programa para evitar a necessiadade de instalar o graphviz):
$ display cic_curriculum.png
$ display colored_curriculum.png

A solução ótima de horários é gerada no fim da execução do programa. São apresentados os horários com as matérias por semestre. É dado preferência ao horário matutino, de forma que são evitados os horários da tarde. Além disso, tenta-se separar as matérias de forma que elas não possuam 4 horas seguidas e tenham um dia de espaçamento a cada dois créditos. 
