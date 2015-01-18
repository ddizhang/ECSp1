//
//  directory.cpp
//  
//
//  Created by Di Zhang on 15/1/15.
//
//

#include "directory.h"

/*void showPath(){
    
    print()
}*/

creatDirectory(Directory *rootDir, int umask ){
    rootDir->name = &"/";
    rootDir->time = 0;
    rootDir->dirPermit = creatPermission(7, umask)
}



void showPath(Directory *currentDirectory)
// Print current path
{
    if (*(currentDirectory->ParentDir != NULL)) {
        showPath(currentDirectory->ParentDir)
        printf("%s/", *(currentDirectory->name))
    } else {
        printf("/")
    }

};


bool mkdir(Directory *dir, char *name, int time, Directory *currentDirectory, int umask){
    
    
    //some code serching for the name of new subdir in the array subdir
    
        //cumsum = 0;
        for (i = 0;i < len(dir->subDir); i++) {
            if(name == currDir->subDir[i]) {  // strcmp(st1, st2) do we have to use this??
                printf("mkdir: cannot creat directory '%s': File exists/n", *name);
                successMkdir = 0;
                goto RETURN
            }
        }
    
        dir->name = name;
        dir->time = time;
        dir->parentDir = currentDirectory;
        dir->dirPermit = creatPermission(7, umask);
        successMkdir = 1
    }
    
RETURN: return(successMkdir)
}



/*have to rewrite!!
 /*
mkdir(Directory* currDir, char *subDirName, int argcount, umask){
    
    parentDir = *currDir
    
    if (parentDir.numSubDir =3)
        printf("mkdir: %s already contains the maximum number of directories \n", *(parentDir.name));
    
    else {
        struct Directory{    /* make a subdirectory
            name = subDirName;
            time = argcount;
            ParentDir = currDir;
            Permission = creatPermission(7, funix)  /* ???
        }subDir;
        
        dir.numSubDir = dir.numSubDir + 1;
        dir.subDir[0] = &subDirName;
        /* change some parameters of current directory

    }
    return(subDir)s
}

mkdir(funix.currentDirectory)

*/

void ls(Directory *directory)
{
    //if (no -l)
    //rwx = Permission::printPermissions(Directory *directory)
    //print
    //else (-l)
};


cd(Directory* currDir, const char * arguments[]){
    if (arguments[1] == '..') {
        currDir = currDir->parentDir
    }
    else
        cumsum = 0
        for(i = 0, i < len(currDir->subDir), i++){
            if(arguments[1] == currDir->subDir[i]) {  // strcmp(st1, st2) do we have to use this??
                currDir = currDir->subDir[i];
                break;
            }
            else cumsum = cumsum + 1;
            //printf("no such directory");
        }
        if (cumsum == len(currDir->subDir))
            printf("no such directory");
    
}
















