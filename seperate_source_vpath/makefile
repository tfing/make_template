VPATH := src

all : out.elf

out.elf : a.o b.o
	gcc $^ -o out.elf

%.o : %.c
	gcc -Iinc -c $< -o $@

clean: 
	rm -f *.o out.elf

