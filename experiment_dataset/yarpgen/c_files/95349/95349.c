/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 -= ((var_2 + 2147483647) >> ((((((min(189, var_11))) ? var_8 : var_2)) + 111)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 += (-var_7 || var_12);
                                var_15 = (min(var_15, (var_10 % 251229261)));
                                arr_12 [i_1] [i_2] [i_1] = var_8;
                                var_16 *= (arr_8 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4]);
                            }
                        }
                    }
                    var_17 = (min(var_17, ((max((arr_7 [2]), (min((arr_7 [24]), (arr_7 [4]))))))));
                }
            }
        }
        var_18 = ((((arr_0 [i_0]) + (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = ((!((((arr_6 [i_5] [i_5] [i_5] [i_5]) | (arr_14 [i_5]))))));
        arr_17 [i_5] [i_5] = var_2;
        arr_18 [i_5] = (var_9 ? ((((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_5 [i_5] [i_5] [i_5] [i_5]) : var_3))) : ((-27 ? (arr_8 [i_5] [i_5] [i_5] [i_5] [2] [i_5]) : var_9)));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_19 = var_11;
        var_20 = (max(var_20, (((67 | 47) ? (arr_5 [i_6] [i_6] [i_6] [i_6]) : 7920202625161529297))));
    }
    var_21 = (min(var_21, var_2));
    var_22 = ((var_4 | ((((var_3 >= (65524 / 1380234004)))))));
    #pragma endscop
}
