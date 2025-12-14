/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 && var_4);
    var_19 = ((~(~var_6)));
    var_20 = (min(var_20, (!var_8)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 -= (min((max(((var_1 << (((-78 + 109) - 28)))), (arr_1 [i_0 - 4]))), (((arr_1 [i_0 + 1]) & 1681518923))));
                arr_5 [12] [i_1] [3] = (min((arr_0 [i_0 + 1] [i_0 + 2]), var_8));
            }
        }
    }
    var_22 -= var_2;
    #pragma endscop
}
