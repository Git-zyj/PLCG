/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 ^= arr_0 [i_0 - 1];
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 += (arr_0 [i_1 - 3]);
                    var_21 = ((((((arr_4 [i_2] [i_1] [4] [i_0]) ? 134 : (arr_2 [i_1])))) ? (arr_0 [i_0]) : var_16));
                    var_22 = (arr_2 [i_0 - 1]);
                    var_23 &= ((-(arr_2 [i_0 + 1])));
                }
            }
        }
    }
    var_24 = (((((var_10 / var_0) + 2147483647)) >> ((var_15 ? var_9 : ((var_17 ? 223 : -800469523))))));
    var_25 = var_11;
    #pragma endscop
}
