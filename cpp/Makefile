ifeq ($(OS),Windows_NT)
	CXX=cl.exe
	CCFLAGS=/EHsc
	OUTPUT=/Fe:$@.exe
	RM=del
else
	CXX=clang++
	CCFLAGS=-std=c++11
	OUTPUT=-o $@.exe
	RM=rm
endif

jump: jump.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

rand_number: rand_number.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

rotate: rotate.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

print_vptr: print_vptr.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

service: service.cpp
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

destruct: destruct.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

destruct2: destruct2.cc
	$(CXX) $(CCFLAGS) $(OUTPUT) $<

all: jump rand_number rotate print_vptr service destruct destruct2

clean:
	$(RM) *.exe *.obj *.o *.out
