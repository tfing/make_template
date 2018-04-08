all : out.elf

out.elf : a.o b.o
	gcc a.o b.o -o out.elf

a.o : a.c
	gcc -c a.c -o a.o
    
b.o : b.c
	gcc -c b.c -o b.o

clean: 
	rm -f a.o b.o out.elf

