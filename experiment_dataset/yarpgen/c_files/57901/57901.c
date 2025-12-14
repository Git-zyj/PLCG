/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 203769359;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((((arr_1 [23] [i_0]) ? var_1 : 253))) ? (arr_1 [i_0] [i_0]) : ((-(((arr_1 [i_0] [i_0]) & 160977359)))))))));
        var_21 = (min(var_21, (((-9223372036854775807 / (max(var_16, ((-1515754559 ? var_16 : var_12)))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((32755 ? 1310798330 : 65519))));
        var_23 += (min(var_11, -var_7));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_24 = ((var_0 && ((((arr_8 [i_2]) ? (arr_3 [i_2]) : (arr_1 [i_2] [i_2]))))));
        var_25 = 289778501;
    }
    #pragma endscop
}
