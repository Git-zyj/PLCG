/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(-4207495710420334281, var_5)) ^ var_4))) ? ((-6672974073397026781 ? ((max(7, 0))) : 0)) : var_4));
    var_16 = (min(var_11, (min((max(6672974073397026781, -62)), -var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 0));
                var_18 = var_0;
                arr_5 [16] |= (arr_2 [1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [11] [1] = var_2;
        arr_9 [i_2] = (arr_1 [19]);
        var_19 = var_13;
        var_20 ^= var_8;
    }
    #pragma endscop
}
