/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-11302 ? 122 : -11302);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_0]);
                    var_16 -= ((((((arr_6 [i_2] [i_0]) ? (arr_3 [i_0 - 2] [2] [i_1 - 1]) : (arr_5 [8])))) ? ((var_11 ? (arr_5 [4]) : (arr_2 [1]))) : var_11));
                }
            }
        }
        var_17 ^= ((((((arr_4 [i_0 - 3]) ? var_8 : (arr_3 [i_0] [4] [4])))) ? -var_9 : ((var_0 ? (arr_4 [5]) : (arr_4 [i_0])))));
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] [i_3 - 1] = (var_5 ? ((432660977 ? ((min((arr_9 [i_3 - 2]), 1))) : 2746343318233130773)) : ((((arr_8 [i_3]) - (((((arr_8 [i_3]) || (arr_8 [i_3 - 1])))))))));
        var_18 *= (max((arr_9 [i_3]), (((arr_8 [i_3]) ? (arr_8 [i_3]) : (((arr_8 [i_3 - 2]) % var_1))))));
        arr_11 [i_3] = (arr_9 [i_3 + 1]);
    }
    var_19 = var_5;
    var_20 = var_5;
    var_21 &= (((min(var_7, var_12)) - (max(((var_7 ? var_9 : var_4)), (((var_8 ? var_11 : var_9)))))));
    #pragma endscop
}
