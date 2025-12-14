/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] = (((-32767 + 2147483647) >> (-1289170454 + 1289170454)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((((min(32767, var_10))) / (arr_10 [i_4] [10] [20] [i_2] [i_1] [10] [i_0]))))));
                                var_15 = arr_6 [i_0] [i_1] [i_2];
                            }
                        }
                    }
                }
            }
        }
        var_16 = ((((min(((((arr_9 [16] [18] [i_0] [16]) + -1289170454))), ((-(arr_3 [i_0])))))) ? var_5 : (min(-1289170454, ((var_3 - (arr_8 [i_0] [i_0] [i_0] [i_0] [4] [i_0])))))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((min((min(-32751, 15726424513272603692)), var_10)) / (((var_13 ? var_8 : -3))))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_18 = ((var_4 | (((-19941 || (arr_8 [i_5 + 2] [i_6 - 2] [i_7] [i_6 - 2] [i_7] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                arr_26 [i_9] [i_9] [i_7] [i_6 + 1] [i_8] &= ((min((min(221, var_1)), ((((arr_12 [i_7]) >> (var_8 + 575122843)))))));
                                var_19 = (min(var_19, (arr_11 [4] [4] [i_8] [13])));
                                var_20 = (max(var_20, (((((~(arr_1 [i_6]))) * -var_9)))));
                                var_21 = ((var_9 | (((arr_11 [i_5 + 2] [i_6] [i_7] [i_6]) ? var_2 : ((((arr_3 [i_5]) ? 88 : (arr_20 [i_8]))))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = ((((arr_20 [8]) * (arr_5 [i_5] [i_5] [i_5] [i_5 - 1]))) / (((arr_5 [i_5] [14] [i_5] [i_5 + 1]) * 1)));
    }
    var_23 = ((1364980749 && (((18446744073709551594 ? var_13 : var_10)))));
    #pragma endscop
}
