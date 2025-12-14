/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = ((~(arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = ((47679 ? (arr_6 [i_0] [i_0] [i_1] [i_0]) : 5102980586844639667));
                        var_15 = ((~(arr_7 [i_3] [i_3] [i_3] [i_3])));
                    }
                }
            }
        }
        var_16 = (min(var_16, ((((arr_8 [9] [i_0 + 1]) == (arr_0 [i_0 + 1]))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_5] = var_6;
                        var_17 = (~12010215793762600865);
                        var_18 = (max(var_18, (~-6377115515510648746)));
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_19 = (((var_10 == ((26 ? var_2 : (arr_21 [i_7 + 1] [22]))))));
        var_20 = (arr_20 [i_7 - 1]);

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_21 *= var_5;
            arr_25 [i_7] [i_8] |= (((~var_12) ? ((((arr_21 [i_7 - 1] [i_7]) > (arr_21 [i_7 - 1] [i_8])))) : 4));
            var_22 = (arr_22 [i_7 + 1]);

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_23 = ((((~(arr_22 [i_7 - 1]))) == (arr_22 [i_7 - 1])));
                var_24 = (((-45 | (arr_20 [i_7]))));
            }
            arr_29 [i_7 + 1] [i_7] [i_7 + 1] = arr_23 [i_7] [i_8];
        }
        var_25 += (((var_12 == var_0) > var_4));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_26 = ((+(max((arr_28 [i_7] [i_10] [i_7] [i_7]), var_10))));
                    var_27 = (~var_5);
                }
            }
        }
    }
    var_28 = ((var_3 ? (((16700 != 22) | (max(var_3, var_10)))) : -9223372036854775807));
    #pragma endscop
}
