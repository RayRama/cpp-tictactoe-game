#include <iostream>
using namespace std;

char square[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin();
void boardGame();

int main()
{
  int player = 1, i, pilihan;
  char mark;

  do
  {
    boardGame();
    player = (player % 2) ? 1 : 2;

    cout << "\nPlayer " << player << ", masukan angka: ";
    cin >> pilihan;

    mark = (player == 1) ? 'X' : 'O';

    if (pilihan == 1 && square[1] == '1')
    {
      square[1] = mark;
    }
    else if (pilihan == 2 && square[2] == '2')
    {
      square[2] = mark;
    }
    else if (pilihan == 3 && square[3] == '3')
    {
      square[3] = mark;
    }
    else if (pilihan == 4 && square[4] == '4')
    {
      square[4] = mark;
    }
    else if (pilihan == 5 && square[5] == '5')
    {
      square[5] = mark;
    }
    else if (pilihan == 6 && square[6] == '6')
    {
      square[6] = mark;
    }
    else if (pilihan == 7 && square[7] == '7')
    {
      square[7] = mark;
    }
    else if (pilihan == 8 && square[8] == '8')
    {
      square[8] = mark;
    }
    else if (pilihan == 9 && square[9] == '9')
    {
      square[9] = mark;
    }
    else
    {
      cout << "Masukan angka yang benar ";
      player--;
      cin.ignore();
      cin.get();
    }

    i = checkWin();

    player++;
  } while (i == -1);

  boardGame();

  if (i == 1)
  {
    cout << "\n====>\a Player " << --player << " win ";
  }
  else
  {
    cout << "\n====>\a Game draw";
  }

  cin.ignore();
  cin.get();

  return 0;
}

int checkWin()
{
  if (square[1] == square[2] && square[2] == square[3])
  {
    return 1;
  }
  else if (square[4] == square[5] && square[5] == square[6])
  {
    return 1;
  }
  else if (square[7] == square[8] && square[8] == square[9])
  {
    return 1;
  }
  else if (square[1] == square[4] && square[4] == square[7])
  {
    return 1;
  }
  else if (square[2] == square[5] && square[5] == square[8])
  {
    return 1;
  }
  else if (square[3] == square[6] && square[6] == square[9])
  {
    return 1;
  }
  else if (square[1] == square[5] && square[5] == square[9])
  {
    return 1;
  }
  else if (square[3] == square[5] && square[5] == square[7])
  {
    return 1;
  }
  else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
  {
    return 0;
  }
  else
  {
    return -1;
  }
}

void boardGame()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
  cout << "Player 1 (X) - Player 2 (O)" << endl
       << endl;
  cout << endl;

  cout << "     |     |     " << endl;
  cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

  cout << "     |     |     " << endl;
}