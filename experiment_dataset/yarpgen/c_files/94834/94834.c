/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_17 = ((((var_13 ? 1 : var_8)) > ((((var_10 != (arr_1 [i_0] [i_0])))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 |= ((((((arr_2 [i_0] [0]) ? var_12 : var_0))) ? ((1 ? 1 : 1762782551)) : -29774));
            arr_6 [i_0] [0] = var_12;
        }
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    arr_16 [i_3 + 3] [i_4] [i_4 - 2] = var_12;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_14 [i_3 + 3] [i_3 - 1] [i_5 - 1]);
                        var_19 = (((((arr_17 [i_2] [11] [3] [i_2]) == 0)) && (arr_14 [i_2] [16] [19])));
                        arr_22 [i_2] [16] [i_4 - 1] [i_5 + 1] = ((!(((arr_8 [4]) || var_5))));
                        var_20 = ((-((1 ? var_3 : var_9))));
                    }
                    arr_23 [i_2] [i_3 + 1] [i_4] = var_1;
                    arr_24 [i_4 + 1] [i_3 + 3] [1] [1] = (((-1762782548 ? 134217728 : 2251799813685247)));
                }
            }
        }
        var_21 = (((arr_13 [i_2] [i_2]) ? (((((min(0, 0))) && (arr_17 [10] [i_2] [1] [i_2])))) : ((((!var_6) && (((arr_13 [i_2] [i_2]) && 1)))))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_29 [15] = ((1 ? 34594 : 1));
        arr_30 [i_6] [i_6] |= (min(var_15, var_1));
        var_22 = ((-(max((((arr_20 [i_6] [i_6] [i_6] [i_6] [11] [i_6]) ? (arr_25 [i_6] [i_6]) : var_2)), var_11))));
        var_23 = ((~(max(((381389522 ? var_3 : var_5)), (((~(arr_17 [13] [i_6] [i_6] [i_6]))))))));
    }
    var_24 |= ((1762782552 ? ((-(1 || var_2))) : 18989));
    var_25 = (max(var_1, var_4));
    var_26 = (((3840 ? -1762782552 : (var_2 | var_9))));
    #pragma endscop
}
