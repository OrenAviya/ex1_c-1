#loop main
main.exe:main.o basicClassification.o advancedClassificationLoop.o
	gcc main.o basicClassification.o advancedClassificationLoop.o -o main.exe

main.o: main.c basicClassification.c advancedClassificationLoop.c NumClass.h
	gcc -c main.c basicClassification.c advancedClassificationLoop.c -o main.o

basicClassification.o: basicClassification.c NumClass.h
	gcc -c basicClassification.c -o basicClassification.o

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -c advancedClassificationLoop.c -o advancedClassificationLoop.o
