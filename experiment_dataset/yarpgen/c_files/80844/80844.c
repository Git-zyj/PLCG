/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((56308 & 12288) >> (-118 + 133)))), var_1));
    var_21 ^= ((((min(var_6, ((2568 ? 2146471867 : var_5))))) ? (((var_19 >> (var_5 - 2023651652)))) : 0));
    var_22 *= (95 ? var_17 : (((max(1, var_4)) & var_16)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 = -var_6;
                    var_24 = (((min(-1548754257290292030, 6))));
                }
            }
        }
    }
    #pragma endscop
}
