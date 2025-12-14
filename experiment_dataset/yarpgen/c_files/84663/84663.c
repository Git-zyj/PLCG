/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 = 18198491986007096371;
                    var_19 ^= (min(((min(((1214501888 ? 9353 : 9353)), (arr_1 [i_0])))), (max(170, 4294967295))));
                    var_20 = ((!(var_13 && var_8)));
                    arr_9 [i_0] [i_0] [1] = (((((arr_6 [i_0] [i_0] [i_2]) > (arr_3 [i_1] [i_2]))) || (((+((-905054854 ? (arr_8 [i_0] [i_0] [i_0] [i_2]) : var_7)))))));
                }

                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_21 = (((arr_8 [i_0] [i_3 + 1] [i_3] [21]) * var_7));
                    var_22 ^= var_5;

                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_23 = (((((var_17 ? (arr_11 [i_0] [i_0] [13] [4]) : (arr_2 [i_3])))) ? ((1160 ? 1160 : 2748940325)) : (((arr_5 [i_3] [i_1] [i_0]) >> (2020 - 2015)))));
                        var_24 = 11199623023838424299;

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_25 ^= ((var_13 ? ((1 ? var_9 : (arr_3 [i_4 - 1] [i_4 - 1]))) : var_12));
                            arr_19 [i_0] [6] = var_12;
                            var_26 = ((((arr_11 [i_0] [i_1] [i_1] [0]) != (arr_14 [2] [i_3] [i_1]))));
                            arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_4] [i_1] [i_0] = ((var_9 / ((var_10 ? var_2 : (arr_6 [2] [1] [i_3])))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_27 = ((~(arr_16 [6] [i_0] [20] [i_0] [i_1] [i_3 - 1] [i_6])));
                        arr_23 [i_6] [16] = ((var_10 ? -7988 : (arr_21 [19] [i_1] [19] [19])));
                        var_28 = ((((var_12 ? var_7 : (arr_21 [i_0] [19] [i_1] [i_6 + 1]))) / (arr_3 [i_1] [i_3 - 1])));
                    }

                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        var_29 = (min(var_29, (((-14767 ? 18658 : 96)))));
                        var_30 = (min(var_30, (((~(arr_12 [i_3 + 1]))))));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_31 = (var_8 == var_10);
                            arr_28 [i_7] [i_7] [i_3] [i_7] [11] [i_8] = (~(arr_22 [i_7 - 2] [i_7 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]));
                            var_32 -= (((arr_13 [5] [i_8] [i_3]) ? (arr_1 [i_0]) : (arr_1 [i_8])));
                            var_33 ^= ((var_3 && (!var_4)));
                        }
                    }
                    var_34 = -102;
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_35 = (max(var_35, ((min((((var_9 ? (((arr_30 [i_0]) + 1)) : var_15))), -1708219399)))));
                    var_36 = (var_7 ? ((((((arr_18 [i_0] [i_0]) ? (arr_27 [18] [1]) : var_2))) ? (((arr_29 [10]) ? var_0 : 145)) : (min(var_11, var_10)))) : (max((((arr_4 [i_0]) ? 2020 : 228)), var_5)));
                    var_37 = (((min(838156299, var_5)) >= 106));
                }
                for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_38 = (((~96) ? ((var_8 ? var_6 : var_5)) : (((arr_6 [i_0] [i_1] [i_0]) + (arr_6 [i_10] [i_1] [i_0])))));
                    var_39 = (((max(72, 18446744073709551615)) != (((-((-51 ? var_15 : (arr_2 [3]))))))));
                    var_40 = (max(((((!var_3) >> (var_16 - 22504)))), 1708219399));
                    var_41 = (((((max((arr_27 [i_10] [i_10]), -2475))) ? ((min(1871375749, var_6))) : ((183 ? var_13 : (arr_25 [1] [i_10 - 1]))))));
                    var_42 = (arr_6 [i_0] [3] [i_0]);
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_43 = ((var_0 ? (arr_10 [i_11 - 1]) : ((var_12 ? (arr_21 [i_0] [i_1] [17] [i_11]) : 99))));
                    var_44 = (((((17196719640644800539 ? -1 : -1158))) ? ((var_12 ? var_10 : (arr_29 [i_0]))) : (((72 ? var_6 : var_17)))));
                }
            }
        }
    }
    var_45 = (min(var_45, ((min(var_8, var_5)))));
    var_46 = ((var_6 ? var_13 : ((((!((min(-32749, 64)))))))));
    #pragma endscop
}
