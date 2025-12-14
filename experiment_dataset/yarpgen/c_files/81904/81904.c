/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_0 [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_0 + 1] [i_0] = ((72 * (((((arr_8 [i_1] [i_2 + 1] [i_3 - 2]) - (arr_2 [i_1] [i_2] [i_1]))) / (max(29804, (arr_0 [i_3 + 2])))))));
                            arr_13 [i_1] [i_2 - 2] [i_1 + 1] [i_1] = ((var_0 - (min((-29821 + 6603109717564323486), (((-29821 * (arr_7 [i_3] [i_2] [i_0] [i_0]))))))));
                            arr_14 [i_1] = ((((max(var_6, (arr_2 [i_0 - 3] [i_0 + 1] [i_1])))) == ((var_10 << (var_4 + 2037341585)))));
                            var_15 = (max((-13383 % 1), (((!((!(arr_9 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_3] [i_3 - 1]))))))));
                        }
                    }
                }
                var_16 = (min(var_16, 217));
            }
        }
    }
    var_17 &= var_11;

    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] [i_4] &= (!32762);
        arr_18 [i_4] = min((((arr_16 [i_4 - 1] [i_4 + 2]) ? (arr_16 [i_4 + 4] [i_4 + 2]) : var_10)), ((((((-(arr_16 [i_4 + 1] [i_4 + 3])))) ? var_13 : var_3))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_18 = var_12;
        arr_23 [i_5] = (arr_16 [i_5 + 2] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {
                        var_19 -= (arr_11 [i_6 + 1] [i_6]);
                        var_20 = (max(var_20, 43159));
                        var_21 = 1;
                        arr_30 [i_5] [i_7 + 1] [i_6 - 1] [i_5] = (((arr_20 [i_5]) % 43159));
                        var_22 = (arr_16 [i_6] [i_8]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    {
                        var_23 = (((var_12 ? -29808 : var_2)) >= -255);
                        arr_39 [i_5 + 2] [i_9] [i_5] = ((-32758 ? ((var_7 ? 43159 : (arr_3 [i_5] [i_5]))) : (arr_19 [i_5])));
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, -var_2));
    #pragma endscop
}
