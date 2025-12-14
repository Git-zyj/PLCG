/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((min((var_2 ^ var_3), var_10))), var_14));
    var_19 = (((var_4 < var_17) ^ var_2));
    var_20 -= (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_21 = (max(((((arr_2 [i_1 - 1]) && var_17))), (arr_2 [i_1 + 2])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_22 = ((var_8 ? 0 : (arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 2])));
                        var_23 = (((arr_9 [i_2] [i_2] [7] [i_1 + 3] [i_3]) ? (arr_1 [i_1] [i_2]) : (-32767 - 1)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_24 = ((!((((1223177197 ? var_14 : 4116765727))))));
                        var_25 = (~(((arr_11 [i_1 + 1] [2] [i_1] [2]) & (arr_4 [i_1 - 2]))));
                    }
                    arr_15 [i_2] [0] [0] = ((arr_8 [i_2]) / 32);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_26 = (arr_19 [i_5] [i_5] [i_5] [i_5]);
                    var_27 = (min(((((arr_5 [i_1] [i_1 + 3]) ? 0 : var_3))), ((((16660358156210911395 ? 5892068386945283895 : var_6)) & (((arr_6 [i_5] [i_0] [i_0]) & 3719))))));
                    arr_20 [i_5] = ((~(arr_18 [i_1 + 3] [i_1 + 3] [i_5] [i_5])));
                    var_28 -= (min(62479, (~176)));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_29 = 38;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_8] = (arr_19 [i_8] [i_1] [i_1 - 2] [i_6]);
                                var_30 = (min(var_30, ((!(arr_17 [i_1 + 2])))));
                            }
                        }
                    }
                    var_31 *= ((+(((arr_25 [i_6] [i_1] [i_0] [i_1] [i_0]) << (var_7 - 5984106326785929888)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                var_32 = 92664272;
                                var_33 -= (var_15 | -16070);
                                var_34 = (178201557 - 1);
                                arr_37 [i_11] &= 4116765739;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_35 ^= 255;
                                var_36 = (max(var_36, var_12));
                                var_37 = ((~(arr_30 [i_1 - 2] [i_1 - 2])));
                            }
                        }
                    }
                    arr_45 [i_0] [i_1] [3] = var_10;
                    arr_46 [i_1] = (var_1 / 69);
                }
                arr_47 [i_0] [7] = ((+((171656172 ? (max((arr_33 [i_0] [6] [9]), (arr_43 [i_0] [i_0] [i_0] [6]))) : (arr_33 [i_0] [i_0] [7])))));
                var_38 = (min((arr_9 [6] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 3])));
                var_39 -= (((max((((38970 == (arr_16 [i_0] [i_0] [i_0] [i_1])))), 253238416)) % (arr_17 [i_0])));
            }
        }
    }
    #pragma endscop
}
