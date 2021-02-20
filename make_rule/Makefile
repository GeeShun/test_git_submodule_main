all: main.o fun_add.o
	gcc main.o fun_add.o -o main.out
main.o: ../main.c
	gcc ../main.c -I../test_git_submodule_function1 -c -Wall
fun_add.o: ../test_git_submodule_function1/fun_add.c
	gcc ../test_git_submodule_function1/fun_add.c -c -Wall
clean:
	rm -rf *.o *.out
