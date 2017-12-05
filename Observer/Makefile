# 2.6.35-22-generic
CXX=g++
TARGET=main
C_FLAGS+=-g -Wall -DDEBUG -D_REENTRANT
LIB_FLAGS=-pthread
OBJS=Subject.o Observer.o main.o 
all:$(TARGET)

$(TARGET):$(OBJS)
	@echo "building $< ==> $@..."
	$(CXX) -W $^ -o $@ $(C_FLAGS) $(LIB_FLAGS)
	@echo
.cpp.o:
	@echo "compiling $< ==> $@..."
	$(CXX) -W -c $*.cpp -o $*.o $(C_FLAGS)
	@echo

.PHONY:clean
clean:
	@echo "clean up"
	rm -f *.o
	rm -f $(TARGET)

