all : out.elf

out.elf : a.o b.o
	gcc a.o b.o -o out.elf

%.o : %.c
	gcc -c $< -o $@

clean: 
	rm -f *.o  out.elf

