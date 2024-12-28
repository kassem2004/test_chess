#include "board.h"

char board[64]; // Simple 8x8 board

void initialize_board() {
    // Set up the starting position
    const char* start_position = 
        "rnbqkbnr"
        "pppppppp"
        "........"
        "........"
        "........"
        "........"
        "PPPPPPPP"
        "RNBQKBNR";

    for (int i = 0; i < 64; i++) {
        board[i] = start_position[i];
    }
}
