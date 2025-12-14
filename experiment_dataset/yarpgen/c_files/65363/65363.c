/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_10 = (((!127) ? (((var_8 ? (arr_0 [i_0 + 2] [6]) : var_3))) : var_5));
        arr_3 [i_0 + 1] [i_0 + 2] = (((arr_0 [i_0 - 1] [i_0 + 2]) == var_1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = (max(var_11, (((((((arr_1 [i_0] [i_1]) ? (arr_5 [i_1]) : var_1))) | 1)))));
            arr_6 [i_1] [i_0] = ((!(((var_1 ? 0 : 0)))));
            var_12 = var_1;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 7;i_3 += 1)
            {
                arr_14 [3] [i_3] [i_3] [i_3 - 3] = var_2;
                var_13 |= (!858008782);
            }
            var_14 = (!var_0);
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_15 = (max(var_15, ((((!(arr_20 [2]))) ? (arr_16 [i_4]) : (((((var_9 ? var_5 : (arr_15 [8])))) ? (((arr_20 [0]) >> (var_0 + 2411720131157810255))) : 2096128))))));
            var_16 = ((((max(var_1, (~var_8)))) ? ((~((var_4 ? var_0 : var_3)))) : (min(((((arr_20 [i_4]) >= var_1))), ((var_2 ? (arr_16 [i_4 - 1]) : var_4))))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_17 = ((((((arr_25 [i_4] [i_5 + 2] [5] [i_7]) * (arr_25 [i_4] [i_5 - 1] [i_6 + 1] [i_7])))) ? (arr_25 [i_4] [i_5 + 3] [i_6 + 1] [i_7]) : (((min(var_4, (arr_25 [i_4] [i_6 - 1] [i_5 + 2] [i_4])))))));
                        var_18 = var_7;
                    }
                }
            }
        }
        arr_28 [i_4] [i_4] = var_2;
        var_19 -= (!0);
    }
    var_20 = var_1;
    var_21 = var_8;
    var_22 = var_2;
    #pragma endscop
}
