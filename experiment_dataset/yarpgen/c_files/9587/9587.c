/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_0;
    var_17 = (((((((max(var_6, var_15))) ? (var_0 * var_6) : var_10))) >= ((var_1 ? var_3 : var_14))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!(((var_1 * (min(var_13, (arr_0 [i_0] [i_0]))))))));
        var_19 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) | (~var_1)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = (arr_3 [i_1] [i_1]);
            var_21 ^= ((((((max(17359109592688145569, var_14))) ? ((var_2 ? var_2 : (arr_4 [i_1] [i_1]))) : (arr_5 [i_1] [i_1] [1])))) | 17359109592688145562);
            var_22 = (((((((var_5 ? 17359109592688145551 : var_5))) ? var_12 : var_7))) ? ((+(((arr_4 [0] [3]) ? 47909 : var_0)))) : (((arr_5 [i_2] [i_2] [i_1]) ? (arr_5 [i_2] [i_2] [i_2]) : ((min(var_2, var_14))))));
            var_23 ^= ((!(((1087634481021406047 ? 80 : (arr_4 [i_1] [i_2]))))));
            var_24 ^= 237298651;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_25 = (max(var_25, ((max(((var_14 / (-1 - 2108242396))), (((arr_4 [i_1] [i_3]) ? var_2 : (((arr_6 [i_3] [i_3] [i_3]) ? var_10 : 41947)))))))));
            var_26 = var_10;
            arr_9 [i_1] [i_3] = (min(((min((arr_7 [i_1] [1]), (arr_7 [i_1] [i_3])))), (((arr_7 [i_1] [1]) ? var_15 : 2147483647))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_27 = ((~(arr_17 [i_6] [i_5] [i_4] [3])));
                        var_28 = ((var_0 ? var_1 : (arr_7 [11] [i_4])));
                        arr_20 [i_1] [i_1] = (((arr_3 [i_1] [i_4]) ? var_10 : var_5));
                    }
                }
            }
            arr_21 [18] [i_1] [i_1] |= (((arr_4 [i_1] [i_4]) != var_12));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_29 = 0;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_30 = (max(((var_5 ? -23588 : 1)), (((((arr_5 [i_1] [i_7] [i_8]) ? (arr_19 [19] [i_8] [i_7] [i_7] [i_1] [i_1]) : var_15)) * var_10))));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_31 = (max(var_31, (((var_3 / (arr_4 [i_7] [9]))))));
                            arr_33 [i_8] [i_9] [i_8] [i_7] [i_1] = min((arr_11 [i_1] [i_8]), (((arr_28 [i_1] [i_1] [i_1] [i_1]) - -var_9)));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_37 [i_1] [i_7] [8] [i_9] [i_11] = ((!((((arr_4 [i_11] [i_11]) ? (arr_4 [i_1] [i_1]) : var_11)))));
                            arr_38 [i_1] = ((-((((arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | var_12)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 &= var_14;
                            arr_41 [i_1] [i_7] [i_8] [i_9] [i_12] = (arr_25 [i_12]);
                            var_33 |= ((1087634481021406046 ? (arr_23 [i_1] [i_7] [i_9]) : (arr_23 [i_7] [i_8] [i_9])));
                            var_34 *= (arr_2 [19] [19]);
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_44 [i_1] [i_1] [i_1] [i_13] = (min((((((arr_36 [4] [i_7] [i_8] [i_7] [i_13]) ? var_2 : var_2)))), var_13));
                            arr_45 [i_1] [i_7] [i_8] [i_13] [i_1] = ((~(arr_28 [i_13] [i_8] [i_7] [i_1])));
                        }
                        var_35 = (((((((((arr_40 [i_9] [11] [12] [12] [i_9]) >> (((-2147483647 - -2147483618) + 59))))) ? (arr_11 [i_1] [i_7]) : var_14))) ? (arr_13 [i_1] [i_1] [i_1]) : (17359109592688145549 == var_3)));
                        var_36 = (var_0 ? ((18228646321930833932 ? ((var_8 ? 2198260465 : (arr_22 [i_1] [1]))) : (((var_2 ? 7340032 : 162))))) : (min(var_13, (arr_14 [i_1] [i_9]))));

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_37 *= (max(((((-1 ? 80 : var_6)))), (arr_16 [i_1] [i_1] [16])));
                            arr_49 [i_9] [i_9] [i_8] [i_7] [i_9] &= var_13;
                            arr_50 [i_1] [i_1] [i_8] [i_1] [i_14] = ((arr_40 [i_1] [i_7] [i_8] [11] [i_14]) ? ((min((arr_40 [i_14] [i_7] [i_9] [i_7] [i_7]), (arr_40 [i_1] [i_1] [i_1] [i_1] [3])))) : ((((arr_40 [i_14] [14] [i_8] [i_1] [i_1]) || (arr_40 [18] [i_7] [i_8] [i_7] [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_55 [i_1] [i_7] [i_8] [i_9] [i_15] [i_9] = var_15;
                            var_38 = ((arr_43 [i_8] [i_15] [i_15] [i_1]) != (arr_43 [i_1] [i_15] [i_1] [7]));
                            arr_56 [i_15] [i_9] [i_15] [i_15] [i_7] [i_1] = arr_14 [i_7] [i_7];
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_39 = var_14;
                            var_40 = (max(var_40, 0));
                        }
                    }
                }
            }
        }
        arr_59 [19] = var_9;
    }
    #pragma endscop
}
