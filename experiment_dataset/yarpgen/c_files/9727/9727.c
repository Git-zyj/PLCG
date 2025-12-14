/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((var_4 ? var_6 : (((var_7 ? var_4 : var_1))))), ((((min(var_2, var_6))) ? ((var_9 ? var_6 : var_4)) : var_6)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_0;
                    arr_9 [i_1] = (((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : var_1));
                    var_12 = (min(var_12, var_8));
                    var_13 = (14397 == 8191);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 -= ((~(arr_11 [i_2] [i_3])));
                        var_15 = (arr_1 [i_1]);
                        arr_12 [i_0] [5] [i_0] [i_1] = ((+((var_0 ? (arr_5 [i_0] [i_1] [i_2] [2]) : var_5))));
                        arr_13 [i_1] [i_1] [i_1] = (~(arr_3 [i_2] [i_3]));
                        var_16 = (arr_1 [i_0]);
                    }
                }
            }
        }
        var_17 = (arr_1 [i_0]);
        arr_14 [i_0] = (((arr_6 [i_0] [i_0] [i_0] [0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_2));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        arr_17 [8] |= ((~((var_8 ? (arr_6 [i_4] [i_4] [i_4] [i_4]) : var_2))));
        arr_18 [i_4] [i_4] = (((((arr_15 [i_4] [i_4]) ? (arr_0 [i_4]) : (arr_7 [i_4] [i_4] [i_4])))) ? var_8 : (((var_6 ? var_4 : var_4))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_18 = (var_2 + var_0);
        var_19 = var_7;
        var_20 += var_2;
        arr_21 [i_5] [i_5] = (arr_20 [8] [8]);
        var_21 -= var_9;
    }
    var_22 -= var_3;
    var_23 = (max(var_23, ((min(var_3, var_0)))));
    #pragma endscop
}
