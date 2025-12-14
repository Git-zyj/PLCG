/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? var_2 : (var_8 & var_5)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_13 &= (min(-373803677578927863, 71));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((max((arr_1 [i_0 + 4] [i_3 + 2]), (arr_1 [i_0 + 4] [i_3 + 2])))))));
                        arr_13 [i_0] [i_2] [i_0] [8] = (((~89) != (((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : var_11))));
                    }
                }
            }
        }
    }
    var_15 = var_2;

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_16 = (min(var_16, (((arr_14 [2]) ? (((((!var_10) > (arr_2 [i_4]))))) : (arr_2 [i_4])))));
        var_17 = (min(var_17, (-95 / 4294967295)));
        arr_17 [i_4] = (((arr_11 [17] [17]) + (8 == var_10)));
        arr_18 [i_4] = (((((((((var_7 ? (arr_4 [12] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [7])))) == (max(485067328, 9151326119008648117)))))) & (arr_15 [i_4])));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_18 = (arr_0 [i_5] [14]);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_24 [i_5] [10] [i_6] = (arr_16 [7]);
            arr_25 [2] = ((min((((arr_5 [i_5 - 2]) ? (arr_6 [i_5] [i_6] [1] [i_6]) : (arr_7 [i_5]))), (arr_20 [i_5]))));
            var_19 &= (arr_23 [i_5 - 1] [3] [i_6]);
        }
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = (((arr_28 [i_7]) > (arr_8 [1] [1] [i_7] [1])));
        var_20 &= ((((min((arr_1 [i_7 + 1] [i_7 - 1]), (arr_2 [i_7 + 1])))) ? (((arr_2 [i_7 - 1]) & (arr_2 [i_7 - 1]))) : var_0));
        var_21 = (arr_9 [i_7 - 1] [i_7 + 1] [6] [i_7 - 1]);
    }
    var_22 = (min(var_22, var_2));
    #pragma endscop
}
