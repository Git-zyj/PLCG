/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 ^= ((~(arr_2 [11] [9] [i_0])));
                var_17 = (arr_0 [i_0]);
            }
        }
    }
    var_18 = var_9;
    var_19 = (((((var_7 ? (min(var_15, var_11)) : 17958))) ? ((-((var_12 ? 16309 : var_9)))) : var_9));
    #pragma endscop
}
