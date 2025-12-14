/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((((1 ? var_13 : 0))) && 1))) << (var_6 - 648610730))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((!(arr_1 [i_0] [10])));
                var_17 = (~var_1);
            }
        }
    }
    var_18 = ((((!((min(var_0, var_6))))) ? ((min((!var_12), (max(var_3, var_6))))) : var_11));
    var_19 = 1;
    var_20 ^= (24508 / 149);
    #pragma endscop
}
