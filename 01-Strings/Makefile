
# =========================
# CONFIGURACIÓN BASE
# =========================
CC = gcc 
CFLAGS = -Wall -Wextra 
# =========================
# COMPILACIÓN GENERAL
# =========================
all: test enlineas longitudes ##mayorlongitud ##todosiguales ##suma

String.o: String.c String.h
	$(CC) $(CFLAGS) -c String.c -o String.o

# =========================
# TESTS
# =========================
Stringtest.o: StringTest.c String.h
	$(CC) $(CFLAGS) -c StringTest.c -o StringTest.o

test: Stringtest.o String.o 
	$(CC)  Stringtest.o String.o -o test   
	./test 
# =========================
# ENLINEAS
# =========================
enlineas : enlineas.c String.o
	$(CC) $(CFLAGS) -o enlineas enlineas.c String.o

# =========================
# LONGITUDES
# =========================

longitudes: longitudes.c String.o
	$(CC) $(CFLAGS) -o longitudes longitudes.c String.o

# =========================
# MAYORLONGITUD
# =========================


# =========================
# TODOSIGUALES
# =========================


# =========================
# SUMA
# =========================
suma: suma.c String.o
	$(CC) $(CFLAGS) suma.c String.o -o suma




clean:
	rm -f *.o test enlineas longitudes mayorlongitud todosiguales suma