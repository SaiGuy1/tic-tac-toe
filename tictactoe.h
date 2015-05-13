class ticTacToe{
private:
   char square[10];
public:
   ticTacToe();
   int gameStatus();
   void displayBoard();
   void getXOMove();
   char isMoveValid(int player, char mark, int choice);
   void play();
};
