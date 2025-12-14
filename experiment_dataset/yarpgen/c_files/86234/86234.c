/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= min(var_10, var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((arr_0 [i_0]) < (!var_4));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = 1;
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] |= 1;
                            arr_15 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] = ((!(arr_13 [1] [i_1] [i_2 - 1] [i_3] [i_4])));
                            arr_16 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0] = 1;
                            arr_17 [i_0] |= ((((min((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_1 [i_0])))) - 1));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0] = arr_5 [1] [i_2] [i_1] [1];
                            arr_21 [i_0] [i_1] [i_2 - 1] [i_3] [i_5] = (max(var_10, -var_0));
                            var_15 -= arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                        var_16 = (((arr_2 [i_0] [i_0]) >> var_6));
                        var_17 ^= ((var_6 | ((var_3 ? var_10 : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        arr_22 [i_0] [i_0] = ((1 ? (min(((var_9 ? (arr_12 [i_1]) : 1)), var_2)) : (!var_8)));
                    }
                }
            }
        }
        var_18 ^= (max((--1), ((-(((1 > (arr_19 [1] [1] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_26 [i_6] [i_6] = 1;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]) * (arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                        var_20 = (max(var_20, (arr_4 [1] [i_7] [1] [1])));
                        arr_34 [i_7] [i_9] [1] [i_9] = (((arr_10 [1] [1] [i_8 - 1] [i_6]) ? (arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1] [0]) : var_0));
                    }
                }
            }
        }
        var_21 = ((((1 ? 1 : 1)) >> ((var_0 ^ (arr_32 [i_6] [i_6] [1] [1])))));
        arr_35 [i_6] = 1;
        var_22 *= (((arr_2 [i_6] [i_6]) ? 1 : (arr_23 [i_6] [i_6])));
    }
    var_23 = (((((max(var_8, var_7)) >> ((1 ? var_0 : var_8))))));
    #pragma endscop
}
