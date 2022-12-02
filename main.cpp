#include <iostream>
#include <string>
#include <map>
#include <locale.h>
using namespace std;

int main() {
  setlocale(0,"");
  std::map<std::string, std::string> major_scale_intervals = {
    {"C", "C     D     E     F     G     A     B"},
    {"C#", "C#     D#     F     F#     G#     A#     C"},
    {"G", "G     A     B     C     D     E     F#"},
    {"G#", "Ab     Bb     C     Db     Eb     F     G"},
    {"D", "D     E     F#     G     A     B     C#"},
    {"D#", "Eb     F     G     Ab     Bb     C     D"},
    {"E", "E     F#     G#     A     B     C#     D#"},
    {"F", "F     G     A     Bb     C     D     E"},
    {"F#", "F#     G#     A#     B     C#     D#     F"},
    {"A", "A     B     C#     D     E     F#     G#"},
    {"A#", "Bb     C     D     Eb     F     G     A"},
    {"B", "B     C#     D#     E     F#     G#     A#"},
  };
  while (true) {
    system ("cls");
    std::string pitch;
    std::cout << "\nPesquisar escala maior (C, G#, D, B, etc.): ";
    std::cin >> pitch;
    auto it = major_scale_intervals.find(pitch);
    if (it != major_scale_intervals.end()) {
      std::cout << "\nEscala maior [" << pitch << "]\n\n";
      std::cout << "[ " << it->second << " ]" << std::endl;
    } else {
      std::cout << "\nError: " << pitch << " esta não é uma escala maior natural.\n\n" << std::endl;
    }
    getchar();
    getchar();
  }

  return 0;
}
