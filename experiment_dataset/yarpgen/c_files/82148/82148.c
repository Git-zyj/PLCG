/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((var_0 ? ((~(arr_1 [i_0] [i_0]))) : (((max((!40066), 23242))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = 23240;
                                var_14 ^= (arr_7 [i_0] [i_3] [i_4]);
                                arr_14 [i_0] [i_2] [i_0] = ((-((var_1 ? (105 > 1803755955) : (45183 > 1157505996)))));
                                var_15 = (max(var_15, 18446744073709551615));
                            }
                        }
                    }
                    var_16 += 71;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = -20351;
        arr_20 [i_5] [i_5] = (((((~(arr_9 [i_5] [i_5] [i_5] [i_5])))) ? ((~(!73))) : (min(((10805 ? 5235 : var_11)), var_0))));
        arr_21 [i_5] = (((((-23226 ? (((arr_5 [i_5] [i_5]) ? var_11 : 75)) : (!38181)))) ? var_2 : var_5));
        arr_22 [4] [8] = ((((max((arr_18 [i_5]), ((var_8 ? var_4 : (arr_10 [i_5] [i_5])))))) ? var_6 : ((27383 ? (var_9 || var_12) : (var_2 > 1386039277)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_17 = (min(var_17, (((!((((((arr_9 [i_8] [1] [i_6] [i_5]) + 2147483647)) << ((((var_8 ? 5258 : 32749)) - 5258))))))))));
                        arr_30 [i_5] [i_5] = 1227602748;
                        var_18 = ((!(arr_25 [13] [13] [i_7] [23])));
                        arr_31 [i_8] [11] [i_8] [i_8] = ((-((~(arr_0 [i_5] [i_6])))));
                        var_19 = (((-(arr_23 [i_8] [i_6]))));
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_20 = var_4;
        var_21 = (max(var_21, (((((max((arr_32 [i_9]), var_6))) ? 177 : 64)))));
        arr_35 [i_9] &= var_2;
    }
    #pragma endscop
}
