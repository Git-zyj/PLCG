/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max((((arr_5 [i_0] [i_0] [i_0]) >> (var_5 - 16403))), (((((((arr_0 [i_0] [i_1]) & 115))) ? var_5 : (((arr_5 [8] [i_1] [i_1]) ? 4 : 88)))))));
                var_12 = var_8;
            }
        }
    }
    var_13 -= 115;
    #pragma endscop
}
