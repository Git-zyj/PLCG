/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_9);
    var_19 = (((((~(var_14 | var_13)))) == ((var_4 & (((var_9 ? var_5 : var_5)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = ((129 && (arr_0 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = var_12;
            var_21 = ((+((((arr_1 [i_0]) <= var_12)))));
            arr_7 [i_0] [i_0] = (((arr_3 [i_0] [i_1] [i_1]) ? (((var_4 ? var_12 : (arr_5 [i_0] [i_1] [i_1])))) : ((~(arr_0 [i_0])))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_22 = (var_3 ? ((((arr_1 [i_1]) ? var_15 : var_5))) : ((var_2 ? var_5 : (arr_0 [i_1]))));
                var_23 = var_10;
                var_24 = (((((var_6 ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : var_8))) ? -var_8 : (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_25 ^= (((~var_11) == (arr_5 [i_0] [i_1] [i_1])));
                var_26 *= 6838518097738950224;
                arr_14 [i_0] [i_0] [i_0] [i_3] = (arr_2 [i_3]);
            }
            arr_15 [i_0] = (var_11 ^ (((arr_12 [i_0]) ? var_10 : (arr_5 [4] [i_1] [4]))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_27 = (~var_10);
                            var_28 = ((~(arr_22 [13] [i_4] [i_5] [i_6])));
                            var_29 = ((-var_17 / (arr_24 [i_0] [i_0] [i_4] [i_0])));
                            var_30 = (arr_24 [i_4] [i_5] [i_5] [i_4]);
                        }
                    }
                }
            }

            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_31 = ((~(~4294967295)));
                            var_32 = ((!(arr_8 [i_0] [i_0 + 2] [i_8 - 1])));
                        }
                    }
                }
                arr_33 [13] = ((var_7 & (arr_28 [i_0 - 1] [i_8 - 2] [i_0 - 1] [i_8])));
                var_33 = ((!(arr_31 [i_0] [i_0] [i_0 + 2] [i_4])));
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_34 -= ((!(~var_8)));

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_35 += ((((arr_31 [i_0] [i_14] [i_12] [i_14]) ? var_3 : var_7)));
                            var_36 *= ((22008 ? 6527748454541952957 : 1915211611131783883));
                        }
                        for (int i_15 = 2; i_15 < 18;i_15 += 1)
                        {
                            var_37 = (min(var_37, ((((~(arr_16 [13] [13] [i_15])))))));
                            var_38 = (arr_34 [i_12 + 2]);
                        }
                        var_39 = (951724542421720196 ? -2784991219004699868 : 184);
                        arr_46 [i_0] [i_0] [i_12] [i_12] = ((!(arr_29 [i_0] [i_11] [i_12 + 1] [i_13])));
                        var_40 = (((((arr_11 [i_12]) ? var_9 : var_7)) * (~var_8)));
                    }
                }
            }
        }
    }
    var_41 = ((((~var_1) || (((var_6 ? var_6 : var_5))))));
    #pragma endscop
}
