/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min((arr_5 [i_0] [i_0]), (((1 ? var_12 : (((arr_2 [i_0] [i_1]) ? 1 : 4294967288)))))));
                var_14 = 2672;

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_15 = (((max(262143, (arr_4 [i_0] [i_0] [i_2])))) <= 1);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = ((+(min(((var_3 ? (arr_7 [i_0] [12] [i_2 + 1] [i_3]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [2]))), ((min((arr_6 [i_0] [19] [i_0] [i_0]), var_1)))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_1] = ((((((((var_1 ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_3]) : var_9))) ? (!1) : (((var_0 && (arr_5 [i_0] [i_2 + 1]))))))) ? (arr_5 [14] [i_4]) : ((((arr_9 [i_0]) ? (((max(1, 1)))) : (((arr_1 [i_2 + 1] [i_2 + 1]) ? var_10 : var_4)))))));
                            var_17 ^= 1;
                            var_18 = var_8;
                            var_19 = ((-((((((arr_2 [i_0] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))) ? (arr_6 [i_0] [9] [7] [i_1]) : 127))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_20 = ((var_12 ? ((var_7 / (arr_13 [i_2] [i_1] [0]))) : 31744));
                            var_21 = 1;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_22 = (max(var_22, ((((arr_7 [14] [11] [i_2 + 1] [i_2 + 1]) || (arr_2 [i_0] [14]))))));
                            var_23 = (min(((((arr_6 [14] [i_1] [i_3] [i_2]) ? (arr_9 [i_2]) : ((-(arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])))))), (min((min(var_0, (arr_8 [i_0] [i_1] [i_2 - 1] [1]))), (arr_11 [i_0] [13] [i_0] [i_3] [i_6])))));
                            var_24 |= (((((-(((arr_3 [i_0]) ? var_1 : (arr_10 [i_1] [i_1] [i_2 + 1])))))) ? (((min((arr_16 [i_6] [i_0] [i_2 + 1] [1] [i_6] [i_2] [i_2]), (arr_12 [i_0] [i_1] [i_6]))) + (arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_6]))) : (((9497480559340824121 ? ((var_12 | (arr_15 [i_6]))) : (!var_1))))));
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_1] = ((((((1 >> (var_6 - 21213)))) == (((arr_6 [16] [1] [i_2 + 1] [i_3]) ? 0 : (arr_8 [18] [i_2] [i_3] [i_6]))))));
                            var_25 = ((((min(1, (arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])))) ? (((((-(arr_7 [i_0] [i_1] [i_1] [i_3]))) % (((1 <= (arr_18 [i_0] [i_1] [i_2] [i_2] [i_1]))))))) : (max(var_9, 0))));
                        }

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_24 [i_7 - 1] [i_3] [i_3] [i_1] [1] [i_1] [6] = (arr_19 [i_7 + 1] [i_1] [i_1] [i_3] [i_0]);
                            var_26 = (((arr_6 [i_0] [i_1] [i_1] [i_3]) ? (((0 < (((arr_20 [i_1]) ? 27504 : var_8))))) : var_12));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = (((~1) + 1));
                        var_28 = (arr_11 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]);
                        arr_27 [i_0] [i_1] [i_1] = ((var_5 ? (arr_19 [i_2 + 1] [21] [i_1] [i_8] [i_8]) : var_9));

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_29 = ((1 ? (arr_16 [i_0] [i_0] [i_8] [i_9] [i_1] [i_1] [i_2 - 1]) : (((arr_9 [i_9]) ? var_4 : (arr_29 [i_0] [i_0] [i_1] [i_2 - 1] [i_1] [i_8] [i_9])))));
                            var_30 = (arr_6 [i_9] [i_2 - 1] [i_2 - 1] [i_1]);
                        }
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_31 = (arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]);
                            var_32 -= (((arr_0 [i_10 + 1] [i_2 + 1]) ? (((var_3 ? var_10 : var_5))) : (arr_5 [i_2 - 1] [i_10])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_33 += ((~(min((arr_31 [i_11] [i_2 - 1] [1] [i_11] [0] [i_0] [1]), ((~(arr_18 [i_0] [1] [6] [i_11] [i_11])))))));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_34 = (arr_23 [i_2] [i_2 + 1] [i_2] [15] [i_2 - 1]);
                            var_35 = 262163;
                        }
                        var_36 = (max(var_36, ((min((((var_2 ? (arr_3 [i_2 + 1]) : (min((arr_17 [i_0] [i_11] [i_2] [18] [i_11]), (arr_8 [16] [i_1] [i_2] [i_11])))))), var_11)))));
                        var_37 &= var_10;
                    }
                }
            }
        }
    }
    var_38 = (min((min((0 != var_12), ((3 ? var_4 : var_9)))), var_12));
    var_39 = (((-var_5 + 9223372036854775807) << (((((9223372036854775807 & var_3) ? var_5 : (var_11 > var_6))) - 5188648710468740805))));
    #pragma endscop
}
