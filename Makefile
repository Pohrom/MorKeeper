CC = g++.exe
LD = none

test : MD5.o CString.o CXKUsername.o MorKeeper.o
	$(CC) MD5.o CString.o CXKUsername.o MorKeeper.o -o MorKeeper.exe

MD5.o : MD5.cpp MD5.h
            $(CC) -c MD5.cpp
MorKeeper.o : MorKeeper.cpp MorKeeper.h CXKUsername.h
            $(CC) -c MorKeeper.cpp
CString.o : CString.cpp CString.h
            $(CC) -c CString.cpp
CXKUsername.o : CXKUsername.c CXKUsername.h CString.h
            $(CC) -c CXKUsername.c