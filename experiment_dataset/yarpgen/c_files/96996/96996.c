/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 == ((var_3 ? var_0 : var_16))));
    var_18 = max(var_0, (max(47, 2409072955950426738)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 = (((arr_0 [i_0] [i_1]) & 47));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = -var_1;
                        arr_11 [i_0] [i_2] [i_0] [i_0] = ((-var_6 ? (arr_6 [i_3 - 1] [i_2 + 1]) : var_10));
                        var_21 = 47;
                        var_22 = (min(var_22, (arr_9 [i_3] [i_3 + 1] [i_3 - 1] [i_2 + 2])));
                    }
                }
            }
        }
        arr_12 [i_0] &= ((-(((!(arr_2 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_23 = 41;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 = var_11;
                                var_25 = (((arr_20 [i_5] [5] [i_7 + 2] [i_7]) >= (arr_20 [i_4] [i_4] [i_7 + 1] [14])));
                                arr_25 [i_7] [i_7] [i_8] = (9005448806809028770 << 47);
                                arr_26 [i_4] [i_7] = ((((var_0 && ((max((arr_23 [i_8] [i_8] [i_7] [i_6] [i_7] [2] [i_4]), 209))))) ? (arr_13 [i_5]) : ((((((arr_16 [i_5] [i_6] [i_8]) ? var_3 : (arr_13 [i_7])))) ? (((arr_20 [i_5] [i_6] [i_7] [7]) ? var_14 : (arr_15 [i_5]))) : -var_2))));
                            }
                        }
                    }
                    var_26 = (arr_24 [i_6]);
                }
            }
        }
        var_27 = (max(((((((arr_13 [i_4]) + var_0))) ? var_9 : 1826025874)), ((((arr_17 [i_4] [i_4] [i_4]) ? ((-(arr_18 [i_4]))) : var_13)))));
        var_28 = var_6;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_29 = (-2147483647 - 1);
        var_30 = ((((var_1 || (arr_29 [i_9]))) && (((49471 ? (arr_27 [i_9]) : (arr_28 [i_9]))))));
    }
    #pragma endscop
}
