/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((min(var_11, (arr_3 [i_0] [4]))))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [15] [i_1] [i_2] [i_1] = var_0;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_1] [i_2] &= ((arr_6 [i_0 + 1]) ? (arr_13 [i_3 - 2] [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2]) : var_13);
                            arr_16 [1] [i_1] [i_2] [i_1] [1] = var_7;
                            var_16 *= (((~var_11) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2]) : (((arr_6 [i_2]) ? (arr_2 [i_0] [i_0]) : var_10))));
                            var_17 = (max(var_17, ((((((arr_5 [12] [i_1] [i_3] [i_4]) << (var_11 - 101))) * (((!(arr_13 [1] [i_1] [i_2] [i_2] [i_4] [i_2])))))))));
                            var_18 = (min(var_18, ((((arr_1 [i_0 + 3]) ? 10858 : 11311132327914901527)))));
                        }

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_19 = (arr_6 [i_5]);
                            var_20 += (max(var_10, (((arr_1 [i_0]) + (max(var_7, var_1))))));
                            var_21 -= (max(var_0, (!37)));
                            arr_19 [i_0] [1] [i_2] [i_3] [i_2] [i_2] [i_5] = (max(((var_11 & (arr_4 [i_0] [i_0 + 2]))), (((arr_8 [i_0 - 4] [i_3 - 3]) ? (arr_4 [i_0] [i_0 + 3]) : (arr_4 [i_0 + 2] [i_0 - 4])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (max(var_22, (((-31 ? 127 : (arr_18 [i_0] [i_0] [8] [i_3 + 1] [i_6]))))));
                            var_23 = (max(var_23, (((~(arr_18 [i_3 - 2] [i_3 - 1] [i_0 - 1] [i_0] [i_0]))))));
                            var_24 *= (((arr_18 [i_0] [i_0] [i_2] [i_3] [i_6]) ? (arr_18 [i_0 - 1] [i_1] [1] [i_1] [i_6]) : var_0));
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] = (((((arr_0 [i_0 + 2] [i_3 - 2]) ^ (arr_0 [i_0 - 3] [i_3 - 2]))) * var_3));
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_0] = (max(1, 2145386496));
                            var_25 = ((((((max(-8920000207553644624, var_4)) >> ((8920000207553644621 >> (var_5 - 521100003)))))) ? ((~(~var_12))) : (arr_17 [i_0 - 2] [i_0 - 2])));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_22 [i_3 + 1] [i_1] [i_2] [i_0 + 1] [i_7 + 3]);
                        }
                        var_26 = (min(var_26, 8920000207553644615));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            arr_33 [i_0] [i_8] [i_9] [i_1] [i_0] = var_5;
                            var_27 *= (((((~((max(18, 205)))))) && ((((arr_22 [i_9] [i_8] [i_0] [i_1] [i_0]) ? ((-(arr_32 [i_0] [i_0] [i_2] [i_8] [i_9]))) : ((min((arr_28 [i_0] [i_1] [i_2] [9] [i_8] [i_9]), 255))))))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_28 = (min(var_28, (((~(((~var_4) | (arr_1 [7]))))))));
                            var_29 = (max(var_29, var_8));
                        }
                        var_30 = max(((!((min(-8920000207553644622, (arr_27 [i_0] [i_8])))))), ((!(arr_17 [i_0] [i_0]))));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            var_31 = (max(var_31, (((((max(var_11, (arr_36 [i_0] [i_0 - 4] [i_0 - 4] [i_2] [i_8] [i_11])))) ? (arr_34 [i_0] [i_1] [i_8] [6]) : ((max((arr_36 [i_0] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_11]), (((!(arr_8 [i_0 + 3] [i_0 + 3]))))))))))));
                            arr_38 [i_8] [i_8] [9] [i_8] [i_8] = (~1189730623);
                            arr_39 [i_0] [i_0] [i_0] = 65530;
                            arr_40 [i_11] [i_8] [i_1] [i_1] [i_0 - 3] = ((~((~((1 ? (arr_21 [i_0]) : -1754442160))))));
                        }
                        var_32 = (min((max(var_7, (arr_32 [i_0] [i_0 - 2] [i_0 + 3] [i_0] [i_0 - 3]))), ((max((arr_3 [8] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1]))))));
                    }
                    var_33 = (max(var_33, (((+((min((arr_0 [i_0 - 4] [i_1]), (arr_28 [i_0 - 4] [i_0] [i_1] [i_2] [i_2] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
