/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [14] &= ((2055586639675414451 ? ((176789104 >> (((arr_3 [i_0]) + 564327893)))) : (arr_1 [i_0])));
        var_11 = (((((arr_1 [3]) ? 2512535972 : (arr_2 [i_0] [i_0]))) - var_0));
        var_12 = (((arr_3 [i_0]) | ((176789104 ? 70 : (arr_3 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_13 = (max(var_13, ((((~(arr_6 [0] [i_2])))))));
            arr_9 [i_2] = (((((16391157434034137164 ? var_10 : 16252692027908388541))) ? 13293802263501230276 : (arr_8 [i_2])));
            arr_10 [i_2] = (-86 >= var_3);
            var_14 = (((arr_2 [i_2 - 2] [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2])));
        }
        var_15 = 1;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] &= (((arr_14 [i_3 - 1]) ? (arr_14 [i_3 - 2]) : var_3));
        var_16 = ((-(arr_0 [i_3] [i_3 - 2])));
    }
    var_17 &= ((var_5 ? (max(((var_5 ? var_4 : var_8)), (~var_6))) : (((min(var_6, var_2)) | 176789104))));
    var_18 = var_3;
    #pragma endscop
}
