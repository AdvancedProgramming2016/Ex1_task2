
#include <iostream>
#include "Grid.h"
#include "Bfs.h"

/*
 * Receives the input from the user
 */
void getInput(int &sizeX, int &sizeY, int &startX, int &startY, int &endX, int &endY);

int main(int argc, char *argv[]) {

    int sizeX(0);
    int sizeY(0);
    int startX(0);
    int startY(0);
    int endX(0);
    int endY(0);

    getInput(sizeX, sizeY, startX, startY, endX, endY);

    Graph *g  = new Grid(sizeX, sizeY);
    Bfs   bfs = Bfs(g, Point(startX, startY), Point(endX, endY));
    bfs.get_route();
    bfs.print_points();

    delete g;
}

void getInput(int &sizeX, int &sizeY, int &startX, int &startY, int &endX, int &endY) {

    std::string input;
    std::cin >> input;

    sizeX = input[0] - '0';;
    sizeY  = input[2] - '0';
    startX = input[4] - '0';
    startY = input[6] - '0';
    endX   = input[8] - '0';
    endY   = input[10] - '0';
}