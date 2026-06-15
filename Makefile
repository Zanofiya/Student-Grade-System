all:
	g++ main.cpp Student.cpp -o StudentSystem

run:
	./StudentSystem

clean:
	del StudentSystem.exe