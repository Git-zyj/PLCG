/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 ^= var_8;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 -= (((arr_1 [i_2 + 2] [i_3 - 1]) / (arr_1 [i_2 - 1] [i_3 + 1])));
                        var_17 = (max(var_17, ((((arr_3 [i_2 - 1]) != (arr_6 [i_0] [i_0] [i_2] [i_3 + 2]))))));
                    }
                }
            }
        }
        var_18 = (min(var_18, 2047));
    }
    var_19 += var_8;
    var_20 = (max(var_20, (min((min((min(var_7, var_13)), (((var_8 ? 0 : var_3))))), (!var_5)))));
    #pragma endscop
}
