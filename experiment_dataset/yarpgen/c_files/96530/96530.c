/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = ((-(((var_9 >> var_5) ^ var_6))));
                    var_11 = ((((((((var_8 ? var_0 : var_0))) ? (20990 / var_1) : (~var_9)))) ? (((((var_1 ? 0 : var_7))) ? var_5 : ((var_2 ? 0 : var_4)))) : ((var_6 ? 65531 : var_5))));
                }
            }
        }
        var_12 = ((var_4 != ((((var_0 ? 0 : var_6)) * var_7))));
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_8 [i_3] = 1;
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_13 += var_1;
                        arr_16 [i_3] [i_4] [i_5] [i_4] [i_4] [11] &= ((~(min((0 * 0), var_8))));
                        var_14 = (max(var_14, (((var_4 != ((((((-8778 ? var_6 : var_4))) && var_5))))))));
                        var_15 = 30492;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_16 = max(35028, 212);
                            var_17 ^= ((((min(((var_4 ? var_0 : 122)), var_4))) ? 35036 : ((((min(247, var_5))) ^ var_9))));
                            var_18 -= ((min(((min(var_3, 31826))), (max(-494227253, 43)))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_19 += (max((((-7018242384140534501 + 9223372036854775807) << (213 - 213))), ((max(var_6, 1454)))));
                            arr_22 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3] = ((7043 << ((((((-8200587271457921017 ? -18467 : 1)) + 18493)) - 14))));
                            var_20 = var_1;
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, (((((max(var_5, 0))) ? (221 & 0) : (var_6 / var_0))))));
        arr_23 [i_3] &= -6004143159289989794;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_22 = ((((((15541 + 0) ? (min(var_0, var_1)) : (24263 & var_4)))) ? var_8 : var_5));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((min(-24263, 10029))))) ? 33099 : -18007)))));
                                arr_35 [i_9] [i_10] [i_9] [i_10] [i_9] [i_12] [i_13] = var_9;
                                var_24 = ((((var_0 || (((var_7 ? 2147483631 : var_5)))))));
                                arr_36 [i_9] [2] [i_11] [i_9] [i_9] = (max(((~(!-4671))), (min((-4671 > var_5), (max(920674275, -25795))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
