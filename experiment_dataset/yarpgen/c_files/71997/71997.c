/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = 32767;
                var_12 = ((!(0 + 0)));
            }
        }
    }
    var_13 = (min(-39, (2855575228 - var_1)));
    var_14 ^= (min(var_7, (min(63, var_1))));
    var_15 = var_5;
    #pragma endscop
}
