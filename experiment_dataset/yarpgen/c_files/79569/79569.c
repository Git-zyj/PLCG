/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((124 ? 3584 : ((-(arr_2 [i_1] [i_1] [i_0]))))))));
                var_14 = (max(var_14, (max(((-1 ? -1 : 13968)), -813866756))));
            }
        }
    }
    var_15 &= ((var_6 <= ((16775168 ? (var_9 && var_10) : 1872065710))));
    var_16 &= var_3;
    var_17 &= (~1);
    #pragma endscop
}
