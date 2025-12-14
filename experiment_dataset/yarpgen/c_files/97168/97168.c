/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(0, -2435060656990026024))) ? ((min(((0 < (arr_1 [i_0 - 2] [i_0]))), (!var_0)))) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [1] = ((((arr_4 [i_1]) && (11286 < var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = (min(var_10, ((min((max((arr_1 [i_3] [i_3]), 21452)), (var_2 > 14))))));
                                var_20 = (max(var_20, ((((!9223372036854775798) ? (((((85 << (3111871798374457551 - 3111871798374457542)))) & ((9223372036854775798 & (arr_10 [i_1] [i_2] [i_2]))))) : var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_21 -= (((((-11292 ? 3111871798374457551 : (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 1])))) ? 9223372036854775807 : var_16));
        var_22 = 3555;
        var_23 *= (((arr_13 [i_5 + 4] [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 + 3]) - (arr_17 [8])));
        var_24 = (~(arr_4 [i_5 - 1]));

        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_25 -= (((arr_21 [i_5] [i_6 - 1] [4]) >> (((arr_21 [i_5] [i_6 - 1] [10]) - 39813))));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_26 *= ((-(arr_14 [i_5 - 2] [3] [6] [6] [i_7])));
                var_27 = (max(var_27, (((2229426209 ? 175191014 : 2690)))));
                var_28 -= var_11;
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_30 [i_5] [i_6] [i_5] [i_9] = var_9;
                        arr_31 [i_5] [i_5] = (((arr_23 [i_6 + 1] [i_5] [i_5] [i_5 - 2]) || (arr_14 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])));
                        var_29 = ((~(var_5 == var_8)));
                    }
                }
            }
            var_30 |= 0;
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_36 [i_5] [i_5] [i_5] = (((arr_0 [i_5 - 3] [i_5 + 4]) ? var_11 : (arr_6 [i_5 + 2] [i_10])));
            var_31 |= (((var_12 ? 16063914885510305900 : 3807950030)));
        }
    }
    #pragma endscop
}
