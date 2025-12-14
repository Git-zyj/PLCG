/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = 0;
                    arr_7 [i_0 + 1] [i_2] [i_2] = (min((max(var_17, (arr_1 [i_0 - 1]))), (arr_6 [i_0 - 2] [i_0] [i_0] [i_0])));
                    var_21 = (min(var_21, (max((arr_3 [i_0 - 1]), (min((arr_2 [i_0]), ((933296245 - (arr_0 [i_0 - 3] [i_0])))))))));
                    var_22 ^= (arr_6 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        }

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_23 = (max(((!((min((arr_1 [i_0]), -32))))), (((min(16, (arr_4 [i_0]))) >= (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 1])))));
            var_24 = (~((10 & (arr_2 [i_0 - 1]))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_25 = (min((min((arr_0 [i_0 - 2] [i_0 + 1]), (arr_11 [i_0] [i_0 - 1]))), ((min((arr_10 [i_0 - 2] [i_0 - 1]), (arr_10 [i_0 - 2] [i_0 - 1]))))));
            var_26 = 31;
            arr_13 [i_0] = (((arr_3 [i_0 + 1]) ? ((((arr_3 [i_0 - 1]) >= (arr_3 [i_0 - 1])))) : ((128 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])))));
            var_27 = (arr_1 [i_0 + 1]);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_28 = (min((((!(arr_3 [i_5])))), (((arr_10 [i_0 - 2] [i_0 + 1]) ? (arr_10 [i_0 + 1] [i_0 - 3]) : (arr_10 [i_0 - 3] [i_0 + 1])))));
            var_29 = (min((arr_5 [i_0] [i_5] [i_0] [i_0]), ((1 ? (arr_4 [i_0]) : var_11))));
        }
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_19 [i_6] = ((((min((arr_17 [i_6 + 1] [i_6 - 1]), 1744))) ? (min((arr_18 [i_6 + 1]), (arr_18 [i_6 - 1]))) : (arr_18 [i_6 - 1])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    var_30 = (min(51292, (max(((max(var_2, 16))), (arr_18 [i_7])))));
                    var_31 ^= (((arr_17 [i_6 - 1] [i_6 - 1]) <= (arr_17 [i_6] [i_6 + 1])));
                }
            }
        }
        arr_26 [i_6] = (((var_15 != (min((arr_17 [i_6] [i_6]), (arr_20 [i_6] [4] [i_6]))))));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_32 = (max(var_32, ((min(((((arr_24 [i_9] [i_9] [i_9] [i_9]) <= (arr_24 [i_9] [i_9] [i_9] [i_9])))), (((arr_21 [i_9] [i_9]) ? (arr_18 [i_9]) : (((30 ? var_16 : var_6))))))))));
        arr_31 [i_9] [i_9] = (arr_30 [i_9] [i_9]);
        var_33 = max((arr_20 [i_9] [i_9] [i_9]), (min((((1416543843 ? (arr_23 [i_9]) : 238))), -9166650249016114906)));
    }
    var_34 = var_12;
    #pragma endscop
}
