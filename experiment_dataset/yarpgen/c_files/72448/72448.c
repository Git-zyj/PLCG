/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((var_1 ? var_7 : ((-8480093995809465463 ? -32764 : 16888498602639360))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 16888498602639360));
                arr_6 [i_1] [i_1] = ((-var_15 | (arr_0 [i_0 + 2])));
            }
        }
    }
    var_19 = ((var_12 ? var_12 : var_5));
    var_20 -= (min(var_7, var_9));
    #pragma endscop
}
