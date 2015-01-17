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

creatDirectory(Directory *rootDir ){
    rootDir->name = "/";
    rootDir->time = 0;
    rootDir->dirPermit = creatPermission(7, funix)
}



showPath(){};


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

cd(Directory* currDir, )


cd(



