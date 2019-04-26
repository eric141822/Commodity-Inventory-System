access_stock.o:access_stock.cpp functions.h
	g++ -c access_stock.cpp

auto_update.o:auto_update.cpp functions.h
	g++ -c auto_update.cpp

best_selling.o:best_selling.cpp functions.h
	g++ -c best_selling.cpp

input.o:input.cpp functions.h
	g++ -c input.cpp

output.o:output.cpp functions.h
	g++ -c output.cpp

search_func.o:search_func.cpp functions.h
	g++ -c search_func.cpp

main.o:main.cpp functions.h
	g++ -c main.cpp

system:main.o access_stock.o auto_update.o best_selling.o input.o output.o search_func.o
	g++ $^ -o $@

clean:
	rm system main.o search_func.o output.o input.o best_selling.o auto_update.o access_stock.o

tar:
	tar -czvf system.tgz *.cpp *.h

.PHONY: clean tar
