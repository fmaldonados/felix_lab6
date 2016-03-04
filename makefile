lab6:	user.o game.o main.o
	g++ user.o game.o main.o -o lab6

main.o:	main.cpp user.h game.h 
	g++ -c main.cpp -o main.o

user.o:	user.cpp user.h
	g++ -c user.cpp -o user.o

game.o:	game.cpp game.h
	g++ -c game.cpp -o game.o
