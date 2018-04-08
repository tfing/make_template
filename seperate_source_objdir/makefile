VPATH := src
OBJDIR := out

all : out.elf 

out.elf : $(OBJDIR)/a.o $(OBJDIR)/b.o
	gcc $^ -o out.elf

$(OBJDIR)/%.o : %.c | $(OBJDIR)
	gcc -Iinc -c $< -o $@

$(OBJDIR) :
	mkdir -p $(OBJDIR)

clean: 
	rm -rf out/ out.elf

