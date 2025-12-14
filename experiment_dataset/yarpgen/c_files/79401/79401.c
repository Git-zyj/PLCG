/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 &= (arr_0 [i_1]);
                var_13 = (arr_5 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_11 [i_3] &= (max((min((arr_6 [i_2 + 1] [i_2 + 1]), var_10)), (max((arr_6 [i_2 - 3] [i_2 + 2]), (arr_2 [i_2 - 2])))));
            var_14 = (((((((arr_6 [6] [i_3]) > 4234281286)))) % var_8));
            var_15 ^= (min((((var_6 % var_5) >> (((~var_8) - 7881458033404256964)))), (((~(((arr_7 [i_2]) ? (arr_10 [i_2] [i_3]) : var_4)))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_2] [i_4] = (((((!(~var_3)))) * ((-(((var_1 && (arr_3 [i_2] [i_2]))))))));
            var_16 ^= (((((3421885058408287197 ? (((var_1 ? var_4 : var_1))) : (((arr_6 [i_2 + 1] [i_2 + 1]) * (arr_5 [i_2] [8])))))) && ((((((1073741824 & (arr_4 [i_2] [0])))) ? (((var_4 << (var_6 - 2643296391)))) : (((arr_13 [6] [i_4] [i_4]) & var_1)))))));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_17 = (max(1073741833, 393216));
            var_18 ^= (max((arr_9 [1] [1]), ((~(var_11 && var_5)))));
            arr_19 [3] [i_2 - 1] [i_2] = (((~-5) > ((((var_8 / (arr_8 [i_2]))) * var_0))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    {
                        var_19 += (((((((arr_14 [i_5] [i_5] [i_5]) ? var_2 : -1073741825)) >= (~var_9))) ? (((arr_9 [i_2 - 1] [i_6 - 1]) & ((var_6 / (arr_4 [i_6] [i_7 + 2]))))) : (((-108 / var_11) >> (1918431820 - 1918431811)))));
                        var_20 = (max(var_20, (arr_17 [i_2] [i_2] [i_2])));
                        var_21 ^= (((!1073741824) ? -109 : ((-(arr_17 [i_7] [0] [i_5])))));
                    }
                }
            }
        }
        var_22 += ((((var_4 >> ((((var_10 & (arr_24 [i_2 - 3] [i_2 - 2] [i_2 - 3] [i_2] [i_2 - 3] [i_2]))) - 132))))) ? (max((arr_3 [0] [i_2 + 1]), var_5)) : (~var_9));

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_23 = ((((max(((var_1 ? (arr_17 [i_2] [i_8] [i_8]) : (arr_18 [i_2] [4] [4]))), var_1))) ? (arr_15 [i_2 - 1] [i_2] [i_2]) : ((var_3 * (~var_8)))));
            var_24 *= (((((((arr_4 [2] [i_8]) >= 353969012)) ? 173 : -1073741825))) < (((((arr_0 [i_8]) > var_7)) ? (((var_1 >> (1294089498 - 1294089472)))) : ((1073741820 ? var_6 : (arr_27 [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            var_25 = ((((var_4 ? (arr_30 [i_2]) : (arr_20 [i_2])))) ? var_10 : (arr_25 [i_2] [i_2]));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        arr_37 [i_2] = var_2;
                        var_26 -= (!-var_10);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_47 [i_2] = (((((((-32767 - 1) % 73)) + 2147483647)) >> ((((var_7 ? (arr_29 [i_12]) : -1)) - 23875))));
                        arr_48 [i_2] = (~var_4);
                    }
                }
            }
            arr_49 [i_2] = ((((arr_4 [i_2] [i_12]) ? var_2 : var_3)));
        }
        arr_50 [2] |= ((((~(arr_2 [i_2 + 1])))) ^ ((((min(var_0, (arr_22 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))) ? (~var_5) : ((((arr_29 [i_2]) >> (((arr_14 [i_2] [6] [i_2]) - 104))))))));
        arr_51 [i_2] = ((~((-((var_11 ? var_7 : var_3))))));
    }
    #pragma endscop
}
