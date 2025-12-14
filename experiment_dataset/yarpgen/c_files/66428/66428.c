/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(var_6, 117131203));
    var_14 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_6 ? var_1 : var_10)));
        var_15 = ((var_4 * (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = var_8;
        arr_6 [i_1] [i_1] = var_8;
        var_16 ^= ((var_7 && (arr_4 [i_1] [i_1])));
        arr_7 [i_1] [3] = (((arr_1 [i_1]) ^ var_3));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (max(((max((arr_3 [1]), (arr_3 [i_2])))), (var_4 / var_6)));
        var_17 = var_7;
        arr_12 [6] [i_2] = -108;
        var_18 = ((arr_10 [i_2]) * (max(var_9, var_6)));
        arr_13 [i_2] = ((-((((var_3 ? var_1 : 171)) % (((14 ? (arr_10 [9]) : var_5)))))));
    }
    #pragma endscop
}
