//
//  smm_object.h
//  SMMarble object
//
//  Created by Juyeop Kim on 2023/11/05.
//

#ifndef smm_object_h
#define smm_object_h

/* node type :
    lecture,
    restaurant,
    laboratory,
    home,
    experiment,
    foodChance,
    festival
*/
#define SMMNODE_TYPE_LECTURE            0
#define SMMNODE_TYPE_RESTAURANT         1
#define SMMNODE_TYPE_LABORATORY         2
#define SMMNODE_TYPE_HOME               3
#define SMMNODE_TYPE_GOTOLAB            4
#define SMMNODE_TYPE_FOODCHANCE         5
#define SMMNODE_TYPE_FESTIVAL           6

#define SMMNODE_OBJTYPE_BOARD   0
#define SMMNODE_OBJTYPE_GRADE   1
#define SMMNODE_OBJTYPE_FOOD    2
#define SMMNODE_OBJTYPE_FEST    3

/* grade :
    A+,
    A0,
    A-,
    B+,
    B0,
    B-,
    C+,
    C0,
    C-
*/
#define SMMNODE_MAX_GRADE       9

#define SMMNODE_GRADE_A_PLUS        0
#define SMMNODE_GRADE_A_ZERO        1
#define SMMNODE_GRADE_A_MINUS       2
#define SMMNODE_GRADE_B_PLUS        3
#define SMMNODE_GRADE_B_ZERO        4
#define SMMNODE_GRADE_B_MINUS       5
#define SMMNODE_GRADE_C_PLUS        6
#define SMMNODE_GRADE_C_ZERO        7
#define SMMNODE_GRADE_C_MINUS       8



//object generation
void* smmObj_genObject(char* name, int objType, int type, int credit, int energy, int grade);
char* smmObj_getObjectName(void *ptr);
int smmObj_getObjectType(void *ptr);
int smmObj_getObjectEnergy(void *ptr);
char* smmObj_getTypeName(int node_type);
int smmObj_getObjectCredit(void *ptr);
char* smmObj_getGradeName(void *ptr);

//member retrieving


//element to string



#endif /* smm_object_h */
