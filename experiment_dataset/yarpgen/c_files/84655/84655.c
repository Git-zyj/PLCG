/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((1 ? 22458 : var_6))) ? (((var_12 && (((var_10 ? 6841 : 1)))))) : ((max((arr_3 [i_0]), (!var_8))))));
                var_18 += ((((min((1 ^ 1), ((1 ? 1 : 1))))) ? ((34 ? 103 : ((min(1, -4840))))) : (((!1) >> (((min(1690871971, 26691)) - 26661))))));
                var_19 = -4840;
            }
        }
    }
    #pragma endscop
}
