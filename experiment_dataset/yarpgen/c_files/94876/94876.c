/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])));
        arr_4 [i_0 + 1] [i_0 - 1] = ((!(arr_1 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_0 [i_1 + 1]) > 1));
        var_14 = (~0);
        var_15 = ((~((var_8 ? var_4 : (arr_2 [i_1 - 1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [i_2] = 116;
                var_16 = (max(var_16, ((((-((min(0, 27366)))))))));
                var_17 -= (min(((-(arr_1 [i_2]))), ((~(!0)))));
                arr_14 [i_2] [i_3 - 2] = 0;
                var_18 -= var_11;
            }
        }
    }
    #pragma endscop
}
