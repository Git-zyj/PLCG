/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 < ((2554880745544902730 >> (2554880745544902730 - 2554880745544902693)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = var_3;
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = ((arr_2 [i_1]) | var_6);

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 ^= (min((arr_6 [2]), (((arr_4 [i_1] [i_1] [i_2]) + var_9))));
            var_20 = -901439593;
            var_21 = (min(((((var_0 >> (217 - 213))) - (min(3393527703, 127)))), ((((arr_3 [i_1] [i_2]) < (arr_3 [i_1] [i_1]))))));
            arr_7 [22] [i_2] [i_2] |= (min(var_8, (max((arr_2 [i_2]), (arr_2 [i_2])))));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_22 -= var_3;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_23 = ((var_10 ^ (arr_13 [i_3 - 1])));
                        arr_14 [i_4] = ((((13769078719482830376 ^ (var_5 & var_7))) > (((var_8 - (arr_4 [i_3 - 2] [i_3] [i_5]))))));
                        var_24 += (var_1 + var_14);
                    }
                }
            }
            var_25 = (((arr_10 [i_3 + 3] [i_3] [i_3 + 3]) == ((((arr_10 [i_3 + 3] [i_3] [i_3 + 1]) & (arr_10 [i_3 + 1] [i_3] [i_3 + 3]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_26 = ((var_6 < (32 ^ 4294967264)));
            var_27 = arr_8 [i_1] [6];
            var_28 = (arr_5 [i_6] [i_6]);
            var_29 &= (((arr_9 [i_1]) ? var_7 : 2842740293052728070));
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_30 = -511;
            arr_20 [i_1] [i_7 - 2] = ((~(1714349331 - var_7)));
            var_31 = (((((arr_16 [i_7 + 2] [i_7] [i_7]) << (((arr_16 [i_7 + 1] [i_7] [i_7]) - 8567854240365109701)))) << (!-8842209222382225161)));
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {
                    var_32 = (max(-24161, -4677665354226721240));
                    var_33 = ((var_1 * (arr_6 [i_9])));
                    var_34 = ((min(var_8, (arr_12 [20] [i_9] [i_9] [6] [i_10] [i_10]))) * ((((!(arr_26 [i_8] [i_8 + 2] [i_9]))))));
                    var_35 = (((min(13769078719482830375, 2554880745544902730)) & (~4294967295)));
                }
            }
        }
    }
    var_36 |= (var_3 & -4103709846);
    #pragma endscop
}
