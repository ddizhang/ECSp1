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



/* This is in funix.h
typedef struct
{
    Directory *currentDirectory;
    int umask;
    int time;
} Funix;

*/


void cd(Funix *funix, int argCount, const char *arguments[])
// calls cd() with currentDirectory as one of its parameters
{
    if (len(arguments)!= 2) {
        printf("usage: cd directoryName")
    }
    else Directory::cd(currDir = funix->currentDirectory,)
    
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
    // funix->time++
    *command = fgets()
    
};


void init(Funix *funix)
// creates currentDirectory, and sets umask and time
{
    time = 0
    umask = 0
    rootDir = (Directory *) malloc(sizeof(Directory *))
    Directory::createDirectory(rootDir, umask = funix->umask)
    
};


void ls(Funix *funix, int argCount, const char *arguments[])
// calls ls() with currentDirectory as one of its parameters
{

    Directory *subDir[] = (funix->currentDirectory)->subDir;
    //loop all subdirectories
    for (i=0; i=len(subDir)-1; i++) {
        Directory::ls(subDir[i]);
    }
        //Directory::ls(, funix->time, argCount)
};



void mkdir(Funix *funix, int argCount, const char *arguments[])
// calls mkdir() with currentDirectory as one of its parameters
{
    currentDirectory = funix->currDirectory
    if (currentDirectory->numSubDir = 3) {
        printf("mkdir: %s already contains th maximum number of directories\n", *(currDirectory->name))
    }
    
    else {
        newDirectory = (Directory *)malloc(sizeof(Directory *))
        
        successMkdir <- Directory::mkdir(dir = newDirectory,
                     name = arguments[1],
                     time = funix->time,
                     currentDirectory = funix->currentDirctory,
                     int funix->umask)
        
        if (successMkdir) {
            
            currentDirectory->numSubDir = currentDirectory->numSubDir + 1;
            currentDirectory->subDir[(currentDirectory->numSubDir) - 1] = newDirectory  //not sure if eligible
        }
        
        
    }
};





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
    char *command;
    const char *arguments[];
    
    init()
    while(1){
        getCommand();
        processCommand();
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
    showPath(funix->currentDirectory);
    print("#");
    return 0
};












