#include <stdio.h>
#include <string.h>
#include "uci.h"

void uci_loop() {
    char input[1024];

    while (1) {
        if (!fgets(input, sizeof(input), stdin)) continue;

        if (strncmp(input, "uci", 3) == 0) {
            printf("id name SimpleChessEngine 1.0\n");
            printf("id author YourName\n");
            printf("uciok\n");
        } else if (strncmp(input, "isready", 7) == 0) {
            printf("readyok\n");
        } else if (strncmp(input, "quit", 4) == 0) {
            break;
        } else if (strncmp(input, "position", 8) == 0) {
            // Handle setting the board position (to be implemented later)
        } else if (strncmp(input, "go", 2) == 0) {
            // Handle search/start playing (to be implemented later)
        }
    }
}
