/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 ? ((var_9 ? var_1 : var_1)) : var_5))) ? var_1 : var_4));
    var_11 = (min(var_11, var_3));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 *= (((var_4 && var_9) & var_4));
        arr_2 [i_0] [i_0] = ((((var_1 ? var_9 : var_0)) + ((var_1 ? var_2 : var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_13 = (max(var_13, var_1));
                    arr_11 [i_1] [i_2 - 1] [i_2 - 1] = (((var_1 ^ var_7) ? var_3 : (((var_5 ? var_7 : var_9)))));
                }
            }
        }
        arr_12 [i_1] = ((var_8 ? var_9 : var_8));
        arr_13 [i_1] [i_1] = ((var_0 ? var_9 : var_6));
        var_14 = ((var_7 ? var_8 : var_2));
        var_15 ^= ((var_0 ? var_4 : var_1));
    }
    var_16 = (max(var_16, (((var_6 ? (((((var_8 ? var_9 : var_9)) >= var_6))) : var_5)))));
    #pragma endscop
}
