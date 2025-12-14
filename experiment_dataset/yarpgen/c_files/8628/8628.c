/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = ((-((var_1 & (arr_3 [i_0])))));
        var_13 = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_14 -= var_7;
                            var_15 = (arr_3 [15]);
                            var_16 = max(2047, (arr_9 [i_2 - 2] [7]));
                            var_17 = ((var_0 ? ((-(~0))) : (((((var_8 ? var_0 : var_2))) ? (((arr_13 [i_1] [i_2 - 1] [i_5] [i_1] [i_5] [6]) ? var_7 : (arr_12 [i_1] [i_1] [i_1] [i_1]))) : (((arr_3 [i_1]) ? (-32767 - 1) : (arr_8 [i_1] [10])))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_18 -= var_10;
                            var_19 = (-32767 - 1);
                            var_20 -= (32767 * var_3);
                        }
                        arr_21 [i_4] [7] [i_4] [i_4] = (arr_20 [i_4] [i_1] [i_3 - 2] [i_1] [i_1]);
                        var_21 = ((!(arr_1 [i_3 + 2])));

                        for (int i_7 = 4; i_7 < 8;i_7 += 1)
                        {
                            arr_24 [2] [3] = 127;
                            var_22 = ((((max(29440, 32761))) ? var_3 : (-32767 - 1)));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_23 -= (((var_2 ? ((min((arr_15 [i_1] [i_8] [i_4 - 1] [i_1] [4] [i_2 + 1] [i_1]), (arr_25 [i_1] [i_1])))) : (arr_0 [i_1]))));
                            var_24 -= ((~((-((var_5 ? var_6 : var_8))))));
                            var_25 = ((((((-32767 - 1) ? (arr_22 [i_8] [i_2] [i_3 + 1] [i_4] [i_8]) : ((min(var_5, -20194)))))) ? (arr_2 [i_1] [i_1]) : var_6));
                            var_26 = (max(var_26, (((!(((((((-32740 + 2147483647) >> (63 - 56)))) ? (arr_25 [i_3 - 2] [i_2 - 1]) : -32743))))))));
                            var_27 -= ((((((var_10 + 2147483647) << (!var_1)))) ? ((min((max(var_10, var_4)), (min(61, (arr_22 [i_1] [i_1] [i_3] [i_4] [i_8])))))) : 32765));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_28 = var_0;
                                var_29 = var_9;
                                var_30 = (max(var_30, (((-(((arr_34 [4] [i_2 - 2]) + var_7)))))));
                                arr_35 [i_10] [3] [i_3] [i_2 - 1] [i_1] = -215;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_40 [i_1] [i_2 + 1] = 19565;
                                arr_41 [i_1] [i_1] = (((!(arr_5 [i_2 - 1] [i_3 + 2]))));
                                arr_42 [10] [3] [i_11] [i_3] [11] [i_2 - 2] [i_1] = (((arr_38 [i_12] [i_11 + 1] [i_11 - 1] [i_3 - 2] [i_2 + 1] [i_2 + 1]) ? (arr_38 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_3 + 2] [i_3] [i_2 - 2]) : (((!(arr_38 [10] [i_11 + 1] [i_11 - 1] [i_3 - 2] [i_2 - 2] [i_2 - 2]))))));
                                arr_43 [10] [11] [i_12] [i_3] [i_12] [i_3] [i_3] = ((!((!(~97)))));
                                arr_44 [i_1] [i_1] [i_3 + 2] [i_11] [i_1] = (max((arr_5 [i_2 + 1] [3]), -5839));
                            }
                        }
                    }
                }
            }
        }
        var_31 -= var_2;
        arr_45 [i_1] [i_1] = (!var_5);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    var_32 = ((var_5 ? var_1 : var_2));
                    var_33 = (max(var_33, (arr_37 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 + 1] [11])));
                    var_34 = ((!(((-var_0 ? var_8 : ((max((arr_25 [i_1] [0]), (arr_1 [i_1])))))))));
                    arr_51 [i_14] [i_14] [i_14] = ((var_9 ? var_6 : var_9));
                    var_35 = var_5;
                }
            }
        }
        arr_52 [i_1] [i_1] = var_3;
    }
    var_36 = ((((70 ? 5839 : var_7)) << (var_6 - 4166)));
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 22;i_16 += 1)
        {
            {
                var_37 = ((!((max((((arr_53 [8]) ? (arr_54 [i_15 + 2]) : var_10)), (arr_53 [i_15 + 2]))))));
                var_38 = (((arr_54 [i_16]) >> (var_8 + 16445)));
                arr_57 [i_15] [i_16 + 1] [i_16] = max((arr_54 [i_16 - 1]), ((((arr_54 [i_15]) ? 0 : var_1))));
                var_39 = var_2;
                arr_58 [4] [4] [i_15] = (((((max(var_10, 15287)))) % var_2));
            }
        }
    }
    var_40 += var_2;
    #pragma endscop
}
