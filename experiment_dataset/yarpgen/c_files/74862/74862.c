/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!1295091835) || (((var_13 ? (var_18 || var_4) : var_10)))));
    var_21 = -var_15;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (arr_0 [i_0] [i_0]);
        var_23 &= ((!((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)) >> (var_6 - 103))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_24 = (((min(var_8, 16454211304072899290)) % (arr_4 [i_2 - 1] [i_1] [1])));
                        arr_13 [i_0] = ((((arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_0]) + (arr_9 [i_2 + 1] [i_1 + 1]))));
                        var_25 = (max(var_25, ((min(32767, (min((arr_1 [i_2]), (min((arr_7 [i_2 + 1] [i_2 + 3] [i_2 + 1]), (arr_1 [i_0]))))))))));
                        var_26 = (arr_6 [i_0] [i_1 + 1] [i_2] [i_3 - 2]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [1] [i_0] = var_9;
                            var_27 = (min(var_7, var_1));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [6] [i_0] [i_0] [8] = -46336;
                            var_28 &= (min(((min(40, (((!(arr_14 [i_0] [i_3] [i_0] [i_1] [i_5]))))))), (min(4325878451249240268, (arr_2 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_25 [i_6 - 3] [i_6 - 3] = (min(((((~var_18) ? -11025 : ((115 % (arr_24 [i_6] [i_6])))))), ((+(((arr_21 [i_6]) | var_11))))));

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            arr_29 [i_6] [i_7] = ((min(1992532769636652326, 203)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_29 = (min(((-(arr_34 [i_9]))), -var_19));
                        arr_36 [i_9] [i_7] [i_8] [i_9] [i_9] [i_8] = (arr_33 [i_6 + 2] [i_6 + 2] [13] [i_8] [i_9]);
                        var_30 += var_0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_31 += -272641538;
                        var_32 = ((((((min(var_10, var_6)) + -272641538))) ? ((min(116, (arr_39 [i_6 + 2] [i_6 + 2] [i_10] [i_11])))) : var_0));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_33 |= (min(var_6, ((~(arr_43 [i_6 - 3] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2])))));
                        arr_51 [i_6] [i_6 - 2] [i_12 + 2] [i_13 - 1] [15] [i_14] = var_3;
                        var_34 = var_18;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        arr_59 [i_6 - 2] [i_6 - 1] [15] [i_16] [i_17] = ((((min((min(16454211304072899290, 3291523548)), (!var_1)))) ? ((((((-(arr_58 [i_6] [i_16] [i_16] [i_17] [i_17])))) ? ((-(arr_54 [i_15]))) : (var_18 <= 18228)))) : (((((min((arr_38 [i_6] [i_15 + 2] [i_16] [i_6]), 203)))) + (arr_37 [i_6] [i_15] [i_16] [i_17])))));
                        arr_60 [i_6] [i_6 - 3] [i_15] [i_6 - 3] [i_16] [i_17] = ((+((var_19 ? (arr_23 [i_15]) : 339598193))));
                        var_35 = var_0;
                        var_36 += (min(((min((arr_27 [i_6 + 2] [1] [i_6]), (arr_27 [i_6 - 1] [i_15 - 1] [i_16])))), ((-(min(33802, (arr_50 [i_6] [i_6] [16] [i_16])))))));
                        var_37 ^= ((-(((var_5 | (arr_45 [i_6 + 1] [i_17] [i_6 + 1]))))));
                    }
                }
            }
        }
    }

    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        arr_64 [i_18] [i_18] = 272641538;
        var_38 = (min(((-(arr_27 [i_18] [i_18] [i_18]))), (arr_0 [9] [9])));
    }

    for (int i_19 = 1; i_19 < 10;i_19 += 1)
    {
        var_39 = min((arr_55 [i_19] [i_19]), (((~(734797506 | var_1)))));
        var_40 = (((~(arr_42 [i_19] [i_19 - 1]))));
        var_41 = (arr_55 [i_19] [i_19]);
        var_42 = (min(var_42, (min((arr_56 [i_19]), ((((arr_40 [i_19 + 2] [i_19] [i_19]) != var_12)))))));
    }
    #pragma endscop
}
