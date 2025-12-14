/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_13 = -7575114404320447070;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, var_7));
                        arr_9 [i_0] [i_0] = (arr_7 [i_1 + 1] [i_0] [i_2]);
                        var_15 = (max(var_15, ((((arr_7 [i_1 + 1] [0] [i_1]) ? (arr_0 [0] [i_1 + 1]) : (arr_0 [1] [i_1 - 1]))))));
                    }
                }
            }
        }
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            arr_12 [i_0] [i_0] [i_0] = ((14530156423336954054 ? -7575114404320447066 : 3916587650372597562));
            arr_13 [i_0] [i_0] [i_0] = 14530156423336954069;
            arr_14 [i_0] = ((((((arr_11 [i_0]) ? 0 : (arr_1 [i_0])))) ? (((((arr_2 [i_0] [i_4] [i_4]) || 17600)))) : -1012386775));
            var_16 ^= ((-(arr_7 [i_4] [12] [i_4 - 1])));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_18 [4] |= (!var_2);
            arr_19 [i_0] = ((var_4 ? (arr_16 [i_0]) : ((8386560 ? 18446744073709551600 : (arr_6 [i_5] [i_5] [i_0])))));
            var_17 = (arr_4 [i_5 - 1] [i_0] [i_0] [i_5]);
        }
        var_18 = (~3282580521);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_19 = (((arr_16 [i_0]) ? (((arr_10 [i_7] [i_8]) ? var_8 : 3038510472)) : var_7));
                        arr_28 [i_0] [i_6] [i_0] [i_8] = (!-31293);
                        var_20 = (arr_15 [i_6] [i_6 - 1] [i_6 + 3]);
                    }
                }
            }
        }
        arr_29 [i_0] = var_10;
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        arr_33 [i_9] = ((-1137221601 && (arr_32 [i_9 + 1] [i_9])));
        arr_34 [i_9] [i_9] = ((3 ? 8505720362404438480 : 26118));
        var_21 = ((((((arr_31 [i_9 + 2]) ? (min((arr_32 [i_9] [9]), (arr_31 [7]))) : 1772260431))) ? 6 : (max(((-26119 ? -32743 : (arr_31 [i_9]))), ((742589125 ? (arr_31 [i_9]) : var_11))))));
        var_22 = (arr_30 [i_9 - 1]);
    }
    for (int i_10 = 2; i_10 < 21;i_10 += 1)
    {
        arr_39 [i_10] [i_10 + 2] = ((-(((var_0 | 1256456823) ? ((255 ? (-2147483647 - 1) : 1034421992)) : (arr_37 [i_10])))));
        var_23 ^= min(0, ((((((arr_35 [16]) ? var_6 : (arr_36 [i_10])))) ? var_6 : (18446744073709551597 - 1012386772))));
    }
    for (int i_11 = 1; i_11 < 20;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = (((((arr_41 [i_11 + 1] [i_11 - 1]) ? (arr_41 [i_11 + 1] [i_11 - 1]) : (arr_32 [i_11 + 1] [i_11 + 1])))) ? var_5 : -80);
        arr_44 [i_11 - 1] = ((-(((arr_42 [i_11 + 1] [i_11 + 1]) ? (arr_35 [i_11]) : (arr_35 [i_11])))));
    }
    var_24 ^= (((1753687031 ? (var_10 && 6545851917617943477) : 25)) | (min(((var_8 ? var_5 : var_0)), 0)));
    #pragma endscop
}
