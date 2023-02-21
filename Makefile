CXX=clang++

jump: jump.cc
	$(CXX) -std=c++11 -o jump.exe jump.cc

rand_number: rand_number.cc
	$(CXX) -o rand_number.exe rand_number.cc

all: jump rand_number

clean:
	rm *.exe
