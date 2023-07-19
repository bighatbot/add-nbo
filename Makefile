all: add-nbo

add_byte: add-nbo.cpp
	g++ -o add-nbo add-nbo.cpp

clean:
	rm -rf add-nbo
	rm -rf *.o
