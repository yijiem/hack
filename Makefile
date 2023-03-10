CXX=clang++

jump: jump.cc
	$(CXX) -std=c++11 -o jump.exe jump.cc

rand_number: rand_number.cc
	$(CXX) -o rand_number.exe rand_number.cc

rotate: rotate.cc
	$(CXX) -std=c++11 -o rotate.exe rotate.cc

print_vptr: print_vptr.cc
	$(CXX) -o print_vptr.exe print_vptr.cc

all: jump rand_number rotate print_vptr

clean:
	rm *.exe
