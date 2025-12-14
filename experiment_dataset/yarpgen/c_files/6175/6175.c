/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((((var_15 ? var_5 : 63635))) ? 29472 : 1))) != (max((var_12 & var_15), (var_15 != var_8)))));
    var_18 = (((-var_7 < var_16) ? var_3 : 1));
    var_19 = 246;
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] = var_7;
                var_21 ^= var_16;
            }
        }
    }
    #pragma endscop
}
