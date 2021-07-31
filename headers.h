class CORRIDOR
{
public:
    // make the 11* 11 game board
    std :: string board[121] = {
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      ",
        "      ", "      ", "      ", "      ", "      ", "      ",  "      ", "      ", "      ", "      ", "      "
    };
    CORRIDOR(int);
    void set_board(int);        // prototype
    void print_board();         // prototype
    bool valid_place(int, int); // prototype
    bool valid_wall(int, int);  // prototype

private:
    int number_of_players;
    
};
