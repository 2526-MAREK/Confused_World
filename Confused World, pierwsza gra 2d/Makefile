TASKNO=5
APP=Confused_World
TASKDIR=${HOME}/edu/po/zad/z${TASKNO}

#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -W -Wall -pedantic -std=c++17 

__start__: obj dat ./${APP}
	rm -f core.* core; ./${APP}

# Tworzy katalog "obj" gdy go nie ma
# 
obj:
	mkdir obj

dat:
	mkdir dat

./${APP}: obj/main.o obj/MainWindowApplication.o obj/scene.o obj/characterGeoShape.o obj/characterPhoto.o obj/platform.o 
	g++ obj/main.o obj/MainWindowApplication.o obj/scene.o obj/characterGeoShape.o obj/characterPhoto.o obj/platform.o -o Confused_World -lsfml-graphics -lsfml-window -lsfml-system 

ext: ./${APP}_rozszerzony
	rm -f core.* core; echo "2i 1+3.1i 2 ? / + ?" | ./${APP}_rozszerzony

obj/main.o: src/main.cpp inc/MainWindowApplication.hh
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/MainWindowApplication.o: src/MainWindowApplication.cpp inc/MainWindowApplication.hh inc/scene.hh
	g++ -c ${CXXFLAGS} -o obj/MainWindowApplication.o src/MainWindowApplication.cpp		

obj/scene.o: src/scene.cpp inc/scene.hh inc/characterGeoShape.hh inc/characterPhoto.hh  inc/platform.hh
	g++ -c ${CXXFLAGS} -o obj/scene.o src/scene.cpp			

obj/characterGeoShape.o: src/characterGeoShape.cpp inc/characterGeoShape.hh 
	g++ -c ${CXXFLAGS} -o obj/characterGeoShape.o src/characterGeoShape.cpp	

obj/characterPhoto.o: src/characterPhoto.cpp inc/characterPhoto.hh 
	g++ -c ${CXXFLAGS} -o obj/characterPhoto.o src/characterPhoto.cpp	

obj/platform.o: src/platform.cpp inc/platform.hh 
	g++ -c ${CXXFLAGS} -o obj/platform.o src/platform.cpp		

clean:
	rm -f obj/* ./${APP} core.* core

${TASKDIR}:
	mkdir -p ${TASKDIR}/bin.diablo ${TASKDIR}/bin.panamint

__TARGET__:
	if [ ! "${HOST}" = "diablo" ] && [ ! "${HOST}" = "panamint" ]; then exit 1; fi

export: __TARGET__ ./${APP}  ./${APP}_rozszerzony ${TASKDIR}
	mv ${APP} ${APP}_rozszerzony ${HOME}/edu/po/zad/z${TASKNO}/bin.${HOST}/

help:
	@echo
	@echo " make        - tworzenie i uruchomienie aplikacji"
	@echo " make ext    - tworzenie i uruchomienie aplikacji w wersji rozszerzonej"
	@echo " make clean  - usuniecie produktow kompilacji i konsolidacji"
	@echo " make help   - wyswietla niniejsza informacje"
	@echo
