/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 += (((arr_1 [i_0]) ? ((7997251015413400431 ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : 10449493058296151184)))) : (((148 * (arr_0 [3]))))));
        arr_2 [i_0] |= var_3;

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_12 -= (((arr_6 [i_0] [i_0]) ? ((((((10449493058296151185 ? var_9 : var_7))) ? 53307 : (arr_3 [11])))) : ((-(arr_4 [i_0])))));
            arr_7 [i_1] = (min((var_2 && 10449493058296151185), (arr_0 [i_1])));
            arr_8 [i_0] [i_1] = 246;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = 1374482627;
            var_13 = (arr_10 [i_0] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_14 = 108;
                            var_15 = (max((arr_15 [i_3 - 3] [i_4] [i_5]), ((max((arr_6 [i_3 - 3] [i_3 - 3]), ((((arr_4 [i_0]) == (arr_14 [i_3])))))))));
                        }
                        arr_21 [i_0] [i_2] [9] [i_4] = (-9223372036854775807 - 1);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_16 = (max(var_16, (arr_19 [i_6] [0] [i_0] [i_0] [i_0])));
            var_17 = ((!(arr_22 [i_0] [i_0] [i_0])));
            var_18 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = (max(var_19, ((max((~var_5), var_1)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_20 = 2551;
                            arr_33 [i_6] [i_8] [i_9] [i_7] [i_9 - 2] [i_7] &= (max((arr_32 [i_9] [i_9 + 1] [i_8] [i_7] [i_0] [i_0] [i_0]), (arr_32 [i_9] [i_9 - 4] [i_9 - 2] [1] [10] [i_9 - 1] [i_8 - 2])));
                            var_21 &= (arr_27 [i_0] [i_6] [i_7] [i_9 - 4]);
                            var_22 ^= (min(343573252663752074, 32767));
                            arr_34 [i_9] = (max((max((arr_5 [i_0] [i_6] [i_9]), ((~(arr_4 [i_6]))))), 265));
                        }
                    }
                }
            }
        }
        arr_35 [i_0] = (arr_13 [i_0] [i_0]);
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_38 [i_10] = (min((arr_37 [i_10]), 29078));
        arr_39 [i_10] [i_10] = ((((min((arr_36 [i_10]), 372459888))) ? ((((!148) && (~148)))) : (arr_36 [i_10])));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    {
                        var_23 = (max(var_23, (((((((arr_37 [i_10]) << (((arr_40 [i_10] [i_11 + 1] [i_10]) - 38294)))) >> ((min((arr_45 [i_12] [i_12] [i_13] [i_13 + 1] [i_11]), (arr_37 [i_10]))))))))));
                        arr_47 [i_13 + 1] [i_13] [i_12] [i_11] [i_10] [i_10] = (((arr_43 [i_11] [i_11]) - (((max(1, (arr_36 [i_13 - 1])))))));
                        arr_48 [i_13 + 2] [i_12] [i_10] = ((((((-9223372036854775807 - 1) + (arr_40 [i_13 + 1] [i_12] [i_11 - 2])))) | (max((((var_9 >= (arr_36 [i_12])))), ((var_1 ? (arr_40 [18] [i_11] [i_10]) : 10449493058296151184))))));
                    }
                }
            }
        }
        var_24 = -10681;
        var_25 = ((((min(((min((arr_37 [i_10]), -29086))), 4489416449083411480))) ? 0 : (((arr_42 [i_10]) ? (arr_46 [i_10] [i_10] [i_10] [i_10] [i_10]) : (max(var_9, 981089070))))));
    }
    var_26 = var_6;
    var_27 = ((!(((var_9 ? ((var_10 ? var_4 : 1)) : var_7)))));
    #pragma endscop
}
