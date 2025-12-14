/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (~((-1444069437 ? var_6 : (arr_2 [i_0]))));
        var_18 = (((arr_2 [i_0]) ? var_2 : var_13));
    }
    var_19 = var_8;
    var_20 = (max(var_13, var_8));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_21 = (-1157 % -1162);
                    var_22 = (arr_4 [i_2]);
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_23 -= ((1134 - ((((((arr_6 [7] [i_2] [i_2]) ? 32767 : var_6))) / (-1355645990 - 576460752303423487)))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_24 ^= max((max((arr_5 [i_5]), (arr_9 [i_5] [i_4 + 1] [i_2]))), -195600593);
                        var_25 = var_4;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_4] [i_6] = (arr_10 [i_1]);

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_22 [4] [4] [i_4 - 1] [i_4 - 1] [i_1] = (arr_16 [i_7 - 1] [i_4 + 1] [i_1 - 2]);
                            var_26 = var_0;
                            arr_23 [6] [6] &= ((((var_10 % (arr_4 [i_1])))) ? (arr_5 [i_4]) : (arr_10 [4]));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_28 [6] [i_2] [2] [i_6] [i_8] |= 225;
                            arr_29 [i_1] [i_1] [12] [i_1] [i_8 + 1] = 32767;
                            var_27 = (((((arr_13 [5] [5]) + (arr_27 [i_1] [i_4] [12])))) ? (-6326004308012109938 + -32753) : 2147483635);
                        }
                        for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, var_0));
                            var_29 = (((~2147483635) | (max((max((arr_24 [i_1] [i_1] [i_1] [i_1] [10]), 1355646006)), (~var_10)))));
                            var_30 = var_7;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_31 = var_13;
                            arr_36 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1] = (((((~(var_8 || var_11)))) ? (((64512 ? var_11 : var_16))) : (min(549755813887, -32755))));
                        }
                        var_32 = var_10;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_33 = ((((-2147483647 - 1) ? 1742865234 : 191721861)));
                        var_34 = ((~((((((arr_5 [i_11]) % var_8)) > (((arr_8 [i_1] [11] [i_1]) ? (arr_19 [i_1] [3] [i_4] [i_1] [13] [i_11]) : 1157)))))));

                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            var_35 = var_2;
                            arr_43 [i_1 + 2] [i_1 + 2] [i_4] [i_1] [i_12] = (((arr_38 [i_12] [5] [i_4] [i_2] [5] [5]) ? (((max((arr_31 [i_4 - 2] [i_4 - 2]), (arr_31 [i_4 - 2] [i_4 - 2]))))) : ((var_6 % (max(var_12, var_7))))));
                            var_36 += ((-549755813888 > (arr_14 [i_1] [i_1] [i_1] [i_1])));
                            var_37 = (((!9) ? (arr_34 [i_1] [i_1]) : (arr_16 [i_1 - 1] [i_4 - 1] [i_12 + 1])));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_38 = (max(var_38, 21));
                            arr_47 [i_1] [i_2] [i_4] [12] [i_1] = (((((var_9 - (arr_35 [9] [i_13] [i_11] [i_4] [i_2] [i_1])))) ? var_16 : ((var_2 ? 6107099361385362094 : -64528))));
                            arr_48 [i_1] [i_1] [12] [i_11] [i_1] = (((arr_27 [i_4 + 1] [i_1 - 2] [i_1]) ? 14 : (var_5 % var_8)));
                        }
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            var_39 = ((~(((var_8 & (arr_5 [i_1 + 3]))))));
                            var_40 = (min((arr_27 [i_1 - 2] [i_4 - 2] [i_1]), ((-(arr_25 [i_1 - 2] [i_1 + 3] [i_4 + 1] [i_4 - 2] [i_11] [i_14 - 1])))));
                            var_41 = (((var_7 ? -32764 : (-2147483647 - 1))));
                        }
                    }
                }
                arr_51 [i_1] [3] = (((var_2 / var_14) ? ((-(arr_8 [i_1] [i_1] [i_1]))) : var_11));
                var_42 = (arr_25 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
