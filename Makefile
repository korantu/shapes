check-syntax:
	g++ -fsyntax-only -Wall ${CHK_SOURCES}

phong: 
	g++ $(LDFLAGS) phong.o -lglut -lGL -lGLU  -lXt -lX11 -lm -lGLEW -o phong $(LIBS) -lc