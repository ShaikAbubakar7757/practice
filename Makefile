#This is the makefile for the project.
MAIN = main
inc_dir = inc
BINDIR = bin
SRCDIR = src
TSTDIR = tests
RED_CLR = \033[1;31m
NO_CLR = \033[1;0m
SRCS = $(wildcard src/*.c)
OBJS = $(patsubst %, $(BINDIR)/%, $(notdir $(SRCS:.c=.o))) 
CC = gcc
CFLAGS = -Wall --std=gnu99 -g -c 

all : $(MAIN)

$(MAIN) :  $(OBJS) $(BINDIR)/$(MAIN).o 
	@echo "$(RED_CLR) Linking all objects...$(NO_CLR)"
	$(CC) -o $@ $^  

$(BINDIR)/%.o:$(SRCDIR)/%.c
	@echo "$(RED_CLR) Compiling dependencies...$(NO_CLR)"
	$(CC) -I$(inc_dir)  $(CFLAGS)    $< -o  $@ 
$(BINDIR)/$(MAIN).o : $(TSTDIR)/$(MAIN).c
	@echo "$(RED_CLR) Compiling Test Case...$(NO_CLR)"
	$(CC) -I$(inc_dir)  $(CFLAGS)    -o $@ $<

.PHONY : help clean run all

help:
	@echo "src : $(SRCS)"
	@echo "bin : $(OBJS)"

clean : 
	rm  $(BINDIR)/*.o $(MAIN)
		
run :
	./$(MAIN)
