PGM = cst
CC  = gcc 
CFLAGS  = -g -O0
#CFLAGS  =
RHESSYS_BIN = /usr/local/bin

OBJECTS = cst.o ../cf/grassio.o

LIBS = -lm
GIS_LIBS = -lgrass_gis

$(PGM): $(OBJECTS)
	$(CC) $(OBJECTS) -L$(GISBASE)/lib -L../cf $(GIS_LIBS) $(LIBS) $(CFLAGS) -o $(PGM) 

install: $(PGM) $(EW_PGM)
	cp $(PGM) $(RHESSYS_BIN)
	cp $(EW_PGM) $(RHESSYS_BIN)

clean:
	rm -f $(OBJECTS)

clobber:	clean
	rm -f $(PGM) $(EW_PGM)

cst.o: cst.c
	$(CC) $(CFLAGS) -I$(GISBASE)/include -I../cf -c cst.c

../cf/grassio.o: ../cf/grassio.c
	cd ../cf ; make grassio.o
