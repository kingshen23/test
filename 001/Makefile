#001 makefile 利用变量及静态模式优化的makefile
#
#
#
#
# makefile 主要是依赖关系，具体的指令可以查看gcc的手册
object=main.o a.o b.o
src=main.c a.c b.c
target=mkTest000
compile=gcc


# 用于产生h文件的依赖关系 -MM指令
# gcc -MM main.c a.c b.c
.PHONY : all
all:$(target)	
#	$(compile) -MM $(src)

# 展开:
# gcc -o mkTest000 main.o a.o b.o
$(target):$(object)
	$(compile) -o $(target) $(object)
# 静态模式
# 自动化变量:"$<"=依赖目标集 "$@"= 目标集
# 展开:
# gcc -c a.c -o a.o
# gcc -c b.c -o b.o
# gcc -c main.c -o main.o
# $(object):可省略
$(object):%.o:%.c %.d
	$(compile) -c -o $@ $<

#显示的高数makefile 是否与文件名重clean就是个伪目标
.PHONY: clean
clean:
	-rm $(target) $(object)