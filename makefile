access_stock.o:access_stock.cpp access_stock.h item.h
	g++ -c access_stock.cpp

auto_update.o:auto_update.cpp autoupdate.h item.h
	g++ -c auto_update.cpp

best_selling.o:best_selling.cpp bestselling.h item.h
	g++ -c best_selling.cpp

input.o:input.cpp input.h item.h
	g++ -c input.cpp

output.o:output.cpp output.h item.h
	g++ -c output.cpp

search_func.o:search_func.cpp search.h item.h
	g++ -c search_func.cpp

main.o:main.cpp item.h access_stock.h autoupdate.h bestselling.h input.h output.h search.h
	g++ -c main.cpp

system:main.o access_stock.o auto_update.o best_selling.o input.o output.o search_func.o
	g++ $^ -o $@

clean:
	rm system main.o search_func.o output.o input.o best_selling.o auto_update.o access_stock.o

tar:
	tar -czvf system.tgz *.cpp *.h

.PHONY: clean tar 
