/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = ((var_0 && ((((var_0 / 7426001528151711324) ? 7426001528151711324 : -var_0)))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [i_3] = (arr_8 [3] [3] [17] [7]);
                        var_15 = var_13;
                        var_16 ^= (-((~((min(var_13, (arr_5 [11])))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_1] = ((((((min(var_10, var_11)) + (-4832110684598892115 & var_8)))) ? (min(((var_1 ? var_9 : (arr_5 [5]))), var_2)) : (((var_0 ? ((min(var_2, (arr_0 [14] [i_2])))) : (!var_3))))));
                        var_17 ^= var_1;
                    }
                    arr_15 [i_2] [i_2] [i_0] |= (((((((arr_2 [i_2] [i_1]) ? (arr_9 [17] [17] [i_2]) : var_2)) - (((!(arr_12 [i_0] [i_1] [12] [i_2])))))) - ((((var_7 && (arr_12 [i_0] [15] [i_2] [i_0])))))));
                }
            }
        }
    }
    var_18 = 1;
    var_19 = var_8;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (arr_17 [i_5]);
        arr_19 [i_5] [i_5] = (((arr_17 [i_5]) - (arr_17 [i_5])));
        var_20 = var_4;
        var_21 = ((-7426001528151711313 ? (arr_17 [i_5]) : var_7));
        arr_20 [i_5] = (-2147483647 - 1);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((arr_8 [i_6] [i_6] [i_6] [i_6]) ? (arr_8 [16] [i_6] [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_6] [i_6])));
        var_22 |= (((arr_1 [i_6]) ? (((arr_21 [i_6] [i_6]) ? var_3 : var_13)) : (((var_6 < (arr_2 [0] [i_6]))))));
        var_23 = 7426001528151711313;
        var_24 = ((var_6 >= ((((arr_6 [9] [9] [i_6] [i_6]) ? var_8 : (arr_5 [i_6]))))));
        var_25 = var_10;
    }
    #pragma endscop
}
