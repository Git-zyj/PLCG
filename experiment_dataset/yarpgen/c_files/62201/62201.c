/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 ^= var_6;
        var_13 = 30766;
        arr_3 [i_0] |= ((var_7 ? 30763 : (arr_0 [i_0] [i_0])));
        var_14 = (max(var_14, (((var_6 & (-30767 * var_3))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 |= (((var_2 ? (arr_6 [i_1]) : var_5)));
        var_16 |= (((max(-30769, var_0))) ? (max((((arr_5 [i_1]) ? var_0 : (arr_2 [i_1] [i_1]))), ((max((arr_6 [i_1]), 65280))))) : (arr_2 [i_1] [1]));
        arr_8 [i_1] = ((((max((arr_2 [i_1] [i_1]), ((6622204547958712183 ? -113 : var_6))))) ? var_4 : ((max(((((arr_6 [i_1]) <= var_6))), var_10)))));
    }
    var_17 = var_1;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = ((((max((-113 | var_2), (12 <= var_9)))) ? ((((((arr_6 [i_2]) ? 30781 : var_2))) ? ((max(var_9, var_0))) : var_5)) : (((var_1 >= (arr_4 [i_2]))))));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_15 [6] [6] = var_1;
            var_18 = ((max(var_2, (var_6 * var_0))) >= ((((~var_0) ? (arr_11 [i_2] [i_3]) : (arr_9 [i_3] [i_2])))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        arr_24 [3] [3] [i_6 - 1] [i_6 + 2] [1] [i_5] = ((((var_4 ? var_1 : var_4)) | (arr_4 [i_2])));
                        var_19 = (-6 < 38);
                        var_20 = (min(var_20, ((((arr_9 [i_5] [i_6 + 1]) | (var_10 | var_2))))));
                        var_21 = (arr_10 [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_22 = 4225950267;
                        var_23 = (((((var_1 ? var_2 : (arr_27 [i_7] [i_5] [i_2] [i_4] [i_3] [i_2] [i_7])))) ? var_8 : (((var_3 ? -69 : var_5)))));
                        var_24 = (~-103);
                        arr_28 [i_2] [i_7] [i_4] [i_5] [1] = ((var_3 ? var_8 : (-121 | 1)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_25 = (max(var_25, var_1));
                        var_26 = ((var_9 ? ((-1 ? -30771 : 13358779378461320836)) : var_9));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_4] [i_3] [i_2] = var_10;
                        arr_34 [i_9] [i_5] [i_4 - 1] [i_2] [i_2] = (arr_29 [i_2] [i_9] [i_5] [i_2] [i_9]);
                        arr_35 [i_2] [i_3] [i_4] [i_5] [i_3] = ((~((var_7 & (-9223372036854775807 - 1)))));
                    }
                    var_27 &= 1;
                    var_28 = var_2;
                }
                var_29 = ((~(arr_20 [i_3])));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_42 [i_2] [i_3] [i_2] [i_4] [i_10] [6] |= var_3;
                            arr_43 [i_2] [i_2] [5] [i_2] [i_2] = ((~(var_4 | 16162987125329372294)));
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
            {
                var_30 = (max(var_30, (arr_26 [i_12] [i_2] [8] [i_2] [i_2])));
                var_31 = var_6;
            }
            arr_47 [i_2] [i_2] = 111;
        }
        arr_48 [i_2] = (max(var_10, 7877045203694356180));
        var_32 |= ((((max((min((arr_4 [i_2]), var_3)), (!var_5)))) ? var_2 : (!var_6)));
    }

    for (int i_13 = 2; i_13 < 9;i_13 += 1)
    {
        var_33 -= (((!(((var_6 ? -194626391 : (arr_6 [i_13])))))) ? (((var_5 ? 6 : (~9223372036854775807)))) : (((max(var_9, 16772034679832441941)) >> (var_4 + 18992))));
        var_34 = (~var_7);
        arr_53 [i_13] [i_13] &= ((((max(var_7, 32))) ? var_1 : (15131 / -9223372036854775802)));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_35 = (((((2408562604760643675 ? 0 : 1))) ? (((1 ? -30763 : 27287))) : ((var_5 ? var_0 : var_8))));
            var_36 &= (((-18560269 ? 9223372036854775807 : 2096640)));
            var_37 = (((arr_18 [i_13 - 2]) ? (~var_5) : var_9));
        }
        for (int i_15 = 3; i_15 < 9;i_15 += 1)
        {
            var_38 = var_8;
            arr_58 [i_13 - 1] = ((((~(30743 == var_7))) * (max(((4503599090499584 ? (arr_16 [i_13] [i_13] [i_15 + 1]) : -30763)), ((min(var_4, var_6)))))));
            var_39 = (max(var_39, var_0));
        }
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        var_40 &= ((~(((((arr_60 [i_16]) ? -12 : var_8))))));
        var_41 = var_3;
        var_42 = (max(var_42, var_3));
        var_43 ^= (min(((~((var_9 ? 1023 : 4)))), ((min((arr_60 [i_16]), (max(-9223372036854775794, var_8)))))));
        /* LoopNest 3 */
        for (int i_17 = 4; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        arr_69 [i_16] [i_16] [i_16] [i_16] [i_18] = ((1 < (min(var_9, var_3))));
                        var_44 = (((arr_60 [1]) & (min(((((arr_60 [i_16]) ? (arr_0 [i_16] [i_17]) : var_10))), var_3))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
    {

        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            arr_74 [i_20] |= ((var_9 ? ((var_7 ? 62 : var_6)) : var_6));
            arr_75 [i_20] [i_20] [i_21] &= ((-var_1 ? 1 : 6606227922235013216));
        }
        arr_76 [i_20] = var_6;
        var_45 = (((~var_3) >= (~var_6)));
    }
    for (int i_22 = 0; i_22 < 18;i_22 += 1) /* same iter space */
    {
        arr_79 [i_22] = var_8;
        arr_80 [i_22] [i_22] = (max((max((max(var_2, var_6)), -6)), (((0 ? -39 : 46161)))));
    }
    #pragma endscop
}
