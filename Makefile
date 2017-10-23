## Fichiers .c a compiler
SRC = main.c random.c

## Transforme tous les fichiers .c en .o
OBJ = $(SRC:.c=.o)

## Nom du binaire généré
BIN = projet

## Commande de suppression de fichiers avec
## l'option -f pour ignorer les erreurs
## Sans -f, si un clean a déjà été effectué
## le Makefile échouera sur make fclean
RM  = rm -f

## Ton compilateur (gcc, clang)
CC  = gcc

## Flags de comilation des .c
## -I indique la/les position(s) des .h
CFLAGS  += -I./ -I/lib -I/usr/lib -I/usr/local/lib
## Active la majorité des warnings c à la compilation
CFLAGS  += -W -Wextra -Wall
## Transforme les Warnings en erreurs, à ne décommenter
##que pour un programme sans faute au moment du rendu
##CFLAGS    += -Werror
## Active les warnings de norme. Attention,
## avec certaines lib ansi peut être problématique.
CFLAGS  += -ansi -pedantic

LDFLAGS += -L/usr/local/lib -lgsl

## Option par défaut, fonctionne avec "make all" ou juste "make"
all: $(BIN)

## Appelé par all, compile le programme
$(BIN): $(OBJ)
	$(CC) -o $(BIN) $(LDFLAGS) $(OBJ)

## Supprime les .o du programme seulement
clean:
	$(RM) $(OBJ) $(BIN)

.PHONY  : all clean
