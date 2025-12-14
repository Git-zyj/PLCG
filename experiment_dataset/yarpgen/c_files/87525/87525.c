/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((!(!-15135)));
                arr_7 [i_0] = (max((min(var_7, 75)), (var_7 / 22511)));
                arr_8 [i_0] [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
