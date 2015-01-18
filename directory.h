//
//  directory.h
//  
//
//  Created by Di Zhang on 15/1/15.
//
//

#ifndef ____directory__
#define ____directory__

#include <stdio.h>
#include <stdlib.h>

typedef struct Dir{
    char *name;
    int time;
    struct Dir *subDir[] = NULL;
    int numSubDir = 0;  /* no greater than 3 <- define in directory.h  */
    struct Dir *ParentDir = NULL;
    struct Permission dirPermit;
} Directory;





#endif /* defined(____directory__) */


