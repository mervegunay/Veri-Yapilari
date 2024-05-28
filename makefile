basla: derleme calistirma

derleme:
	g++ -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.cpp
	g++ -I ./include/ -o ./lib/SayilarListesi.o -c ./src/SayilarListesi.cpp
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Basamak.o -c ./src/Basamak.cpp


	g++ -I ./include/ -o ./bin/main ./lib/Sayi.o ./lib/SayilarListesi.o ./lib/Dugum.o ./lib/Basamak.o ./src/main.cpp
	
calistirma:
	./bin/main