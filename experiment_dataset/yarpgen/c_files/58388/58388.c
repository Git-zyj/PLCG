/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] = -118;
            arr_5 [i_0] [i_1] = ((-118 ? ((-(arr_1 [i_1]))) : ((((arr_0 [i_0]) == 117)))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] = ((!(var_16 != var_6)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_17 = (arr_0 [i_4]);
                        var_18 = (min(var_18, 116));
                        var_19 = -116;
                    }
                }
            }
            var_20 += 124;
            arr_16 [i_2] = 10575;
        }
        var_21 = 12911552615192046082;
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_22 = (max(var_22, (((((-(((arr_17 [i_5]) ? (arr_17 [i_5]) : var_16)))) * (((-(arr_18 [i_5])))))))));
        arr_19 [i_5] = ((!(((8191686879243045222 ? 91 : 54)))));
    }
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        var_23 = (arr_17 [i_6]);
        var_24 = (((~2054517632) ? (((25511 ? (arr_17 [i_6 - 1]) : -125))) : (min(((17 ? 89 : -5000553406784873143)), (~116)))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        arr_26 [i_7] = (arr_23 [i_7]);

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_29 [i_7] [i_8] [i_8] &= ((~(arr_17 [i_7 - 2])));
            var_25 = (max(var_25, (((3664457578 ? 3173336159 : -4834989447485800930)))));
        }
        arr_30 [i_7] = -var_12;
        var_26 = (min(var_26, ((((((-(-127 - 1)))) ? (arr_17 [i_7 - 1]) : 65520)))));
    }
    var_27 = var_0;
    var_28 = ((var_11 > ((~(min(730582395, 123636281))))));
    var_29 = (max(var_29, 483377634));
    #pragma endscop
}
