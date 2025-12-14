/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = var_11;
                var_16 = var_3;
                var_17 = (1 + 17676);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = var_9;

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_18 = var_7;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 = 17665;
                        var_20 = ((1291511116 >> (var_3 + var_1)));

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_21 = (max(var_21, var_9));
                            var_22 -= (((arr_12 [8]) ? (arr_11 [4]) : var_3));
                            var_23 *= ((~(arr_15 [i_2] [i_3] [i_2] [i_5 + 1] [i_6 + 1] [1])));
                        }
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            var_24 = 2808803433697203664;
                            var_25 -= (((min(var_5, 15637940640012347952))));
                            arr_22 [i_2] [i_4] [i_2] = (((var_12 < ((var_13 ? 15637940640012347952 : var_4)))));
                        }
                    }
                }
            }
        }
        arr_23 [i_2] = (min((((!(-17676 || var_0)))), var_1));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_26 ^= -17699;

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_27 = ((-70 ^ (((arr_24 [i_9]) ? 70 : var_10))));
            var_28 = ((379459590 ? var_2 : -17676));
            var_29 &= ((var_0 ^ (((var_0 ? var_0 : var_0)))));
        }
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            arr_34 [i_10] = (((((!(((1116892707587883008 ? var_12 : 8)))))) > ((+(((arr_30 [i_10]) << (((arr_30 [i_10]) - 775988250))))))));
            var_30 = 22835;
            var_31 = (min(var_31, var_3));
            var_32 = ((17676 % (((var_4 != var_2) - (arr_31 [i_8])))));
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_33 = 2936;
            arr_37 [i_11] [i_8] [i_11] = (-2928 ? var_9 : (max(var_6, 65535)));
            var_34 = (min(var_34, (arr_27 [i_8] [i_11])));
            arr_38 [i_11] [i_11] [i_8] = var_9;
        }
    }
    var_35 = (max(-var_8, var_10));
    #pragma endscop
}
