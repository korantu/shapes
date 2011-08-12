ALL=SelfTest.cpp Point.cpp

check-syntax:
	g++ -fsyntax-only -Wall ${CHK_SOURCES}

clean:
	rm *.o phong test

phong: 
	g++ $(LDFLAGS) phong.cpp -lglut -lGL -lGLU  -lXt -lX11 -lm -lGLEW -o phong $(LIBS) -lc

test:	${ALL}
	g++ -O0 -g ${ALL} NotMain.cpp -o test && ./test