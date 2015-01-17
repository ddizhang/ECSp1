//
//  funix.cpp
//  
//
//  Created by Di Zhang on 15/1/15.
//
//

#include "funix.h"
#include "directory.h"  /* not sure*/
#include "string.h"



typedef struct
{
    Directory *currentDirectory;
    int umask;
    int time;
} Funix;



void cd(Funix *funix, int argCount, const char *arguments[])
// calls cd() with currentDirectory as one of its parameters
{
    argCount = argCount + 1;
};


int eXit(Funix *funix, int argCount, const char *arguments[])
// checks "exit" command, returns 0 on proper exit
{
return(0)
};

void getCommand(Funix *funix, char *command)
// writes prompt and reads command
{
    writePrompt();
    fgets()
    
};

void init(Funix *funix)
// creates currentDirectory, and sets umask and time
{
    time = 0
    umask = 0
    rootDir = (Directory *) malloc(sizeof(Directory *))
    Directory::createDirectory(rootDir)
    
};


void ls(Funix *funix, int argCount, const char *arguments[])
// calls ls() with currentDirectory as one of its parameters
{};

void mkdir(Funix *funix, int argCount, const char *arguments[])
// calls mkdir() with currentDirectory as one of its parameters
{};






int processCommand(Funix *funix, char *command)
// returns 0 on proper exit
{
    switch () {
        case cd:
        cd();
            break;
            
        default:
            break;
    }
return(0)
};




/* ==================  1  ===================*/

void run(Funix *funix)
// reads and processes commands in a loop until proper exit
{
    init()
    while(1){
        getCommand()
        processCommand()
        if exit() break;
    }
    
}；




void umask(Funix *funix, int argCount, const char *arguments[])
// checks "umask" command and executes it if it is proper
{
    
    
};

void writePrompt(Funix *funix)
// shows path and '#'
{
    showPath();
    print("#");
    return 0
};












