/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((var_4 & var_3) == var_13)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, (((+(((arr_1 [i_0]) * -27391)))))));
        var_19 = 1351886154;
        var_20 = (max((((255 ? var_1 : 246))), ((235 ? (((((arr_1 [i_0]) && (arr_0 [i_0]))))) : var_0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_21 = (~var_15);
                    var_22 = (~235);
                    var_23 = ((var_16 / (arr_6 [i_0])));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_24 |= ((1 ? var_2 : (arr_10 [i_0] [0] [i_2 - 1])));
                    arr_11 [i_0] [i_1] [i_1] [i_4] = (var_8 ? (arr_6 [i_2 + 1]) : 49290);

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_25 = ((-(arr_6 [i_2 + 1])));
                        arr_14 [i_0] [i_0] [i_2 - 2] [i_0] [i_4] [i_5 - 1] &= (8203357777583735421 / 249);
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_26 = (((arr_2 [i_2 - 2] [i_2 - 2]) >= var_2));
                        var_27 = ((~(arr_7 [i_0] [i_1] [i_2 - 3] [i_2 - 1])));
                        var_28 = (35490 - 35490);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_15;
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_29 *= (((var_11 <= var_15) ? (arr_5 [i_2] [i_7 - 1]) : 1047931952));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_2 [i_7] [i_7 + 1])));
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_30 = var_6;
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_8] = ((9888 ? 20 : 121));
                        var_31 ^= ((arr_10 [i_2 + 1] [i_2 + 1] [18]) + (arr_10 [i_2 - 1] [i_8] [i_8]));
                    }
                    var_32 = ((~(arr_15 [i_0] [i_0] [i_2] [i_4] [i_1])));
                }
                var_33 = ((-var_4 && ((((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2]) ? (arr_4 [i_0] [i_0]) : var_2)))));
            }
            for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_32 [13] [i_1] [i_1] [i_1] = ((65535 ? ((var_10 ? -5264698456212427555 : var_8)) : (((~(arr_8 [i_0] [i_0] [i_1] [i_9] [i_10]))))));
                    arr_33 [i_10] [i_10] [i_10] [i_10] = (((arr_30 [i_1] [i_9 - 3] [i_9 - 3] [i_9 - 1] [i_1] [i_10]) || 4294967275));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                }
                var_34 += ((-(1 | 255)));
                arr_35 [i_0] [i_1] [i_9] [i_9] = (((var_5 / var_13) ? (arr_8 [i_0] [i_1] [i_9 + 1] [i_1] [i_1]) : (arr_3 [i_0] [i_1] [i_9])));
            }
            for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_11 + 1] [i_0] [i_0] = var_13;
                    arr_42 [i_0] = (arr_8 [i_11 - 2] [i_11] [i_12] [i_12 - 1] [i_12]);
                }
                for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    var_35 = ((-(arr_1 [i_1])));
                    arr_46 [i_0] [i_1] [20] [i_13 + 2] [i_13 + 2] [i_13 + 2] = ((254 <= (arr_6 [i_13 + 1])));
                    var_36 = (arr_44 [i_0] [i_1] [i_11 - 2] [i_13 + 1]);
                    var_37 = (arr_43 [0] [i_11 + 1] [i_1] [i_1] [i_0]);
                }
                var_38 = ((!(((var_12 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : 2047)))));
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_39 = (min(var_39, (((!(arr_29 [15] [i_14] [i_11 - 3] [i_1]))))));
                            var_40 = ((var_13 ? (arr_43 [i_11] [i_11] [i_11 - 2] [i_11] [i_14 - 1]) : var_12));
                            arr_52 [i_0] [i_1] [i_11] [i_0] [i_15] [i_1] [i_15] = (--218);
                            var_41 = (min(var_41, (((255 ? 427538176 : (var_7 >= var_7))))));
                            var_42 *= (arr_28 [i_0] [i_1] [i_14] [i_0] [5]);
                        }
                    }
                }
                arr_53 [i_0] [i_1] = (((((arr_39 [15] [i_1] [i_11 - 2] [i_0]) / -1654496980)) & (var_0 - var_14)));
                var_43 = var_5;
            }
            for (int i_16 = 3; i_16 < 20;i_16 += 1) /* same iter space */
            {
                var_44 &= (((-32767 - 1) ? -8022902326042040115 : (((((arr_1 [i_0]) > (arr_30 [i_0] [i_0] [i_16 - 1] [i_0] [i_0] [16])))))));
                var_45 = ((!(arr_40 [i_16 - 3])));
            }
            var_46 += (-(var_1 == var_2));
        }
    }
    #pragma endscop
}
