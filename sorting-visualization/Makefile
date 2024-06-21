SOURCE := $(wildcard ./*.cpp)

sorting: $(SOURCE)
	g++ -I. $(SOURCE) -o sorting -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

run:
	./sorting
