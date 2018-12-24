#lib_000 makefile 生成 .a文件的示例
#
#
#
#
#make lib=myA
compile=gcc

ALL_OBJECT_DIRS:= $(shell find -maxdepth 3 -type d)
ALL_OBJECT=$(foreach dir, $(ALL_OBJECT_DIRS), $(wildcard $(dir)/*.o))
ALL_TARGET=$(foreach dir, ., $(wildcard $(dir)/*.a))

target=lib$(addsuffix .a,$(lib))
SRC_DIRS:= $(shell find $(lib) -maxdepth 2 -type d)
src=$(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))
object  = $(patsubst %.c, %.o, $(src))

.PHONY : all
all:$(target)	
	@echo "编译结束"

$(target):$(object)
	ar cr $(target) $(object)
# 静态模式
$(object):%.o:%.c
	$(compile) -c -o $@ $<	

#显示的高数makefile 是否与文件名重clean就是个伪目标
.PHONY: clean
clean:
	@echo "清除过程文件..."
	-rm $(ALL_TARGET) $(ALL_OBJECT)

.PHONY: test
test:
	@echo $(target)
	@echo $(SRC_DIRS)
	@echo $(C_SRC)
	@echo $(C_OBJS)
