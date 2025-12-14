/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~(!1482731092233223396))))));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 &= (+-192750704);
                var_17 += ((-((~(arr_2 [i_1 + 1])))));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
