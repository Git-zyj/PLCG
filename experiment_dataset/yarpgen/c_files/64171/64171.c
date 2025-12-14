/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((142 ? (-9223372036854775807 - 1) : 9223372036854775807)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(min((arr_3 [i_1] [i_0]), (var_10 & -1)))));
                arr_7 [i_0] = (((((145 ? 9223372036854775807 : -20632))) ? var_0 : var_15));
                var_20 ^= 0;
            }
        }
    }
    #pragma endscop
}
