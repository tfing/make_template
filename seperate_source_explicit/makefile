all : out.elf

out.elf : a.o b.o
	gcc $^ -o out.elf

%.o : src/%.c
	gcc -c $< -o $@

clean: 
	rm -f *.o out.elf

