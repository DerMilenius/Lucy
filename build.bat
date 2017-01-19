@echo off
call "E:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64     
set compilerflags=/Od /Zi /EHsc
set linkerflags=/OUT:Lucy.exe
cl.exe %compilerflags% Lucy.cpp /link %linkerflags%