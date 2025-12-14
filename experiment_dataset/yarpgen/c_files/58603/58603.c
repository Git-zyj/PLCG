/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_9;
    var_17 = -156;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_18 = (min((((arr_1 [i_0 - 2]) | (arr_1 [i_0 - 3]))), ((((var_15 ? (arr_1 [i_0]) : (arr_1 [i_0]))) ^ ((min(99, (arr_0 [1]))))))));
        var_19 = (arr_0 [i_0 - 3]);
        arr_2 [i_0] = ((((((156 ? 158 : 9202)))) | ((var_6 ? var_5 : (((arr_0 [1]) * var_3))))));
        var_20 = (arr_1 [i_0 - 3]);
        var_21 = (min((((12582900887823971665 == (((max(var_2, var_1))))))), ((150 ? 255 : -77))));
    }

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (+((((arr_4 [i_1 + 1]) <= (arr_4 [i_1 - 2])))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 ^= (arr_9 [i_1] [i_1 - 1] [i_3]);
                var_23 = var_0;
                var_24 &= ((~(((arr_6 [2] [2]) ? (arr_9 [i_1] [14] [15]) : ((14 ? var_5 : var_4))))));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_14 [i_2] [3] [8] = (arr_7 [i_4] [6]);
                var_25 = (arr_9 [i_4] [i_2] [i_1]);
                var_26 = (((((((((arr_3 [i_1] [i_1]) > (arr_9 [i_1] [9] [i_1]))))) - (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (arr_6 [i_2] [i_1 - 1]) : (arr_8 [i_1] [i_2] [i_1]));
                var_27 = (min(((-174 * (arr_12 [i_1 - 2] [i_2] [0]))), ((min((arr_10 [i_1]), (arr_10 [i_4]))))));
                var_28 = (arr_7 [i_1] [3]);
            }
            var_29 += (arr_10 [i_1]);
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_30 = (min(var_30, (((((arr_7 [i_1 + 1] [i_1 + 1]) ? (var_3 <= var_7) : var_13))))));
            var_31 = var_0;
            var_32 = (max(((var_7 ? (arr_15 [i_1 - 2] [i_5 - 1] [i_5]) : (arr_3 [i_1 + 1] [i_5 - 1]))), (arr_13 [i_5] [i_5 + 3])));
            var_33 = (139 <= 74);
            var_34 = (min(var_13, ((((-2147483647 - 1) ? 242 : (25098 ^ 11378))))));
        }
        arr_17 [4] [i_1] = (arr_7 [i_1] [i_1]);
        var_35 ^= var_5;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_36 ^= (arr_13 [2] [i_6]);
                    var_37 = (var_5 ? ((~(arr_7 [i_1 - 1] [i_1]))) : (arr_7 [i_1 + 1] [i_1 + 1]));
                    var_38 = ((((min(((max((arr_21 [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_6] [i_7])))), ((var_13 ? (arr_18 [i_1 - 2]) : var_4))))) ? (((arr_11 [i_1 + 1] [i_1 - 1]) | (arr_11 [i_1 - 1] [i_1 + 1]))) : var_1));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_26 [i_7] [11] [i_7] [i_7] = ((var_1 ? var_3 : (((arr_4 [i_1]) ? var_7 : var_4))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_39 = (~var_3);
                            var_40 = var_9;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_41 *= (arr_9 [i_1] [i_1] [3]);
                            var_42 = (8528 ? -1014039773 : 215);
                            arr_35 [i_1] [i_6] [i_7] [8] [8] = ((32 ? (arr_21 [i_7] [i_7] [i_1 + 1]) : 1041611182));
                        }
                        var_43 *= (arr_13 [i_1 - 2] [13]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_44 = var_2;
                        arr_39 [i_1 - 2] [i_1] [i_7] [i_1] = 0;
                        var_45 *= ((var_7 - (arr_31 [i_1 + 1] [i_1 + 1] [14])));
                        var_46 = (arr_9 [i_1] [i_1 + 1] [15]);
                    }
                    arr_40 [i_7] = (max((arr_7 [i_1 - 2] [i_1 + 1]), (~1014039772)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_47 = (((arr_43 [i_12]) ? (arr_42 [i_12] [i_12]) : ((var_6 ? (arr_44 [i_12] [i_12]) : (arr_44 [22] [i_12])))));
        var_48 = (!var_8);
        arr_45 [i_12] = (arr_42 [i_12] [i_12]);
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        arr_48 [11] = ((((arr_22 [i_13] [i_13] [i_13] [i_13]) & 488857479)));
        arr_49 [i_13] &= arr_23 [i_13] [i_13] [i_13] [10];
        var_49 = (((((18446744073709551605 ? 237 : 13667839188527079985))) ? ((-(arr_13 [i_13] [i_13]))) : (min((arr_11 [1] [10]), var_9))));
    }
    #pragma endscop
}
