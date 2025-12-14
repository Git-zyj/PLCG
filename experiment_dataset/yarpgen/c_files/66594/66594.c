/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 |= ((!(((1 ? -380756056 : 1432555424)))));
                        arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-var_4 ? 1432555424 : (((arr_8 [i_1] [i_1] [i_1] [i_3]) ? 220 : var_5))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = var_9;
        var_18 = 209;
        arr_12 [14] = (((var_14 ? var_2 : 209)));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_14 [i_4] [i_4])));
        arr_17 [i_4] = (498270628 / var_16);
        arr_18 [i_4] = ((-380756054 * (arr_13 [i_4] [i_4])));
        var_20 = -5043;
    }
    var_21 = (min(((var_7 ? ((max(var_10, 209))) : var_15)), ((var_3 ^ (min(var_15, var_11))))));
    #pragma endscop
}
