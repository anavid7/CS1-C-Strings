

//TODO: define, document, and implment this function
void printWithSpaces(char *str);

//TODO: define, document, and implment this function
void initializeBlankString(int n, char *str);

//TODO: define, document, and implment this function
int revealGuessedLetter(char *answer, char *guess, char probe);

//TODO: define, document, and implment this function
int checkGuess(char *answer, char *guess);


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
