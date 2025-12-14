/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(var_14, ((min(52164, ((((arr_1 [i_0 - 1]) ? var_1 : (arr_1 [i_0 + 1])))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [i_1 + 2] = ((410707893708720288 ? (arr_0 [i_1 - 1]) : var_11));
            var_15 = (arr_5 [i_0] [i_1] [i_0]);
            arr_8 [i_0] [i_1] = var_0;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_16 = ((-(arr_9 [i_2 - 1] [10] [i_0])));
            var_17 = (max(var_17, ((((-11 + 9223372036854775807) >> (-25 + 33))))));
            var_18 = (((arr_0 [i_2]) ? var_8 : -var_0));
            arr_12 [21] [i_0] = ((((arr_11 [i_0 + 1] [15]) ? (arr_11 [19] [i_2]) : (arr_6 [i_0]))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_19 = (max(var_19, (arr_6 [i_0])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 ^= (arr_2 [16]);
                        arr_23 [i_0 - 2] [i_3] [i_0] [i_5] = (((arr_11 [i_0] [i_3]) ? ((((-11 && ((max((arr_19 [i_0] [i_4]), (arr_21 [16] [i_5])))))))) : (((arr_21 [i_0 - 3] [i_3]) ^ (arr_0 [i_0 - 2])))));
                        var_21 = (arr_6 [i_0]);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_22 = (min(var_22, (max(((var_5 ? var_3 : (arr_14 [i_0 - 1] [i_6]))), (((((~(arr_14 [i_6] [i_0]))) > (((((arr_4 [i_0] [0]) != var_8)))))))))));
            var_23 = (max(var_23, (arr_13 [i_6] [i_6] [i_0])));
            arr_27 [i_0] [i_0] = (arr_11 [i_0 + 1] [i_6]);
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_24 ^= (arr_26 [12]);
        var_25 |= (((14 + (arr_24 [20] [20]))));
        arr_31 [i_7] = ((((arr_25 [9] [i_7] [6]) <= (arr_25 [i_7] [i_7] [6]))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        arr_34 [i_8] = var_8;
        var_26 = (((arr_5 [i_8 + 1] [18] [i_8 - 1]) / (arr_5 [i_8 - 1] [i_8] [i_8 + 1])));
        var_27 = var_2;
    }
    var_28 = (min(var_13, (var_4 && var_3)));
    var_29 = (((var_7 ? var_12 : 8)));
    #pragma endscop
}
