/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = var_3;
            var_21 = (min(var_21, (arr_0 [i_0])));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                var_22 = (((arr_0 [i_2 + 2]) ? (arr_0 [i_2 - 1]) : var_13));
                var_23 &= var_1;
            }
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_24 = (max(var_24, (((var_5 ? ((max((arr_6 [i_0] [i_3 + 3] [i_3 + 1]), var_18))) : ((max((arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]), (max(var_15, var_2))))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_25 = (((arr_4 [i_3 - 1] [i_3 - 1] [i_5]) & 15737));
                            var_26 += (~86);
                            var_27 *= ((~(max((arr_5 [i_3 + 2] [i_3] [i_3]), var_9))));
                            var_28 = 1479969116;
                        }
                    }
                }
            }
            var_29 = (min(var_29, ((max((max((arr_1 [i_3 + 2] [i_3 + 1]), var_4)), (arr_1 [i_3 - 2] [i_3 + 2]))))));
            var_30 = ((~((max(-25052, 108)))));
            var_31 = ((max((arr_13 [i_0]), (arr_13 [i_3]))) ? (((!(arr_18 [i_3] [i_3 - 2])))) : (((arr_11 [i_0] [i_3] [11] [i_0]) ^ 1)));
        }
        var_32 &= ((~(var_2 <= var_6)));
        var_33 = (min((arr_12 [i_0] [i_0] [6] [i_0]), (arr_9 [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        arr_21 [i_7] = ((~(((arr_19 [i_7 - 1] [i_7 - 1]) - (~var_3)))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    arr_28 [i_7] [i_8 - 1] [i_9] [i_9] = ((-(min((max(-1827092465, 0)), 170))));
                    var_34 = (((arr_26 [i_7] [i_8] [10] [i_9]) ? (max((arr_23 [i_7 + 1]), var_16)) : ((~((147 ? 64 : var_7))))));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_35 = (!0);
                                var_36 += (!2147483647);
                                var_37 = var_17;
                                var_38 ^= (((((var_16 - (arr_27 [i_10 - 1] [i_11 - 1] [i_11 + 3])))) ? (arr_34 [i_7 + 1] [i_8 - 1] [i_8 - 1] [i_10 - 2] [i_11]) : (((var_15 >= ((6100413868456231856 ? var_2 : 25051)))))));
                                var_39 = ((((~(arr_26 [i_7 + 1] [i_9] [i_10] [4]))) == (((var_11 && (arr_30 [i_7 - 1] [i_8 + 1] [i_9] [i_11]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_39 [i_8 + 1] [i_12 + 2] = ((~(((arr_20 [1]) ? ((var_1 ? var_11 : var_19)) : var_7))));
                                var_40 = ((((((0 ? var_19 : 0))) % (max(var_11, 3979589788)))));
                                var_41 = (~0);
                                var_42 = (min(var_42, (((((((max(1, (arr_22 [i_7])))) ? ((max(1, var_11))) : 315377508))) ? ((((max((arr_29 [i_7] [13] [i_13 - 1]), 1))) ? (arr_20 [7]) : (((!(arr_26 [i_7] [i_9] [i_12 + 2] [i_13])))))) : ((min((arr_20 [i_12 - 1]), (arr_20 [i_12 - 1]))))))));
                            }
                        }
                    }
                    var_43 += (min((((max(var_10, (arr_23 [i_8 + 1]))) % (arr_19 [i_8] [i_8 - 1]))), (!var_5)));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_44 += ((~(arr_40 [0])));
        arr_42 [i_14] = (((var_3 / (arr_41 [i_14] [i_14]))));
        var_45 = ((arr_41 [i_14] [i_14]) && ((((arr_41 [i_14] [i_14]) ? 4294967295 : (arr_41 [i_14] [i_14])))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_46 = 2463879945;
        arr_46 [i_15] [i_15] = (i_15 % 2 == 0) ? (((~(((var_5 + 2147483647) << (((max(var_2, (arr_44 [i_15]))) - 248636438))))))) : (((~(((var_5 + 2147483647) << (((((max(var_2, (arr_44 [i_15]))) - 248636438)) - 750275641)))))));
        var_47 = (!-var_0);
    }
    var_48 = var_11;
    #pragma endscop
}
