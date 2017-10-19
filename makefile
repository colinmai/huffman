all:
	g++ -g -o frequencies frequencies.cpp
	g++ -g -o huffman huffman.cpp 
	g++ -g -o encode encode.cpp
	g++ -g -o decoded decoded.cpp
#	g++ -g -o PA1 freq.cpp huffman.cpp encode.cpp decode.cpp
clean:
	rm frequencies huffman encode decoded encoded code
