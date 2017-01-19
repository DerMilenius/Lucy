#include <iostream>                                 // Ein- und Ausgabebibliothek

int main(){
  int test = 0;                                     // Hauptfunktion
  std::cout << "Hello World!" << '\n';
  std::cout << "This is a Snippet!" << '\n';             // Ausgabe

  std::cout << "Type Exit to close..." << '\n';

  std::cin >> test;
  while ((test =! "Exit") || (test =! "exit")) {
    std::cin >> test;
  }



  return 0;                                         // Optionale Rückgabe an das Betriebssystem
}
