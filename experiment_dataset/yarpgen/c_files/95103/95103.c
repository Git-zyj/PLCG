/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((82 || var_7) || var_6)) && ((var_13 && (var_14 || var_4)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, 1));
        arr_3 [i_0] = ((var_10 ? (~159) : (!987838723)));
        var_17 = (arr_0 [i_0]);
        var_18 = (max(var_18, (((((~10336816089683799220) ^ var_2))))));
    }
    var_19 = 123;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = var_3;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] = ((((((7406675261649146384 ? var_0 : (arr_6 [i_1] [i_1]))) + (((arr_10 [i_5] [i_3] [i_2] [i_1]) + 0))))));
                                var_21 = ((((var_3 || var_2) ? (arr_4 [i_4] [i_4]) : var_6)));
                                var_22 = (arr_4 [i_1] [i_1]);
                            }
                        }
                    }
                    arr_18 [i_3] [i_3] [i_3] = ((!((!(arr_12 [i_3] [i_2] [i_1])))));
                    var_23 = var_3;
                    arr_19 [i_1] = ((~((~(var_7 || var_10)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                arr_28 [i_6] [i_6] [i_7] = -70;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_24 = ((((~(1 - var_6))) % (arr_22 [i_8])));
                            var_25 = (~((((var_11 ? 15119996628778443433 : var_8)) >> (((arr_30 [i_6] [i_7] [i_8] [i_9 - 1]) - 16964064926120446291)))));
                            arr_35 [i_9] = (((!17557826306048) * (((!(arr_31 [i_8] [i_9 + 1] [i_9] [i_9]))))));
                        }
                    }
                }
                var_26 = ((2 ^ ((var_6 ? var_6 : -var_5))));
                var_27 = (min(var_27, -var_13));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_28 = ((18358072854112185658 ^ (~var_7)));
                            var_29 = ((~(4 | var_10)));
                            var_30 = (min((var_3 == 142), (((arr_34 [i_6]) % var_5))));
                            arr_40 [i_7] &= ((!(arr_33 [i_6])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
