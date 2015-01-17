//
//  permission.cpp
//  
//
//  Created by Di Zhang on 15/1/15.
//
//

/*typedef struct{
    short permit = 7];
}Permission;
*/
 

#include "permission.h"


Permission createPermissions(defaultPermission, Funix *funix)
//calculate the permission of a file according to umask and defaultPermission
{
    struct Permission filePermission
    filePermission.rwx = defaultPermission - funix->umask;
    return(filePermission)
}


/*use a compliment

