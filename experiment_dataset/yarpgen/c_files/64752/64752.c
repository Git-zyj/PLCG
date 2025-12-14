/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((max((((var_10 ^ (arr_2 [16])))), (~0)))) ? ((~(~-2235))) : (max((arr_0 [i_0] [i_0]), ((0 ? 74 : 255)))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_11 ^= (((max(var_9, (var_3 / 18446744073709551613))) * ((((arr_8 [i_3] [i_3] [0]) ? (arr_5 [i_0 - 2] [i_3] [i_3]) : (arr_1 [16]))))));
                    arr_11 [i_3] = ((!(~var_6)));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_12 = (min(var_12, ((((((3939269535 ? 126 : var_5)) <= var_2))))));
                        arr_15 [i_0] [i_0] [i_3] [i_0 - 2] [5] = (var_9 * var_4);
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_3] [i_2] = 311521516;
                        var_13 = ((((((arr_1 [i_1 - 1]) / (arr_1 [i_1 - 1])))) * ((((1 % (arr_5 [0] [i_2] [i_2]))) * var_5))));
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_14 *= (((((var_1 ? (arr_6 [14] [4]) : 1))) ? ((var_2 * (arr_20 [i_1] [i_1 - 1] [i_1 - 1]))) : ((-6689292428433242245 ? -25 : 17436061013681856808))));
                    arr_21 [i_0 - 1] [i_1] [0] [i_6] = (max((((arr_16 [i_6] [i_2] [2] [i_2] [8]) ? (((arr_10 [i_0] [i_1] [i_0]) ? var_7 : (arr_14 [8] [8] [1] [8] [17]))) : (((var_7 ? var_4 : var_3))))), var_1));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_2] [i_1] [i_0] [i_7] [i_1] = (3318670592 && var_6);
                    var_15 -= var_5;
                    var_16 &= ((1 ? -18 : 9103026722291560241));

                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_17 = -2473638984050882874;
                        var_18 *= var_1;
                        var_19 |= var_3;
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((45229 ? 1 : 54284)))));
                            var_21 = (min(var_21, var_10));
                            arr_33 [i_0] [i_9] [7] [9] [i_0] [i_0] = (max(1048575, (arr_25 [i_0] [i_1 - 1] [1] [i_0 - 1] [i_1])));
                            arr_34 [i_0] [i_2] [i_0] [6] = (arr_23 [i_0] [i_0] [14] [i_9] [i_10]);
                            var_22 *= arr_8 [i_0] [i_0] [4];
                        }
                    }
                }
            }
            arr_35 [i_0] = ((7 && (((~((var_6 ? -1 : (arr_17 [i_0] [i_1] [1] [i_1] [i_1 - 1]))))))));
            arr_36 [0] [i_0] = (((7 ^ (arr_31 [16] [i_0] [16] [0] [i_1]))));
            var_23 ^= var_5;

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_24 *= min(((((-8378281116315867996 + 9223372036854775807) >> (140737488355327 - 140737488355299)))), (max(524287, 1204074169058952344)));
                arr_41 [1] [1] = ((min((~var_5), var_8)));
            }
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                arr_45 [i_12] [i_1] [i_1] [i_1] = (((((127 ? 0 : 0))) ? ((min(33030144, 144))) : ((((((arr_1 [i_12]) << (var_4 - 73)))) - (-5640 % 3537479804)))));
                arr_46 [i_0] [i_1] [14] [i_0] |= var_6;
            }
        }
        arr_47 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 13;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_56 [1] [i_14] [9] [i_13] |= 1;
                    var_25 ^= 1;
                    var_26 ^= var_5;
                    var_27 = (max(var_27, 49915));
                    var_28 ^= (~var_3);
                }
            }
        }
        arr_57 [14] = arr_20 [7] [i_13] [8];

        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            var_29 = (max(var_29, (((var_3 % (var_4 && 2944015751))))));
            arr_62 [15] [i_16] [15] = (arr_31 [i_13] [i_13] [i_13] [i_13 - 1] [i_13]);
        }
    }
    var_30 = (max(var_30, (((var_2 & (((-74 >= 0) & var_10)))))));
    #pragma endscop
}
