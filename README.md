# Tic-Tac-Toe

Create a console Tic-Tac-Toe game in C++

## Requirements

- Docker
- Visual Studio Code
  - The "Remote - Containers" extension (`ms-vscode-remote.remote-containers`)

### Setup Instructions

1. Clone this repository
2. Open the repository folder in Visual Studio Code
3. If the Remote - Containers extension is not installed, you will see a notification in the bottom right corner to install recommended extensions. Click the button to install them. You can also install the extension manually.
4. With the Remote - Containers extension installed, you will see a notification in the bottom right indicating there is a Dev Container configuration file present. Click the button to reopen in a container. You can also reopen in a container using the command in the command palette.

## Tasks

### 1. Look around
- Familiarize yourself with the existing code
- Try building the code and running it in the debugger

### 2. Get ready to play
Create a `Game` class that
- Has a constructor that receives the `X` player and `O` player as arguments
- Has a board for the game
- Has a function that will run the game

### 3. Start the game
- Ask the `X` and `O` players for their names
- Start the game

### 4. Mark up the board
- Alternate turns for each player (the `X` player always goes first)
- Ask the player for a move
- Place the player's mark on the board in the requested location

### 5. Play by the rules
- End the game when the board is full
- Make sure players are unable to place their mark in cells that are already marked

### 6. Announce the winner
- End the game when the board is full or a player has won, whichever occurs first
- Tell the players who won, or if the game was a draw

### 7. Test it out
- Play the game and have fun
- Fix any bugs you find
- Make any user experience improvements you come up with while playing

If you want more things to do, you might consider implementing features such as
- The option to play another game without having to run the program again
  - Perhaps the players switch marks for subsequent games
  - Perhaps the winner is best out of three games
- End the game sooner when it is no longer possible for either player to win, instead of when the board becomes full
