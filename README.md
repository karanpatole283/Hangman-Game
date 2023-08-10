<!DOCTYPE html>
<html>
<head>
<title>Hangman Game</title>
<style>
body {
  font-family: sans-serif;
  margin: 0;
  padding: 0;
}

.container {
  width: 500px;
  margin: 0 auto;
}

.header {
  background-color: #000;
  color: #fff;
  padding: 20px;
  text-align: center;
}

.main {
  padding: 20px;
}

.image {
  width: 300px;
  margin: 0 auto;
}

.description {
  font-size: 16px;
}

.button {
  background-color: #000;
  color: #fff;
  padding: 10px;
  border: none;
  cursor: pointer;
}

.button:hover {
  background-color: #ccc;
}
</style>
</head>
<body>
<div class="container">
  <div class="header">
    <h1>Hangman Game</h1>
  </div>
  <div class="main">
    <div class="image">
      <img src="hangman.png" alt="Hangman Game">
    </div>
    <div class="description">
      This is a Hangman game written in C++. The game is played by guessing letters of a hidden word. For each incorrect guess, a part of the hangman is drawn. The player loses the game if the hangman is completed.
    </div>
    <a href="hangman.cpp" class="button">Play the Game</a>
  </div>
</div>
</body>
</html>
