/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += min((((var_15 ? 2 : ((var_5 ? var_14 : var_9))))), -var_3);
    var_17 = ((var_5 ? ((var_5 ? var_7 : 1)) : var_6));
    var_18 = (min(var_15, var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (14068130655366230752 | var_7);
                    var_19 = (max(var_19, ((((arr_5 [i_0]) % (arr_4 [i_0]))))));
                }
            }
        }
        arr_8 [i_0] = 9223372034707292160;
    }
    #pragma endscop
}
