/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(247, 1));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [1] = ((((max(var_0, (min((arr_2 [8]), (arr_2 [i_0])))))) != (arr_1 [i_0 - 2] [i_0 + 1])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 = (arr_2 [i_0 - 3]);
            var_20 = ((1 << (((var_10 / 1) - 238))));
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 *= (((max(1, 0)) ? (min((max(1, 0)), (arr_15 [i_2 + 1] [10] [10] [i_3] [1]))) : (arr_6 [i_4] [10] [10])));
                        arr_17 [i_0] [i_2 + 2] [i_3] = 846455351;
                        arr_18 [i_4] [i_4 - 1] [i_0] [i_0] [i_0] &= -1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_22 [15] = ((var_7 ? 1 : ((1 ? 1 : 90))));
        var_22 = (max(var_22, 48));
        arr_23 [8] = 1326;
        var_23 = -3915642167813249548;
    }
    #pragma endscop
}
