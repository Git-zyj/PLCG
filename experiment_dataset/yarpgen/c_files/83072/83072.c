/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_8, ((min(-39, var_7)))))) ? var_1 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((max((arr_2 [i_0]), 1))) || var_4)));
                var_13 = (max((max((max(var_4, var_6)), -var_1)), (arr_1 [i_0])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (max(var_14, var_7));
                        var_15 = var_2;
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = (!(arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_3]));
                        var_16 = (arr_9 [i_2 + 2] [i_0] [i_3] [i_3] [i_1]);
                    }
                    var_17 = (((arr_3 [i_0] [i_1] [i_0]) ? -58 : (arr_3 [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_4] [i_4] [i_4] [i_0] = ((!(arr_12 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = -var_2;
                                var_19 = 54878;
                            }
                        }
                    }
                    var_20 = (arr_17 [i_0] [i_0] [i_1] [i_0] [i_0]);

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_21 = ((var_6 / var_10) < (arr_9 [i_0] [i_0] [i_4] [i_4] [i_7]));
                        arr_21 [i_0] = (63 - ((var_7 ? var_2 : 7)));
                        arr_22 [i_0] [i_1] [i_0] [i_7] = ((2049530818 ? 0 : 1));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_22 = (((arr_0 [i_0]) ? ((-(arr_7 [i_0] [1]))) : (((var_0 ? var_2 : var_4)))));
                            var_23 |= ((var_6 % (((var_3 ^ (arr_17 [i_0] [i_0] [i_0] [i_0] [4]))))));
                            var_24 = 1;
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_25 = (max(var_25, ((((arr_2 [i_10]) ? var_7 : (arr_27 [i_8 - 2] [i_8] [i_8 - 3] [i_8 - 2] [i_8] [i_8] [i_8]))))));
                            var_26 ^= (((arr_8 [i_0] [i_8 - 2] [i_0]) == (arr_8 [i_0] [i_8 + 1] [i_8 + 1])));
                            var_27 |= (((arr_1 [i_10]) ? (arr_1 [i_10]) : 1));
                            var_28 ^= (((arr_23 [i_10]) || (((var_1 ? var_0 : var_7)))));
                        }
                        var_29 = ((var_9 ^ (arr_16 [i_8] [i_8] [i_0] [i_8] [i_8 - 3] [i_8])));
                        arr_31 [i_8] [i_0] [i_4] [i_1] [i_0] [i_0] = ((((((arr_1 [i_0]) * -27419))) ? var_10 : (arr_19 [i_0] [i_8 - 3] [i_8 - 1] [i_0])));
                    }
                }
                var_30 ^= (!((min(((((arr_18 [i_0] [i_1] [i_1] [8] [8]) != 2097151))), ((var_9 ? (arr_2 [8]) : (arr_0 [14])))))));
            }
        }
    }
    var_31 = ((-117 / ((var_9 ? var_4 : -1))));
    #pragma endscop
}
