# TIC_TAC_TOE
# Tic Tac Toe in C++

A console-based implementation of the classic Tic Tac Toe game written in C++.  
This project features a custom 18×18 board rendering system with ASCII characters to create a visually appealing grid instead of a plain 3×3 matrix.

---

## Features
- Two-player mode (Player 1 uses X, Player 2 uses O)
- Interactive board with numbered cells (1–9)
- Prevents overwriting an already filled cell
- Detects and announces winners (horizontal, vertical, diagonal)
- Declares a draw if the board is full
- Nicely formatted ASCII board for a better visual experience

---

## How to Run

1. Clone the repo:
   ```bash
   git clone https://github.com/<your-username>/tic-tac-toe-cpp.git
   cd tic-tac-toe-cpp
   ```

2. Compile the code:
   ```bash
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ```

3. Run the executable:
   ```bash
   ./tic_tac_toe
   ```

---

## Gameplay Instructions
1. Enter the names of both players when prompted.
2. Players take turns selecting a cell number (1–9):
   ```
   1 | 2 | 3
   ---------
   4 | 5 | 6
   ---------
   7 | 8 | 9
   ```
3. The board updates with X or O based on your move.
4. The game ends when:
   - A player aligns 3 marks horizontally, vertically, or diagonally
   - All 9 cells are filled → Draw

---

## Example Output
```
ROUND 1
Player1 your chance:
CHOOSE CELL NUMBER:
```

The board will be displayed like this:
```
   X   |       |      
-------|-------|-------
       |   O   |      
-------|-------|-------
       |       |   X
```

---

## Future Improvements
- Add single-player mode with AI opponent
- Refactor duplicated code (e.g., combine X/O win-checking functions)
- Replace goto statements with clean loop-based input handling
- Add color support for better visuals in the terminal

---

## Tech Used
- Language: C++
- Environment: Any standard C++ compiler (GCC, Clang, MSVC)

---

## License
Feel free to use, modify, and share.


            
