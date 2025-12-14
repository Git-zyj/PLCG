/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_3 ? ((-(var_4 < var_5))) : ((~(var_11 || var_9))));
    var_14 = (min(var_3, ((var_7 ? (~178) : ((var_8 ? -28 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= arr_3 [i_0];
                arr_5 [i_1] [19] [0] = -24320;
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
