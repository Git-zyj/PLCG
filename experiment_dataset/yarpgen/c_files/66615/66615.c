/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = (min(2851338152, (max((!27038), (~3319263994)))));
        arr_3 [i_0] = ((((((arr_1 [i_0 - 3]) ? (((arr_1 [i_0]) ? var_0 : (arr_2 [i_0]))) : ((((19280 <= (arr_1 [i_0])))))))) ? (~6376487495317880953) : (arr_0 [i_0])));
        arr_4 [i_0] = ((-(min((((arr_0 [i_0]) - (arr_2 [i_0]))), ((46256 / (arr_1 [i_0])))))));
        arr_5 [i_0] [6] &= (arr_1 [i_0 - 3]);
        var_20 |= ((arr_2 [i_0 - 2]) ? (max(((((arr_2 [i_0]) <= (arr_2 [i_0])))), (4177178713 + var_0))) : ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_8 [0] [i_1] = ((((arr_6 [i_1 - 1]) < (arr_0 [i_1]))) ? (arr_1 [i_1 + 1]) : (~8449074889299934310));
        var_21 = (((arr_0 [i_1 - 2]) < ((47629 & (arr_6 [i_1])))));
        arr_9 [i_1] = (((arr_1 [i_1]) ? ((((arr_2 [i_1 - 1]) && (arr_6 [i_1])))) : (arr_6 [i_1])));
    }
    var_22 = ((max(var_6, var_0)) < (((((min(0, 734778714))) ? var_14 : var_14))));
    #pragma endscop
}
