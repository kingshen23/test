 
CFLAGS += -g -Wall -Werror -O2
CPPFLAGS += -I. -I./inc -I../../include
LDFLAGS += -lpthread -L../../libs -lsub1 -lsub2 -lsub3
 
 
# SRC_OBJ = $(patsubst %.c, %.o, $(wildcard *.c))
SRC_FILES = $(wildcard src/*.c)
SRC_OBJ = $(SRC_FILES:.c=.o)  
SRC_BIN = target_bin          
 
all : $(SRC_BIN)
 
$(SRC_BIN) : $(SRC_OBJ)       
	$(CC) -o $@ $^ $(LDFLAGS) 
 
obj : $(SRC_OBJ)
 
$(SRC_OBJ):%.o:%.c
	$(CC) -c -o $@ $< $(CPPFLAGS)

# clean target
clean:
	$(RM) $(SRC_OBJ) $(SRC_BIN) $(SRC_BIN).exe
 
distclean:
	$(RM) $(SRC_OBJ) $(SRC_BIN) $(SRC_BIN).exe tags*~
 
.PHONY : all obj clean disclean
