/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 -= (var_8 > 0);
                    var_19 -= var_17;
                    var_20 = (max(var_20, ((((((max(var_14, 173)))) % (min(var_3, var_1)))))));
                }
            }
        }
    }
    var_21 -= ((((((((var_14 ? var_6 : 19))) ? (~22694365) : (((99 ? 21 : 226)))))) & ((2717042461 ? (min(-8098171104831010, 4272272932)) : (((var_9 ? 4034603708 : 35)))))));
    var_22 = var_14;
    #pragma endscop
}
