/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_16 *= -127;
        var_17 *= ((var_1 & (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = var_3;
        arr_4 [i_1] = ((-(arr_0 [i_1 + 1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_19 *= ((((((arr_7 [i_2 - 1]) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 + 3])))) ? var_5 : ((-(arr_10 [1] [i_2 + 2] [1])))));
                arr_12 [i_2] [i_2] [i_3] = (max(1, 119));
            }
        }
    }
    #pragma endscop
}
