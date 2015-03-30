
BMI:BMI.o lab2_a.o
	g++ -o BMI lab2_a.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

lab2_a.o: lab2_a.cpp BMI.h
	g++ -c lab2_a.cpp

clean:
	rm BMI *.o
