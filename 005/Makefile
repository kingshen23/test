#005 makefile 加入VPATH遍历优化obj文件夹方案
#
#
#
#
target=mkTest005
compile=cc
CFLAGS  = -g -Wall -O2
# makefile 主要是依赖关系，具体的指令可以查看gcc的手册
C_SRCS=$(foreach dir, src, $(wildcard $(dir)/*.c))
#object=$(patsubst src/%.c, obj/%.o, $(C_SRCS))
object=$(patsubst %.c, obj/%.o, $(notdir $(C_SRCS)))
hehe=$(C_SRCS:.c=.o)


INC_PATH    = -I inc
LIB_PATH    = -L lib
EXT_LIB     = -lmyA -lmyB

VPATH += ./src/
#VPATH += $(shell pwd)


# 用于产生h文件的依赖关系 -MM指令
# gcc -MM main.c a.c b.c
.PHONY : all
all:$(target)	
	@echo "编译结束"
#	$(compile) -MM $(src)

# 展开:
# gcc -o mkTest000 main.o a.o b.o
$(target):$(object)
	$(compile) -o $(target) $(object) $(LIB_PATH) $(EXT_LIB) $(CFLAGS)
# 静态模式
# 自动化变量:"$<"=依赖目标集 "$@"= 目标集
# 展开:
# gcc -c a.c -o a.o
# gcc -c b.c -o b.o
# gcc -c main.c -o main.o
# $(object):可省略
$(object):obj/%.o:%.c
#$(object):obj/%.o:src/%.c
	$(compile) -c -o $@ $< $(INC_PATH) $(CFLAGS) 
	

#显示的高数makefile 是否与文件名重clean就是个伪目标
.PHONY: clean
clean:
	@echo "清除过程文件..."
	-rm $(target) $(object)

.PHONY: test
test:
	@echo "测试变量..."
	@echo $(object)
	@echo $(C_SRCS)
#必须用分号隔开置于同一行才起作用
exec:
	cd ../000;pwd