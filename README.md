#Used Tools
-Basic writing and formatting syntax: Markdown
-Text Editor: Vim
-UML Drawings
sudo apt-get install graphviz
sudo apt-get install doxygen-gui

#Useful snippets:
##Get rid of backup files in subfolders:
find . -type f -name '*~' -delete

#Folder Structure

-bin: for all executables (applications)
The output executables go here, both for the app and for any tests and spikes. 

-build: This folder contains all object files, and is removed on a clean.

-doc: for documentation
Any notes, like my assembly notes and configuration files, are here. I decided to create the development and production config files in here instead of in a separate config folder as they “document” the configuration.

-include: for all header files
All project header files. All necessary third-party header files that do not exist under /usr/local/include are also placed here.

-lib: for all other binaries (static and shared libraries (.so or .dll))
Any libs that get compiled by the project, third party or any needed in development. Prior to deployment, third party -libraries get moved to /usr/local/lib where they belong, leaving the project clean enough to compile on our Linux deployment servers. I really use this to test different library versions than the standard.

-spike: I often write smaller classes or files to test technologies or ideas, and keep them around for future reference. They go here, where they do not dilute the real application’s files, but can still be found later.

-src: for source files
The application and only the application’s source files.

-test: All test code files. You do write tests, no?

#Makefile
http://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/

-g++ -c *.cpp #compiling
-g++ *.o -o program.bin #linking 


##Common Macros
-CC: The name of the compiler
-DEBUG: The debugging flag. This is -g in both g++ and cxx. The purpose of the flag is to include debugging information into the executable, so that you can use utilities such as gdb to debug the code.
-LFLAGS: The flags used in linking. As it turns out, you don't need any special flags for linking. The option listed is "-Wall" which tells the compiler to print all warnings. But that's fine. We can use that.
-CFLAGS: The flags used in compiling and creating object files. This includes both "-Wall" and "-c". The "-c" option is needed to create object files, i.e. .o files.
