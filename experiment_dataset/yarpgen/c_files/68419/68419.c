/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = (((((-20484 - 1) + 2147483647)) << ((((((!1) >= ((var_14 / (arr_1 [12])))))) - 1))));
        var_16 = (max(var_16, ((max(((1 ? ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0 - 1])))) : (arr_1 [i_0 - 1]))), ((min(((max(var_14, 0))), ((1 >> (6306109117688986165 - 6306109117688986161)))))))))));
        var_17 -= var_0;
        var_18 = (min((arr_0 [i_0]), ((((var_7 ? var_8 : var_7))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] &= ((((1 ? 32767 : 9689349596973419877))));
                        arr_11 [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_2] [i_3] = (((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : 12773)) - var_7));
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 1] = (min((((arr_1 [i_0]) / (((var_4 ? 1 : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1])))))), (((0 & (var_10 >= var_11))))));
                    }
                }
            }
        }
    }
    var_19 = (((var_10 / var_10) ? 181 : var_4));
    #pragma endscop
}
