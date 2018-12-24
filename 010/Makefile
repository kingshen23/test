
all :
	$(MAKE) -C src/sub1
	$(MAKE) -C src/sub2
	$(MAKE) -C src/sub3
	$(MAKE) -C src/main

tags:
	ctags -R
 
help:
	@echo "===============help=============="
 
obj:
	$(MAKE) -C src/sub1 obj
	$(MAKE) -C src/sub2 obj
	$(MAKE) -C src/sub3 obj
	$(MAKE) -C src/main obj
 
clean :
	$(MAKE) -C src/sub1 clean
	$(MAKE) -C src/sub2 clean
	$(MAKE) -C src/sub3 clean
	$(MAKE) -C src/main clean
 
distclean:
	$(MAKE) -C src/sub1 distclean
	$(MAKE) -C src/sub2 distclean
	$(MAKE) -C src/sub3 distclean
	$(MAKE) -C src/main distclean

test:
	@echo $(PLATFORM)
 
.PHONY : all clean distclean tags help
