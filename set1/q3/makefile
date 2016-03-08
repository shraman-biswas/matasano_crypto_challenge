CXX	=	gcc
INC	=	../../include
FLAGS	=	-Wall -O3 -ggdb -I $(INC)
SOURCE	=	main.c $(INC)/hex_to_base64.c $(INC)/xor.c
BIN	=	main

all:
	$(CXX) $(FLAGS) $(SOURCE) -o $(BIN)

clean:
	rm -f *~ $(BIN)
