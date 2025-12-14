/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 -= var_10;
                                var_18 = 261531516;
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_3] = (((var_13 + 17088) ? 33047 : (((arr_9 [i_0] [i_0]) + (1 - 32511)))));
                                var_19 = (min(var_19, (arr_10 [i_1] [i_2] [i_3] [i_2])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_20 = ((var_1 ? (arr_7 [i_2]) : (arr_7 [i_1])));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_21 = (((arr_12 [i_0] [i_1] [i_2] [i_5] [i_6]) ? var_10 : (arr_12 [i_0] [i_1] [i_2] [i_5] [i_6])));
                            var_22 = (((-18048 + var_7) == (var_7 || var_8)));
                            var_23 -= (((-32488 + 2147483647) >> (((arr_1 [i_0] [i_1]) + 28954))));
                            var_24 += (~-var_10);
                        }

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_25 = (max(var_25, ((((arr_4 [i_0] [i_0]) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_0] [i_0]))))));
                            arr_22 [i_2] = ((((-2080973372 & (arr_8 [i_0] [i_1] [i_2] [i_5]))) == (var_2 - 1)));
                            var_26 = var_12;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_10 [i_0] [i_2] [i_5] [i_7]) >> (66584576 - 66584573)));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_27 = var_12;

                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            var_28 ^= 0;
                            arr_29 [i_0] [i_1] [i_2] [i_8] [i_2] [i_0] = ((var_9 ? (arr_5 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]) : var_16));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_29 *= 0;
                            arr_32 [i_10] [i_10] [i_10] [i_8] [i_10] [i_10] = ((255 ? 279223176896970752 : 261531517));
                        }
                    }
                    var_30 = (min(var_30, (arr_1 [i_1] [i_2])));
                    arr_33 [i_0] [i_0] = (((var_8 & (arr_17 [i_0] [i_1] [i_2] [i_2] [i_2]))));
                    var_31 = 1772967673;
                }
            }
        }
    }
    var_32 &= (!-4033435780);
    #pragma endscop
}
