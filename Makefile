CXX=clang++

jump.exe: jump.cc
	$(CXX) -std=c++11 -o jump.exe jump.cc
