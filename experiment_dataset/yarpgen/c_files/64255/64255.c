/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (((min((arr_2 [i_1]), -1)) * 9));
                var_15 = var_3;
            }
        }
    }
    var_16 = (~var_3);
    var_17 = (var_3 ? var_7 : var_5);
    var_18 |= (min(((((min(145, var_12))) ? var_2 : (min(var_4, -1)))), var_13));
    var_19 = (var_12 - ((14 ? -20 : -32755)));
    #pragma endscop
}
