/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_1]);
                var_19 = (~626779608);
            }
        }
    }
    var_20 |= var_16;
    var_21 = (min(((((min(1, var_16)) > var_15))), var_2));
    #pragma endscop
}
