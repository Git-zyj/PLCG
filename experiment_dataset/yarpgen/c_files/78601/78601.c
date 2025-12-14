/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_17;
    var_21 ^= var_5;
    var_22 = (max(var_22, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_23 += ((((min((arr_4 [i_1 - 1] [i_1 - 2]), (arr_4 [i_1 - 2] [i_1 - 2])))) ? var_4 : (((arr_4 [i_1 - 1] [i_1 - 1]) / (arr_4 [i_1 - 1] [i_1 - 2])))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_24 = ((((min(1878369974, 2416597333))) ? ((2416597323 ? (arr_9 [i_1 + 1] [i_2] [i_1 + 1]) : (((var_2 ? var_7 : (arr_7 [1] [i_1 - 1] [3])))))) : (min(((1896144362664145474 << (var_0 - 232))), var_9))));
                    var_25 = ((~((max(var_15, var_9)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [6] [i_2] [i_2] [9] = ((var_1 ? (arr_10 [0] [0] [i_1 - 1] [i_1 - 1] [0] [i_1 - 1]) : (arr_2 [i_0] [0])));
                        var_26 = (arr_3 [i_1]);
                        arr_14 [i_2] = var_11;
                        var_27 += var_15;
                    }
                    var_28 = (max(3026512289, ((((min((arr_4 [2] [i_2 + 1]), var_1)) < (arr_7 [i_0] [8] [i_0]))))));
                    var_29 = (max(var_29, ((min((arr_7 [1] [i_0] [6]), (((arr_11 [5] [i_0] [i_0] [i_1 + 1] [5] [i_0]) ? var_3 : (arr_2 [i_0] [5]))))))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_30 *= (min(((((((2416597317 ? (arr_15 [7] [0] [i_1 - 1] [4]) : var_8))) ? ((min(var_1, var_15))) : ((min((arr_10 [4] [0] [9] [i_0] [6] [2]), (arr_8 [i_0]))))))), (((((arr_6 [i_4]) + 9223372036854775807)) << (((var_10 + 20982) - 12))))));
                    var_31 = (arr_2 [1] [1]);
                    var_32 = (arr_16 [9] [2]);
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_33 = arr_1 [i_0];
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_34 = (((arr_11 [i_1 - 1] [9] [i_5 - 2] [2] [3] [i_1 + 1]) ? (arr_9 [7] [i_5] [1]) : (arr_25 [i_0] [i_0] [i_0])));
                                var_35 = (((arr_1 [i_0]) ? (((arr_8 [i_5]) ? 2416597321 : var_2)) : var_1));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_28 [i_5] [1] [8] [6] [i_5] [6] = var_0;

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_36 = (((arr_1 [2]) ? (var_1 | var_10) : 21565));
                            var_37 = (((arr_0 [i_5 + 1] [i_8 + 1]) ? var_11 : (arr_15 [i_5 - 2] [i_8 + 1] [8] [i_9 + 1])));
                            var_38 = (min(var_38, (arr_8 [i_1])));
                            var_39 |= var_18;
                        }
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            var_40 = (min(var_40, (((var_9 ? ((((arr_29 [9] [1] [1] [3] [1]) ? (arr_12 [i_0] [i_0] [2] [4] [6]) : (arr_2 [8] [8])))) : (((arr_25 [i_0] [i_1 + 1] [i_8 + 1]) ? var_0 : (arr_29 [i_0] [1] [2] [9] [8]))))))));
                            var_41 |= ((((((arr_26 [i_0] [i_1] [4] [8]) ? (arr_26 [i_0] [i_0] [i_10 - 3] [i_10 - 3]) : (arr_29 [1] [i_1 + 1] [i_5 - 3] [1] [i_10 - 3])))) ? (arr_9 [4] [i_1] [i_1]) : (!-252869832)));
                            var_42 *= (((arr_0 [i_10 + 1] [i_10 + 1]) & var_10));
                        }
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_36 [i_5] [i_5] [3] [3] [3] [i_11] = var_1;
                        var_43 += (arr_26 [i_5 - 1] [i_11] [i_5 - 1] [i_11]);
                    }
                    var_44 = (max(var_44, ((((((arr_16 [1] [1]) ? 2416597306 : (arr_10 [3] [3] [7] [3] [i_0] [i_0]))) / (-48 != var_17))))));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_45 *= (~var_14);
                            arr_42 [i_0] = (((((+(((arr_22 [4] [1] [2] [i_1 - 1] [i_1] [i_13 - 4]) >> (21582 - 21556)))))) ? var_4 : (((arr_38 [i_1 - 2] [5] [7] [i_13 - 1]) ? (arr_29 [i_0] [i_0] [i_0] [i_13 - 2] [i_1 - 2]) : (arr_38 [i_1 - 1] [2] [5] [i_13 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
