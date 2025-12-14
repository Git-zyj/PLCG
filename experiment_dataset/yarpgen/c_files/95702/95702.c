/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [10] [i_3] [i_0] = 7;
                            var_10 ^= (0 + 35);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_11 = var_5;

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_12 = var_2;

                        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_13 = (min(var_13, ((((arr_4 [i_0] [i_0] [i_0]) ? ((25 * (arr_11 [i_0] [i_0] [i_0] [i_5]))) : 98)))));
                            var_14 = (((((var_2 >> (43 - 35)))) ? 9851483493257356936 : (arr_16 [i_5] [i_5] [i_5])));
                        }
                        for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_15 = 29;
                            var_16 = (min(var_16, (-56549 + var_9)));
                            var_17 = ((-(arr_16 [i_4] [i_4] [i_7])));
                            var_18 += ((!(arr_22 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_7])));
                            var_19 = (((arr_17 [i_4 + 2] [i_1] [i_4] [i_5] [i_5 - 1] [i_7 + 2]) ? var_4 : (arr_18 [i_4 + 2] [i_1] [i_4] [i_5 + 1])));
                        }
                        var_20 = ((-16055 ? -36 : 29719));
                        var_21 = (min(var_21, -21));
                    }
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_25 [i_4] = -16041;
                        var_22 = (((!var_7) * ((var_8 ? (arr_15 [i_8 - 1] [i_8 - 1]) : var_2))));
                        arr_26 [0] [0] [i_0] &= var_0;
                    }
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    var_23 = (max(((-((min(71, 127))))), 127));

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_33 [18] [i_1] [i_1] [i_1] = (arr_12 [i_0] [i_1] [i_9]);
                        arr_34 [i_0] [i_1] [i_9] [i_9] [i_10] = ((~(arr_0 [i_0])));
                        var_24 = 8270719446660587327;
                        var_25 = (((arr_30 [i_0] [i_0]) ? ((((((arr_9 [0] [1] [i_9] [i_10] [i_0] [i_9]) ? -122 : (arr_11 [i_0 + 1] [i_0 + 1] [i_9 - 1] [i_0 + 1])))) ? (!var_7) : (arr_11 [i_9 - 1] [i_1] [i_9] [i_9 - 1]))) : ((-((max(0, (arr_6 [i_0]))))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_26 = (max((arr_14 [i_0] [i_0] [i_9 + 1]), var_4));
                        arr_37 [i_0] [i_0 - 1] [i_0] [i_0] = (max(17502271961657709930, -127));
                    }
                    var_27 = ((((!(arr_9 [i_0] [i_1] [i_0] [i_1] [i_0 - 2] [i_9 + 1]))) || ((((arr_12 [i_9] [18] [i_0]) ? 1 : 65535)))));
                    var_28 ^= (min((max(var_4, (arr_27 [i_9 + 1] [i_9 - 1] [i_0 + 1]))), (((var_4 + 9223372036854775807) << (((((arr_8 [i_0] [i_1]) ? (arr_18 [i_0] [4] [i_9] [i_0 + 1]) : (arr_20 [i_0] [i_0] [i_9] [i_1] [i_0] [2]))) - 17130))))));
                    arr_38 [i_0] [i_1] [i_9] &= (((arr_27 [i_0 - 1] [i_0] [19]) - 18));
                }
                for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_29 = (((arr_31 [i_0] [i_0] [i_0] [0] [i_0]) || ((((((-1 + (arr_41 [i_12])))) ? ((var_7 >> (((arr_40 [i_0] [i_1] [i_1] [i_12]) - 15337)))) : var_8)))));
                    var_30 = ((~(((((max(127, (-32767 - 1))))) ^ var_4))));
                    arr_42 [i_0] [i_12] = (arr_22 [2] [i_0] [i_0] [i_1] [i_1] [2] [i_12 - 1]);
                }
                for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 2; i_14 < 19;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_31 = ((((-(arr_23 [i_0] [i_0] [i_13]))) - (((((arr_16 [i_13] [i_13] [i_13]) >= (arr_30 [14] [i_1])))))));
                            var_32 = (((-17 * -127) - var_2));
                        }
                        arr_51 [i_0] [i_1] [2] [i_13] [6] = (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_13 + 2] [i_1]);
                        var_33 = var_0;
                        var_34 = var_2;
                        var_35 = ((((max((arr_2 [i_0] [i_14 - 2]), (arr_2 [13] [i_14 - 2])))) ? (!32767) : ((-(25 + -29714)))));
                    }
                    var_36 = (~-32767);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 19;i_17 += 1)
                        {
                            {
                                var_37 &= -22;
                                arr_58 [i_16] [i_1] &= (((-(arr_28 [i_0 + 1] [i_0] [i_0 + 1] [i_0]))));
                                arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] = var_4;
                            }
                        }
                    }
                    var_38 = (127 * 118);
                }
            }
        }
    }
    var_39 = (min(var_39, var_4));
    var_40 = (((((~(var_5 > var_0)))) ? (((((var_5 ? 13 : var_7))) ? (((var_0 ? var_9 : 0))) : var_0)) : (((~((max(-9175, 16040))))))));
    #pragma endscop
}
