/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_1;
    var_13 = var_0;
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (max(var_15, -36));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(-1776267185, (min((max(-44, -7128746453233244261)), (arr_4 [i_1 + 2] [i_1] [i_1 + 3]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (~var_4)));
                                var_18 = (max(var_18, ((((arr_10 [i_3] [i_3] [i_2] [i_1 - 1] [i_4]) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1]) : ((((!((max(var_3, (arr_1 [i_4])))))))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_2] = (arr_13 [i_0] [i_1] [i_2] [7] [i_4] [i_4]);
                                var_19 = (arr_7 [i_3] [i_1 - 1] [21] [i_3]);
                                var_20 = (max(var_3, var_3));
                            }
                        }
                    }
                    var_21 = (((~(arr_8 [i_1 + 3] [i_1]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, (arr_5 [i_5] [i_5] [i_5])));
                        arr_24 [i_0] [i_5] [i_6] [i_0] [i_7] = (max(((var_6 * ((((arr_7 [i_0] [i_0] [i_0] [i_0]) > -7128746453233244254))))), (arr_22 [i_0] [i_0])));
                        var_23 -= ((((((214 ? 21790 : -14)) & (arr_1 [i_5]))) % (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5])));
                        var_24 = ((min((arr_9 [i_0] [i_0]), (arr_22 [i_0] [9]))));
                    }
                }
            }
        }
        var_25 += (max(((+(max((arr_3 [i_0] [10]), var_0)))), (((((((~(arr_8 [i_0] [1]))) + 2147483647)) >> (((max((arr_19 [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0]))) - 411605322)))))));
        var_26 = (max(var_26, (~var_0)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        arr_27 [i_8] = var_4;
        var_27 = (7128746453233244253 != 21);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 15;i_11 += 1)
                {
                    {
                        var_28 = var_5;
                        var_29 = (((arr_0 [i_9]) > (arr_4 [i_8] [i_8 + 1] [i_11 - 4])));
                        var_30 = 1;
                        var_31 -= ((((arr_4 [i_9] [i_10 + 2] [i_11 - 3]) ? var_11 : (arr_5 [i_8] [6] [i_8]))));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_32 = (min((max(var_11, ((var_8 ? (arr_9 [10] [i_12]) : -7128746453233244261)))), ((min((arr_35 [i_12] [i_12]), (arr_36 [4]))))));
        var_33 = (~-7128746453233244257);
    }
    var_34 = var_1;
    #pragma endscop
}
