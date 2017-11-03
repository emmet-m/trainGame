main:
	g++ -Wall -Werror -o trainGame AST.cpp Node.cpp trainGame.cpp -std=c++11
test:
	g++ -Wall -Werror -o test AST.cpp Node.cpp test_ast.cpp -std=c++11
