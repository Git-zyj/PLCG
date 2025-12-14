/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_0 ? ((min((-127 - 1), var_2))) : var_4);
    var_20 = (((((min((-127 - 1), -1322915079)) + 2147483647)) >> ((((~((1 ? (-9223372036854775807 - 1) : 1146994893)))) - 9223372036854775798))));
    var_21 = (((((~((var_6 ? 1367686305 : var_17))))) ? var_8 : (((((~(-127 - 1))) > ((1 ? 24 : var_8)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = ((3441578526 % (((arr_0 [i_0]) ? var_1 : ((~(arr_1 [i_0])))))));
        var_23 *= ((-(arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_24 |= 170;
        var_25 = (min(var_25, (-9223372036854775807 - 1)));
        var_26 = (arr_4 [i_1] [15]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = (arr_2 [i_2]);
        var_27 = ((((1 ? 65530 : (arr_4 [i_2] [i_2]))) >= -var_13));
        var_28 |= -1757816305;
        var_29 *= ((((((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_3 [i_2])))) ? (max((arr_3 [i_2]), (arr_3 [i_2]))) : (min((arr_3 [i_2]), 1))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_30 ^= (min((arr_1 [i_3]), (((var_9 * var_10) < 9223372036854775807))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_31 -= var_8;
                        var_32 -= 1;

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 6;i_7 += 1)
                        {
                            var_33 *= (((((arr_13 [i_3] [i_4]) | var_4)) - (~var_11)));
                            arr_22 [i_3] [i_3] [i_6] [i_3] = 1;
                            var_34 ^= var_7;
                            var_35 |= (((arr_19 [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 - 2] [9] [i_7 - 2]) ? var_1 : 1));
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            var_36 = var_4;
                            arr_25 [i_6] [i_4] [7] [i_6] [i_8] = (arr_10 [i_5]);
                            var_37 = var_2;
                            arr_26 [i_6] [i_4] [i_5] [i_4] [i_6] = (((((arr_6 [1]) != (arr_18 [i_6] [i_6]))) ? ((var_13 / (-127 - 1))) : -30000));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_38 -= (~0);
                            var_39 -= (arr_0 [i_4]);
                            var_40 = 18;
                        }

                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            arr_34 [0] [i_4] [i_5] [i_6] [i_6] = ((((-(((arr_13 [i_3] [i_3]) ? (arr_18 [i_6] [5]) : 0)))) > (((min((arr_9 [0]), var_8))))));
                            var_41 = (arr_29 [i_10 - 1] [i_10 + 2] [i_10 - 2] [i_10 + 2] [i_10 - 2] [i_10 - 1] [i_10 - 1]);
                        }
                    }
                }
            }
        }
        var_42 = (((((-(arr_32 [i_3] [i_3] [i_3])))) >= (min(-var_17, ((0 ? (arr_3 [5]) : -7114))))));
        arr_35 [i_3] [4] = (min((var_14 - var_4), (((arr_31 [i_3] [i_3] [1] [i_3] [i_3] [i_3]) ? (arr_31 [5] [i_3] [i_3] [5] [5] [i_3]) : 0))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_38 [i_11] [i_11] = (-127 - 1);
        arr_39 [i_11] = 1;
    }
    #pragma endscop
}
