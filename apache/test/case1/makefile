all: compile link run
compile:
	c++ -g -c main.cpp -I /media/data/Developments/apache/log4cxx/trunk/src/main/include/
link:
	c++ -o main main.o /media/data/Developments/apache/log4cxx/trunk/src/main/cpp/.libs/liblog4cxx.so
clean:
	rm *.log main main.o
run:
	LD_LIBRARY_PATH="/media/data/Developments/apache/log4cxx/trunk/src/main/cpp/.libs" ./main
