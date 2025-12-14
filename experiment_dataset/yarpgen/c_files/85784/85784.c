/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((134217664 ? (arr_0 [i_0 - 2] [i_0 - 3]) : 4160749632));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 *= (134217664 - 2007242047);
                    var_18 = var_3;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = (arr_12 [i_3]);
        arr_15 [i_3] [i_3] = (((((-(arr_14 [i_3])))) ? (arr_12 [i_3]) : var_4));
        var_20 = ((-(((var_12 || (arr_14 [i_3]))))));
    }
    var_21 ^= var_12;
    #pragma endscop
}
