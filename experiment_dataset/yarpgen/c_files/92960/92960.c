/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [13] = ((((((arr_1 [i_0] [i_0]) >> (((((arr_0 [i_0]) ? var_5 : var_2)) - 2153937424))))) ? (((-13743 != (min(9223372036854775807, (arr_1 [3] [i_0])))))) : (arr_0 [i_0])));
        var_18 *= (arr_1 [i_0] [9]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1]) - (min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_19 = (((min((arr_4 [i_1]), 0)) + (((((arr_4 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1]))) << (((arr_3 [i_1]) - 3048853971))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_20 = (((var_0 | (arr_4 [i_3]))));
                    arr_13 [i_2] [i_3] [i_2] [i_3] = ((-7946943498553795279 ? 0 : 771604851));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 = (((arr_12 [i_2] [i_3] [i_2]) ? (((arr_9 [i_2] [i_2]) ? var_5 : 539572118)) : (arr_11 [i_2])));
                        arr_17 [i_2] [i_3] [i_2] [i_5] = (arr_14 [i_4]);
                        var_22 = (((arr_0 [i_5]) / ((var_0 ? (arr_9 [i_3] [i_4]) : (arr_3 [1])))));
                    }
                }
            }
        }
        var_23 = (((arr_6 [i_2]) ? (arr_3 [i_2]) : (((arr_15 [i_2]) ? var_12 : (arr_0 [i_2])))));
    }
    var_24 = var_0;
    var_25 = var_4;
    #pragma endscop
}
