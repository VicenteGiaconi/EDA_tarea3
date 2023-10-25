CC = g++
FLAGS = -std=c++11 

exe = tarea3

$(exe): main.o tree.o treeList.o treeListNode.o treeNode.o
	$(CC) main.o tree.o treeList.o treeListNode.o treeNode.o -o $(exe)

main.o: main.cpp tree.hpp
	$(CC) $(FLAGS) -c -o main.o main.cpp 

tree.o: tree.cpp tree.hpp
	$(CC) $(FLAGS) -c -o tree.o tree.cpp

treeList.o: treeList.cpp treeList.hpp
	$(CC) $(FLAGS) -c -o treeList.o treeList.cpp
	
treeListNode.o: treeListNode.cpp treeListNode.hpp treeList.hpp
	$(CC) $(FLAGS) -c -o treeListNode.o treeListNode.cpp

treeNode.o: treeNode.cpp treeNode.hpp treeList.hpp
	$(CC) $(FLAGS) -c -o treeNode.o treeNode.cpp

clean:
	rm *.o
	rm -f $(exe)