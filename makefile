CC = gcc 
LIBS = -lm `pkg-config cairo sdl2 --libs --cflags`
MAIN = main.c
OUT = first_cairo

build:
	$(CC) $(MAIN) -o $(OUT) $(LIBS)
	
run: 
	./$(OUT)

clean: 
	rm $(OUT)
