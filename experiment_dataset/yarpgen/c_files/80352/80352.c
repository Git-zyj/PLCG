/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_11 != var_3);

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = (((arr_2 [i_0 - 2]) ? ((max((arr_1 [i_0 + 1]), var_5))) : (arr_5 [i_1])));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_16 = (min((arr_0 [i_2 + 1]), 1));
                            var_17 = (min(var_17, ((((((~var_0) > 108)) ? (max(var_4, (min(var_7, -9228)))) : ((max(1, (arr_10 [i_0] [i_3] [i_2 + 1] [i_3] [i_4])))))))));
                            arr_14 [i_1] [i_1] = (max((~-7145278196022878732), (max((arr_6 [i_2 + 1] [i_1] [i_0 - 1]), -1))));
                            var_18 = ((1 - (arr_4 [i_1])));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_18 [i_1] = 18446744073709551615;
                            var_19 = 8191;
                            var_20 = (!var_8);
                        }

                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_0 + 1] [i_1] [i_2 + 1] [i_3] [i_0 + 1] [i_1] = ((((arr_20 [i_0] [i_1] [i_2] [i_3] [3]) ? (arr_15 [i_3] [i_3] [i_1] [0] [1] [i_6] [i_1]) : -13203532859128281076)));
                            arr_24 [i_1] [i_3] [i_2] [i_2] [i_2] [i_1] [i_1] = 1;
                            var_21 |= (min((max((arr_13 [i_3] [i_3]), 1)), (((-(arr_22 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_3] [i_3] [i_6]))))));
                            arr_25 [i_1] [i_6] [i_1] [i_2 + 1] [i_1] [i_1] = (1 % 8210);
                            arr_26 [i_1] = (arr_15 [i_0] [10] [i_1] [i_2 + 1] [i_3] [i_3] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_22 = (min(18446744073709551615, 24880));
                            var_23 = (arr_8 [i_1]);
                        }
                        var_24 = 117;
                        arr_31 [7] [i_1] [i_1] [i_0 - 1] = (max(-1336435836, (arr_19 [i_0] [i_1] [i_2] [11] [i_3] [i_0 - 1] [i_1])));
                    }
                }
            }
        }
        var_25 = ((~(((arr_21 [8] [i_0 - 2] [i_0] [i_0 + 1] [8]) >> (arr_21 [0] [i_0 - 1] [i_0] [i_0 - 1] [0])))));
        var_26 *= max((((arr_29 [i_0 - 1] [8]) || var_0)), ((!(arr_29 [i_0 + 1] [2]))));
    }
    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            arr_36 [i_8] [i_9] = (max(((-(max(1984, 13203532859128281076)))), 58410));
            arr_37 [i_9] = (arr_30 [i_8 - 2] [i_8 - 1] [i_8] [i_8 - 2] [0]);
        }
        var_27 = ((((max(-6795757619560716119, var_4))) ? (((min(119, 158)))) : ((-(max(3364007049, (arr_0 [i_8])))))));
        arr_38 [i_8 - 2] = (arr_6 [i_8 + 1] [4] [i_8 + 1]);
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_28 |= (~8178);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_52 [i_10] [i_10] [i_10] [i_10] = ((max(var_5, var_12)));
                        arr_53 [i_10] [i_10] = var_12;
                        var_29 &= ((30824 >> (((((min((arr_8 [2]), (arr_45 [i_12] [i_11] [i_12]))) << (((arr_42 [1] [i_10]) - 1322777408)))) - 1614938089))));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_58 [i_10] [i_11] [i_12 + 1] [i_13] [i_14] = ((4010871391647876404 ? var_6 : (arr_6 [i_12] [4] [i_12])));
                            var_30 = var_2;
                            arr_59 [i_10] [i_10] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_13] [i_11] = var_4;
                            arr_60 [i_10] [i_14] [i_12 - 1] [i_13 - 1] [i_13] = (((2014458182 >= 0) ? (((arr_33 [i_10] [i_10]) << 0)) : (((var_5 != (arr_32 [i_13]))))));
                        }
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            var_31 = ((-(((arr_46 [i_10] [i_10]) ? (~1) : var_7))));
                            arr_63 [1] [i_12] [i_13 - 3] [i_15] = ((~(min(var_4, -202))));
                            var_32 -= ((-((max(-1, -8650)))));
                        }
                        arr_64 [i_10] [i_11] [i_11] [i_11] [i_11] = ((!((max((arr_28 [i_12 - 2]), (!0))))));
                    }
                }
            }
        }
    }
    var_33 = 128;
    var_34 = var_0;
    var_35 -= (((var_1 ? (9312933297915490300 || 74) : var_10)));
    #pragma endscop
}
