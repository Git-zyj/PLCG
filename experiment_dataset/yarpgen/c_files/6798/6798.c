/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_14));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 |= ((1 && (var_6 && var_11)));
                var_19 = (17826811616082926826 != 108);
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
