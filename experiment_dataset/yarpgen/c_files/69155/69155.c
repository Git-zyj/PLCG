/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = ((!((min(-189, (var_4 > var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = 8321960765396258207;
                var_15 = (((((((min(16, var_6))) ? (arr_0 [i_0]) : ((min(var_4, var_3)))))) & (min(((0 << (10842372764810235838 - 10842372764810235802))), (~var_10)))));
            }
        }
    }
    var_16 = -var_7;
    #pragma endscop
}
