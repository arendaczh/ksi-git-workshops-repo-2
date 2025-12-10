#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <number>" << std::endl;
    return 1;
  }

  int n = atoi(argv[1]);

  std::cout << "<3 " << n << "'\n";

  return 0;
}
