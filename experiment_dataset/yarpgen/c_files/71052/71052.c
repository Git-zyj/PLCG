/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 4] = var_14;
        arr_3 [i_0 - 1] = ((var_13 > (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 3] [i_1] = (max((arr_5 [i_1 - 1]), var_16));
        arr_7 [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2 - 3] [i_2 - 2] = var_1;
        arr_13 [i_2] [i_2] = var_7;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] [i_3] = ((((((((arr_14 [i_3]) ? (arr_15 [i_3] [i_3]) : (arr_16 [i_3]))) & ((max(var_3, (arr_14 [i_3]))))))) ? 10289 : ((var_7 ? (arr_14 [i_3]) : (arr_15 [i_3] [i_3])))));
        arr_18 [i_3] [i_3] = var_10;
    }
    var_18 = (max((min(var_1, 16777)), var_14));
    #pragma endscop
}
