/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (((((min(0, 0)))) < ((min(3982096160139241574, var_10)))));
                    arr_7 [i_0] [i_2] [i_0] = ((!((min((arr_0 [i_2]), var_1)))));
                }
            }
        }
        arr_8 [i_0] = ((var_13 * ((10 ? (var_12 % var_13) : (61440 >> 1)))));
        arr_9 [i_0 - 2] = ((min(((17348059438502850293 ? 39626 : 64110)), 1)));
        arr_10 [i_0] = (min((arr_1 [i_0 - 2] [i_0]), (((-6828 ? (arr_4 [i_0 + 1]) : var_6)))));
        var_19 = ((((min(-1, 8281707230897974653))) ? (!-32755) : var_16));
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_13 [i_3] = var_15;
        arr_14 [i_3] [i_3] = (((((((-2147483647 - 1) ? 3665524716 : 30577)))) ? (-9 * var_17) : (min(((0 ? var_6 : var_13)), (min(0, var_11))))));
        var_20 = (max(var_20, ((min((((arr_12 [i_3] [i_3]) ? ((((arr_12 [i_3] [i_3]) - var_6))) : (min(0, 5666293626358998420)))), ((min((-2147483647 - 1), 89))))))));
        var_21 = (!var_3);
    }
    var_22 = var_5;
    #pragma endscop
}
