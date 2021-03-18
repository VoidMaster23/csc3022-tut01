driver.exe: factorial.o driver.o
	g++ factorial.o driver.o -o driver.exe -std=c++2a

factorial.o: factorial.cpp
	g++ -c factorial.cpp -o factorial.o -std=c++2a

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o -std=c++2a

clean:
	rm *.o driver.exe
	
