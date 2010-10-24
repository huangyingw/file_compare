run : file_compare.o
	g++ -o run file_compare.o
file_compare.o : file_compare.cc
	g++ -c file_compare.cc
clean :
	rm run file_compare.o
