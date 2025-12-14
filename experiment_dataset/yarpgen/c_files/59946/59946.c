/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(var_15, ((-var_0 >> (var_17 + 463871586)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = 12265;
                    var_20 &= (arr_0 [i_1]);
                    var_21 = var_13;
                    arr_8 [i_0] [i_1] [i_0] = (min(-22725, -6));
                }
            }
        }
    }
    #pragma endscop
}
