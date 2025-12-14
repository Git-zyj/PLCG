/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [7] = (((((((arr_2 [i_0]) ? (arr_3 [15]) : 249)))) ? (((arr_3 [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0]))) : (arr_2 [16]))) : 70));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 ^= 41;

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0] = max(((((arr_7 [i_0] [i_2]) & (arr_8 [i_0] [i_0] [i_0])))), (((91 >= ((~(arr_5 [i_0] [i_0] [i_0])))))));
                var_18 = (min(((0 ? (~6) : 0)), ((+((55 ? (arr_7 [i_2] [i_2]) : (arr_1 [i_2])))))));
                arr_10 [i_0] [i_1] [i_1] [2] = (min((((arr_0 [i_0] [i_1]) ? 198 : (arr_0 [i_1] [2]))), (((arr_0 [i_0] [i_1]) << (((arr_0 [i_0] [i_0]) - 162))))));
                var_19 *= 245;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 = (min((arr_0 [i_0] [4]), 7));
                            var_21 = arr_5 [i_0] [i_0] [i_3];
                            arr_15 [i_0] [i_1] [i_2] [i_2] [8] [i_0] [i_3] = ((~((-((242 + (arr_1 [i_1])))))));
                            var_22 = ((max(((8 ? 120 : 176), ((160 ? 10 : 255))))));
                            arr_16 [i_0] [i_1] = (((arr_3 [i_0]) ? (arr_0 [0] [i_4]) : (min(58, 10))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
            {
                var_23 *= ((!((max((arr_14 [i_0] [i_1] [i_5]), (arr_14 [i_0] [i_0] [i_5]))))));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_24 = 8;
                    var_25 = 211;

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_7 - 1]);
                        var_26 ^= (arr_22 [i_7] [i_7] [3] [i_7] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_6] [8] |= 22;
                        arr_28 [i_0] [i_8] [i_5] [15] [i_8] = (~var_3);
                        arr_29 [i_5] [i_1] [i_6] [i_5] [i_8] [i_6 + 2] [i_8] = (((arr_1 [i_6 + 1]) ? (arr_2 [i_6 + 1]) : (!205)));
                    }
                    var_27 = (max(var_27, (arr_7 [i_6 + 2] [i_6 - 2])));
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_28 = (min(((min((arr_7 [i_0] [i_0]), (0 == var_11)))), ((~(arr_20 [i_0] [i_1] [11] [i_9 + 1] [0] [i_9])))));
                    arr_32 [i_0] [i_1] = ((!(((~(arr_23 [13] [i_1] [i_1] [i_5] [i_9 + 2]))))));
                    var_29 *= (min((((arr_0 [i_0] [i_1]) & (arr_0 [i_0] [i_0]))), (11 ^ 255)));
                }
                var_30 = (max(var_30, (((((((arr_8 [i_0] [i_1] [i_5]) ? (arr_8 [i_0] [i_0] [i_5]) : 189))) ? 16 : 22)))));
                var_31 = (((arr_18 [i_1]) ? ((((175 ? 9 : var_14)))) : ((min((arr_21 [i_1] [i_1] [3] [i_0]), 1)))));
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_32 += min(189, (((99 == (arr_30 [i_0] [i_11] [i_0] [i_12 + 1])))));
                            arr_40 [i_0] [i_1] [i_10] [1] [i_0] = ((~(min(((0 ? var_16 : (arr_18 [i_0]))), (arr_26 [i_0] [i_12 - 2] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                arr_41 [i_10] [i_0] [i_0] [i_1] &= ((((10 ? (arr_8 [2] [i_10] [i_10]) : 196)) << ((((min(var_6, var_2))) - 187))));
                var_33 = (min(((~(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((min((arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 17)))));
            }
        }
        arr_42 [i_0] [i_0] &= ((-(arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                {
                    var_34 |= (((arr_0 [i_0] [i_0]) << (var_12 - 55)));
                    arr_48 [i_0] [i_0] [i_0] = (min(187, (arr_33 [i_14 + 1] [i_13])));
                    var_35 |= (((((-(~9)))) ? (--11) : (!177)));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        arr_51 [i_15] |= ((~((~((min(246, var_10)))))));
        arr_52 [i_15] = arr_14 [18] [i_15] [i_15];
        arr_53 [i_15] = arr_38 [i_15] [i_15] [i_15] [i_15] [8] [i_15];
    }
    var_36 = var_16;
    #pragma endscop
}
