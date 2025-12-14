/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (~11846969656182357804);
        var_11 ^= (~var_5);
        arr_2 [i_0] = ((-127 - 1) ? 219 : (arr_0 [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, (((((var_6 / (arr_9 [i_0] [i_0] [i_0] [i_0]))) != var_7)))));
                        var_13 -= (((((~(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (arr_6 [i_1 + 1] [i_1 + 2]) : -81));
                        arr_11 [i_2] [14] [1] [i_3] = (92 & 2077);
                        var_14 *= (((arr_5 [i_2]) / var_3));
                        arr_12 [i_3] [i_2] = var_1;
                    }
                }
            }
        }
    }
    var_15 ^= (~var_3);
    #pragma endscop
}
