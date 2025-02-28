flags	=	-Wall	-Werror	-Wextra	-std=c99
f = -fsanitize=address
unity = Unity-master/src/unity.c
mainFileName = Test_All_Func.c 
mainFileName2 = Test_without_sanitize.c

SRC = $(wildcard ../libft/*.c) $(wildcard Tests/tests*.c)

OBJS:= $(SRC:%.c=%.o)

open:	compile1 compile2 clean
	@./a.out
	@./b.out

s:
	@./a.out | grep --text -n "strjoin" 
	
f2:
	@./b.out | grep --text -n ":FAIL:" 

compile1:	unity	$(OBJS)
	@cc	$(flags) $(f)	-I. $(OBJS)	unity.o	$(mainFileName)

compile2:	unity	$(OBJS)
	@cc	$(flags)	-I. $(OBJS)	unity.o	$(mainFileName2) -o b.out

%.o:	%.c
	@cc	-I.	$(FLAGS)	-o	$@	-c	$<

unity:
	@cc 	-c	$(unity)	-o unity.o

clean:
	@rm	-fr	../libft/*.o Tests/*.o

delExeFile:
	@rm -fr a.out