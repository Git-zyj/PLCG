/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((min((min((arr_0 [i_0] [i_0]), var_18)), (arr_1 [i_0]))));
        arr_3 [i_0] = (arr_0 [1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_0 [i_1] [i_1])));
        arr_7 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = (((arr_8 [i_2] [i_2]) * (((((arr_8 [i_2] [i_2]) <= var_9))))));
        var_21 = (max(var_21, ((((arr_8 [i_2] [i_2]) ? 4331 : (arr_8 [i_2] [i_2]))))));
        var_22 ^= ((((~(arr_8 [i_2] [i_2]))) < (arr_9 [i_2] [i_2])));
        var_23 = (arr_8 [i_2] [i_2]);
        arr_10 [12] [i_2] = (arr_9 [i_2] [i_2]);
    }
    var_24 = (max(var_24, var_4));
    var_25 = ((min(((3140705984 ? var_10 : 4327), var_5))));
    #pragma endscop
}
