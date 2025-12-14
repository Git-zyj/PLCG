/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((min(var_7, 116))) ? var_1 : (var_5 + var_4))), (((-7682 ? var_12 : 3317779574)))));
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (((((((~((var_2 ? var_7 : (arr_1 [i_0]))))) + 2147483647)) >> (var_8 - 44542893))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 -= (((((~(((!(arr_9 [i_0] [i_2] [i_2] [i_2] [i_4] [i_2] [i_1]))))))) ? (max((max((arr_3 [i_2] [i_2]), var_9)), (max(var_1, (arr_0 [20]))))) : (((min((arr_7 [i_4 - 1] [i_4 - 1] [i_4] [21] [i_4 + 1] [i_4 - 1]), (arr_7 [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1])))))));
                                var_17 = (arr_9 [i_0] [i_0] [i_4 - 2] [22] [i_1] [i_4] [i_4]);
                            }
                        }
                    }
                    var_18 = (arr_0 [i_1]);
                    var_19 = (((((arr_9 [1] [1] [i_2] [i_1] [i_1] [1] [1]) ? ((((arr_1 [i_0]) ? var_1 : -32))) : (var_9 | 1286911356))) ^ ((((((!(arr_9 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0])))) | (((arr_6 [i_0] [19] [19] [7]) * var_0)))))));
                    arr_13 [i_0] [i_2] [i_1] [i_0] |= (arr_1 [i_0]);
                    var_20 = (min((max((arr_3 [i_1] [i_1 - 2]), (arr_3 [i_1] [i_1 + 1]))), (arr_7 [i_2] [i_1 + 1] [i_2] [i_2] [i_0] [i_2])));
                }
            }
        }
        arr_14 [i_0] [22] = (arr_10 [i_0] [i_0] [10] [1] [18]);
    }
    #pragma endscop
}
