
CFLAGS += -g -Wall -Werror -O2
CPPFLAGS += -I. -I./inc -I../../include
 
# SRC_OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
SRC_FILES = $(wildcard src/*.c)
SRC_OBJ = $(SRC_FILES:.c=.o)
SRC_LIB = libsub3.a
 
all : $(SRC_LIB)
 
$(SRC_LIB) : $(SRC_OBJ)
	$(AR) rcs $@ $^
	cp $@ ../../libs
#	rm -rf $(SRC_LIB)
	
obj : $(SRC_OBJ)

$(SRC_OBJ):%.o:%.c
	$(CC) -c -o $@ $< $(CPPFLAGS)
# clean target
clean:
	$(RM) $(SRC_OBJ) $(SRC_LIB)
 
distclean:
	$(RM) $(SRC_OBJ) $(SRC_LIB) tags *~
 
.PHONY : all obj clean disclean