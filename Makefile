CC = cc
LD = cc

PROGS = dse
OBJS = dsemain.o dsefile.o dseconv.o

.SUFFIXES: .c .o

.c.o:
	$(CC) -c -O0 $< -o $@

$(PROGS): $(OBJS)
	$(LD) -o dse $(OBJS)

.PHONY: clean

clean:
	rm -f $(PROGS) $(OBJS)
