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


Permission createPermissions(defaultPermission, int umask)
//calculate the permission of a file according to umask and defaultPermission
{
    struct Permission filePermission
    filePermission.rwx = defaultPermission - umask;
    return(filePermission)
}


/*use a compliment*/

void printPermission(Permission permission){
    printf("this is a permission yeah");
    //switch
}