/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((max(1023, var_5))) ? ((((((var_2 ? var_6 : var_6))) ? -var_9 : ((min(var_1, 20)))))) : (min(var_9, (65515 * var_7)))));
    var_11 = 21;
    var_12 = (var_6 != var_9);
    var_13 += var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) | (min((65515 >> var_4), var_2))));
        var_14 = (min((((((38 ? (arr_1 [i_0]) : var_9))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : 65515)), (min((arr_1 [i_0]), -36))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (min(var_9, (arr_1 [i_1 - 2])));
                        arr_11 [i_3 - 1] [i_3 - 1] [i_0] [9] = (arr_4 [i_3 - 2] [i_1 + 1]);
                        arr_12 [i_0] [i_0] [12] [i_0] = (~(((arr_6 [i_1] [i_0] [i_1 - 2] [i_1 - 2]) ? (((arr_5 [i_0]) + 14)) : (((arr_8 [i_0] [17] [i_0] [i_0] [i_3 + 2] [i_3 + 2]) ? 7977 : var_3)))));
                        var_15 = var_5;
                    }
                }
            }
            var_16 -= -6535;
            var_17 = var_4;
            arr_13 [i_0] [6] [i_1] |= (min(((~(arr_8 [i_0] [i_0] [i_0] [8] [i_0] [i_0]))), (((max((arr_8 [i_0] [i_1] [i_1] [16] [16] [i_1]), 6))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_18 = ((((min(var_7, var_9))) ? ((var_3 ? var_6 : 21)) : (((arr_6 [i_1 + 1] [i_0] [i_1 - 2] [i_4 + 3]) & (arr_16 [i_4] [i_0] [i_4 - 2] [i_4 + 4])))));
                        var_19 += ((((var_3 ? (min(4095, (-2147483647 - 1))) : -32752)) < var_4));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_23 [i_0] [i_0] = (((!(((var_3 ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0])))))) ? (arr_6 [i_6] [i_0] [i_0] [i_0]) : 20);
            arr_24 [i_0] = (17533 | (((var_9 ? 1 : var_2))));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_20 = (((arr_22 [i_7 + 1]) ? 29047 : var_8));
        arr_29 [i_7] = var_3;
    }
    for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_21 = 127;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_22 = (min((((24 || 1) ^ (arr_15 [i_11] [1] [i_8]))), var_0));
                        arr_38 [i_8] [15] [16] [i_8] = var_8;
                    }
                }
            }
        }
        arr_39 [i_8] = var_3;
        var_23 = ((-1647 ? (((arr_9 [i_8] [i_8 + 1] [i_8]) ? (arr_9 [i_8] [i_8 - 2] [i_8 - 2]) : 65515)) : (arr_22 [i_8])));
        var_24 = arr_6 [i_8] [i_8] [i_8] [i_8];
    }
    #pragma endscop
}
