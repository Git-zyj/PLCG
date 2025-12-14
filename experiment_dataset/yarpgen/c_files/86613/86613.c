/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(-1223079681991598089, (((min(var_12, var_9)) / var_9))));
    var_18 = ((~(((((var_9 ? var_15 : var_1))) ? var_8 : ((var_4 ? var_13 : var_9))))));
    var_19 = (min(var_19, var_9));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2 - 1] = (((arr_7 [i_2 + 1] [i_2 - 1] [i_0 - 1]) ? (arr_0 [i_1] [i_2]) : 4294967295));
                    var_20 = var_2;
                }
            }
        }
        var_21 = -var_14;
        var_22 = var_3;
        var_23 ^= (arr_7 [i_0 + 1] [i_0] [i_0]);
        var_24 ^= ((var_3 ? ((-(arr_10 [i_0] [i_0] [i_0 - 1] [i_0]))) : (-2147483647 - 1)));
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3 + 1] = (((((((var_6 ? 0 : var_0))) - ((~(arr_13 [i_3] [i_3]))))) >= (((~(-1223079681991598064 != 0))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_25 = (arr_12 [i_3]);
                    var_26 = (min((((((arr_16 [i_3 - 1]) ? var_3 : var_2)))), ((((arr_12 [i_3]) ? (arr_17 [i_3] [i_4] [i_4]) : 0)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_27 ^= ((((max(var_0, 255))) ? ((var_3 ? (arr_15 [i_3 - 2] [i_4] [i_6]) : (arr_15 [i_6] [i_6] [i_6]))) : (max((arr_15 [i_6] [i_7] [i_6]), (arr_15 [i_3] [i_3] [i_6])))));
                                var_28 &= (arr_27 [i_5 - 1] [i_5] [i_6 + 2] [i_7 - 1] [i_7 + 1]);
                            }
                        }
                    }
                    var_29 = (arr_19 [i_4] [i_4] [i_4] [i_5]);
                }
            }
        }
        var_30 = (min(var_30, ((!((max((var_8 == var_1), ((var_5 ? (arr_18 [i_3] [i_3] [i_3]) : 4294967295)))))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_31 = (min(((((min((arr_34 [i_9] [i_10]), var_1)) < var_5))), (arr_13 [i_3 + 1] [i_8 - 1])));
                                arr_41 [i_11] [i_10] [i_9] [i_8] [i_3 - 2] = ((~(((var_0 + 2147483647) << (var_8 - 925676766)))));
                                arr_42 [i_3] [i_3] = (!var_16);
                                arr_43 [i_9] = ((!((0 < ((((arr_23 [i_3 - 3] [i_8] [i_9] [i_11]) > var_0)))))));
                            }
                        }
                    }
                    arr_44 [i_3 - 2] [i_8] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
