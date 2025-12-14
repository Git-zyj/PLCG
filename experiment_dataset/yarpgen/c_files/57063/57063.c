/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_9, var_0))) * (((8111581303828277144 % var_8) ? 7992 : var_7))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = ((((((~var_2) & ((min(var_1, (arr_4 [i_0] [i_0] [i_0]))))))) ? ((min((arr_2 [i_0]), var_8))) : (((((arr_5 [i_2]) & var_6))))));
                    var_12 ^= ((((-4952593317984898147 ? 63180 : 8111581303828277141)) == (((max((arr_5 [i_1]), 8111581303828277130))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_3] [i_2] &= (arr_7 [i_3] [i_1]);

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_13 = ((-(arr_4 [i_0 - 4] [i_4 - 2] [i_4 - 2])));
                            var_14 ^= ((-(arr_8 [i_0] [i_3] [i_0] [i_1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_15 [i_0 + 4] [1] [i_2] [i_2] [i_5] = ((+(((arr_2 [i_0]) >> (var_7 - 4272255084)))));
                            var_15 = (((((var_4 ? var_9 : var_8))) ? (((arr_1 [i_3]) - (arr_8 [i_3] [i_2] [i_2] [i_2]))) : (arr_1 [i_0 + 4])));
                            var_16 = 24830;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 = (max(var_17, ((min((arr_8 [0] [i_3] [2] [0]), (((arr_14 [i_0] [i_0] [6] [i_3] [i_1]) | (((30484 ^ (arr_0 [i_0 - 4] [i_0 + 4])))))))))));
                            var_18 = var_6;
                            var_19 = arr_11 [i_0] [i_0] [i_0] [i_0] [i_6];
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [4] [4] [i_2] [i_0 - 3] [i_0] [i_0] [8] = (max((arr_16 [i_7] [i_1] [i_1] [i_3] [i_7] [i_2] [i_3]), (((arr_20 [i_0 + 2] [i_2] [i_2] [4] [i_7] [i_1]) ? (arr_20 [i_0] [i_2] [i_2] [i_1] [i_2] [i_1]) : var_1))));
                            var_20 += (arr_13 [i_0] [i_2] [i_3]);
                            var_21 += ((var_6 >> (var_0 - 213)));
                            var_22 = (max(1, ((var_2 ? 16757 : (min(-7230460435030903632, 2616294467))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_1] [i_2] [i_8] = ((+(((arr_8 [1] [i_2] [1] [i_8]) + var_6))));
                        var_23 = (max(((max((arr_5 [i_2]), 41810))), var_5));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_29 [7] [i_2] [7] [i_1] [i_2] [i_9] = var_0;
                        var_24 -= ((var_1 && ((max((min(var_1, var_7)), var_2)))));
                        var_25 -= (arr_2 [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_26 += var_8;
                        arr_34 [i_0] [i_10] [i_2] [i_2] = 1067;
                        var_27 = (min(var_6, ((+(((arr_7 [i_2] [i_2]) ? var_2 : 11379))))));
                    }
                }
            }
        }
    }
    var_28 = (((((var_1 & ((min(var_5, var_6)))))) ? (((((-17098 ? 1496208461 : 2062))) ? var_6 : var_8)) : ((((var_5 >= (var_7 < var_7)))))));
    var_29 = ((max((max(42401, 38364)), 8363)));
    #pragma endscop
}
