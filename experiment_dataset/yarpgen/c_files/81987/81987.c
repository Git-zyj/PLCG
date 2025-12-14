/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (4294967295 ^ 60880);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] |= ((-((((var_11 ? var_1 : var_16))))));
                var_20 |= (((((((max(var_13, var_2))) ? var_3 : var_10))) ? (max(var_4, -var_12)) : (max(var_5, var_2))));
            }
        }
    }
    var_21 ^= var_13;
    #pragma endscop
}
