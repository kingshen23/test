#000 makefile 最简单的makefile
#
#
#
#
object=main.o a.o b.o
target=mkTest000
compile=cc

#目标链接过程
$(target):$(object)
	$(compile) -o $(target) $(object)

#目标编译过程
main.o:main.c a.h b.h
	$(compile) -c main.c
a.o:a.c a.h
	$(compile) -c a.c
b.o:b.c b.h
	$(compile) -c b.c

#显示的高数makefile 是否与文件名重clean就是个伪目标
.PHONY: clean
clean:
	-rm $(target) $(object)