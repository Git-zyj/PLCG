/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((!4015677521) ? var_2 : (max(var_2, var_14)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = 40421;
                    arr_9 [i_0] [i_0] [i_0] = 1;
                }
            }
        }
        arr_10 [i_0] = (((((-(max((arr_4 [i_0] [i_0] [i_0]), var_0))))) ? (((((var_8 ? -2976112880141267675 : 113))) ? (var_2 / -104) : ((var_13 ? 0 : 1)))) : ((((arr_3 [6]) || ((var_3 && (arr_3 [i_0]))))))));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_13 [17] [17] &= ((-104 ? (((1 / var_2) ? (((max(-25, -84)))) : (max((arr_1 [20]), 18186672801700083568)))) : (((8 / (arr_12 [i_3 - 3]))))));
        arr_14 [i_3] [i_3] = (((-(max(47, var_8)))) / 1878435796);
        arr_15 [i_3] = ((!(((var_0 ? (((min(-15, (arr_5 [i_3 + 4] [i_3 + 4] [i_3 + 4] [14]))))) : ((84 ? -84 : 3138742722)))))));
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = -var_16;
        arr_19 [i_4] [i_4] = (max((((min(var_8, var_11)) + ((1659101504 ? var_12 : 1)))), (max(var_0, (min(-755121122, var_11))))));
        arr_20 [i_4 + 2] = var_3;
    }
    var_18 = ((((((var_13 ? 1 : var_5)) ? -var_13 : 1559838451))));
    var_19 = ((((((104 ? 239 : -105)) & var_1)) ^ ((~((var_9 ? var_5 : 9602))))));
    #pragma endscop
}
