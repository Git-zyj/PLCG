/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = ((-((var_7 ? var_4 : ((var_7 | (arr_0 [4] [i_0])))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 ^= (~254);
            var_14 = (max(var_14, (((((((-(arr_4 [i_0]))) | (arr_2 [i_0 + 1] [i_0 + 1]))) >= (((!((((arr_3 [i_0 - 1]) | (arr_4 [i_0 + 1]))))))))))));
            var_15 = ((((((((arr_1 [i_1]) * (arr_2 [i_0] [i_1]))) >= (((var_0 + (arr_0 [i_0 + 1] [i_1]))))))) >> (((min(-var_0, (arr_3 [i_0 - 1]))) + 59250))));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_16 = (((((~(arr_0 [i_0] [i_0])))) ? ((((((arr_3 [i_0 - 1]) ? (arr_5 [17] [9]) : (arr_6 [i_0] [i_0])))) ? (((-115 ? var_9 : (arr_5 [i_2] [i_0])))) : (((arr_6 [17] [i_2]) / (arr_3 [i_0]))))) : ((var_5 ? (((arr_1 [i_0]) & (arr_0 [i_0 - 1] [i_0]))) : ((((arr_0 [i_0] [i_0]) | (arr_2 [i_2] [i_0]))))))));
            var_17 = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_3 + 1] [i_4] = ((~((~(((arr_2 [i_0] [i_0]) | 114))))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_18 += ((11665210962265581562 ? var_9 : (~3491716824501317945)));
                            var_19 = (((((114 % (arr_14 [i_5] [i_4] [i_3] [i_2])))) >> ((((arr_0 [i_3] [i_5]) > var_7)))));
                            var_20 = (((var_6 | ((var_7 ? (arr_14 [i_0] [i_2] [i_2] [i_5]) : var_8)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_21 = arr_3 [1];
                            var_22 |= (((-(arr_5 [i_4] [i_6]))));
                            arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (((((arr_15 [i_4]) ? (arr_3 [10]) : (arr_15 [i_0]))) << (!var_6)));
                            var_23 = (((((((arr_1 [1]) ? (arr_9 [i_0] [i_2] [i_3] [i_6]) : (arr_16 [i_0] [i_2] [i_3] [i_4] [i_6]))) + 9223372036854775807)) >> (var_10 - 1580651316)));
                        }
                        arr_18 [i_2] = (30 ? 114 : -478726558781133892);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        arr_28 [i_0] [6] [6] [i_0] &= ((((((!var_4) ? 0 : ((var_10 ? -115 : (arr_12 [i_0] [i_0])))))) ? (((((127 && 124) && (-5051255435839701908 || 5051255435839701911))))) : (arr_16 [i_0] [17] [i_0 + 1] [7] [i_0])));
                        var_24 += (((((((arr_0 [i_0 - 1] [i_7]) ? var_1 : 96)))) ? -2147483644 : ((~(((arr_19 [i_0 + 1]) ? (arr_13 [i_7] [i_8] [12]) : var_0))))));
                        arr_29 [i_0] [i_0] [i_8] [i_7] = ((((16 | ((var_8 / (arr_14 [i_0] [i_7] [i_0 + 1] [15]))))) < (var_11 / 7)));
                    }
                }
            }
            var_25 = (((((952156761245195825 ? 122 : (1187040738 + 1)))) * 0));
        }
        arr_30 [6] = ((-(-126 | 95)));
    }
    var_26 = var_4;
    #pragma endscop
}
