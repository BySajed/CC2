CC= gcc
 CFLAGS= -O2 -Wall -Wextra -Werror -ansi
 CLIBS= -lm
 EXE= executable
 OBJ= main.o\
 point.o\
 triangle.o

 $(EXE) : $(OBJ) $(CC) $(CFLAGS) -o $@ $^ $(CLIBS)
main.o : main.c triangle.h
point.o : point.c point.h
triangle.o : triangle.c triangle.h point.h
%.o : %.c $(CC) $(CFLAGS) -c $<

clean :
rm -rf $(OBJ)
rm -rf $(EXE)