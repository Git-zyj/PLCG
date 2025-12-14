/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((arr_3 [i_0]) * (var_7 / 75)));
        var_13 = (((min((arr_3 [i_0]), 3585))) | (max((((-2147483647 - 1) / -81)), ((min((arr_0 [i_0]), 79))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 = (max(var_14, (((arr_0 [i_1 + 2]) ^ (arr_5 [i_1])))));
        arr_6 [i_1] = ((0 ? (arr_5 [i_1 - 2]) : 181));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 = 1;
            arr_12 [i_2] [i_3] [i_3] = (arr_7 [i_2] [i_2]);
            var_16 -= (arr_0 [3]);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = (min(var_17, (((((0 ? (arr_2 [i_2]) : (arr_15 [i_2] [i_4] [i_4]))) / 1)))));

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_18 = (min(var_18, 0));
                var_19 = (max(var_19, ((((288225978105200640 ? 180 : 18446744073709551600))))));
                arr_18 [i_2] [i_4] [i_4] [0] &= ((((((arr_10 [i_4] [i_4] [i_4]) * (((-(arr_9 [0] [i_4]))))))) ? ((-1 ? -165 : var_9)) : (((-((max(14, var_0))))))));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_20 = ((!((((arr_3 [i_2]) * (arr_3 [i_2]))))));
                var_21 -= (((arr_10 [i_6] [i_4] [i_2]) ? (arr_10 [9] [9] [i_6]) : (((((((arr_1 [12]) * var_7))) ? (-79 / 404331071) : -6111)))));
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_22 |= (max((((~(23887 != 0)))), (arr_24 [2] [2])));
                var_23 = (max(var_23, (((-(((arr_11 [i_2] [i_4] [i_7]) ? (1055531162664960 / var_3) : ((-14 ? 35184372088831 : 1)))))))));
                arr_25 [i_2] [i_7] [i_2] [i_2] = ((((!(((~(arr_2 [i_4])))))) ? (1 * 122) : (min(var_0, (arr_15 [i_2] [i_4] [i_7])))));
                var_24 = (((max((arr_23 [i_2] [i_4] [i_7]), (-14 / 7562912265411254074))) << (((max(var_11, var_1))))));
                var_25 *= ((~(min((arr_10 [i_7] [i_4] [7]), ((max(var_5, (arr_1 [i_4]))))))));
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_29 [i_2] = (((arr_13 [i_2]) * (var_9 * -96)));

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_26 = ((((~(arr_7 [i_2] [i_9])))) >= (((!65535) ? ((((!(arr_1 [i_8]))))) : (((arr_20 [i_2] [i_9] [i_2]) / 208)))));
                            var_27 = ((var_3 ? -1155654867 : (((((3771313617 ? 1 : 1)) * (arr_13 [i_10]))))));
                        }
                    }
                }
                var_28 = (523653678 - var_8);
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_29 = var_6;
            arr_38 [i_2] = ((104 * (arr_10 [i_2] [i_2] [i_2])));
            var_30 = 252;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_44 [i_2] [2] [i_13] [i_13] = ((1 << (((arr_37 [i_2]) - 3592732204280481101))));
                        arr_45 [i_12] [i_12] [i_13] [i_2] [5] [5] = 1;
                        arr_46 [i_2] [i_2] [i_12] [i_12] [i_13] [i_2] = (((((arr_33 [1] [i_2]) ? (arr_20 [i_2] [i_2] [i_2]) : var_3)) / (((arr_17 [i_12] [i_12] [i_2]) / 29454))));
                    }
                }
            }
        }
        arr_47 [i_2] [i_2] = (max(((var_9 ? (arr_39 [i_2] [i_2] [i_2]) : (arr_39 [i_2] [3] [i_2]))), ((max((24 <= 9007199254740991), (arr_26 [i_2] [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_31 = ((min(15395488604099506476, -24)) & 20086459);
                    var_32 = -33;
                }
            }
        }
        var_33 = (!-880601106);

        /* vectorizable */
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_34 = ((-var_8 ? (arr_20 [i_2] [i_17] [i_2]) : 36082));
            var_35 = (((var_10 * 1) ? 0 : (((arr_9 [i_2] [i_2]) + (arr_53 [i_2] [i_17] [i_2])))));
            arr_58 [i_2] [i_2] [i_2] = (1 < var_2);
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 12;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 13;i_19 += 1)
                {
                    {
                        arr_63 [i_2] [i_2] [i_18] [i_18] [i_2] = ((!(arr_36 [i_2] [i_18 - 1] [i_2])));
                        var_36 = (arr_14 [13] [13] [i_2]);
                    }
                }
            }
        }
    }
    for (int i_20 = 2; i_20 < 14;i_20 += 1)
    {
        var_37 = (max(var_37, ((((arr_2 [i_20 + 2]) ? (36073 / -1) : ((-(54 / var_9))))))));
        arr_68 [2] [9] = ((((max((((arr_65 [i_20]) ? -68 : var_3)), ((min(var_1, -15)))))) ? (((!(arr_2 [i_20 - 2])))) : (arr_2 [i_20 + 2])));
    }
    var_38 = ((((((var_5 ? 7117680129760448691 : var_1)) % -2806169016097993369)) | 248));
    var_39 = 1;
    #pragma endscop
}
