all: main.o fun_add.o fun_sub.o
	gcc main.o fun_add.o fun_sub.o -o main.out
main.o: ../main.c
	gcc ../main.c -I../test_git_submodule_function1 -c -Wall
fun_add.o: ../test_git_submodule_function1/fun_add.c
	gcc ../test_git_submodule_function1/fun_add.c -c -Wall
fun_sub.o: ../test_git_submodule_function1/test_git_submodule_function_1_1/fun_sub.c
	gcc ../test_git_submodule_function1/test_git_submodule_function_1_1/fun_sub.c -I../test_git_submodule_function1 -c -Wall
clean:
	rm -rf *.o *.out
