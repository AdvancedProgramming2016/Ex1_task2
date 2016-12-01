task.out: main.o Point.o Vertex.o Graph.o Grid.o Bfs.o
	g++ main.o Point.o Vertex.o Graph.o Grid.o Bfs.o

Point.o: Point.cpp Point.h
	g++ -c -std=c++0x Point.cpp

Vertex.o: Vertex.cpp Vertex.h
	g++ -c -std=c++0x Vertex.cpp

Graph.o: Graph.cpp Graph.h
	g++ -c -std=c++0x Graph.cpp

Grid.o: Grid.cpp Grid.h
	g++ -c -std=c++0x Grid.cpp

Bfs.o: Bfs.cpp Bfs.h
	g++ -c -std=c++0x Bfs.cpp

main.o: main.cpp
	g++ -c -std=c++0x main.cpp

unzip:
	unzip task2bfs.zip
