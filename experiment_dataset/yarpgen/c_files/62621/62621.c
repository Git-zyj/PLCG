/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (~562949952372736);
                var_12 = (arr_3 [1] [1]);
                var_13 = ((-(((arr_2 [i_1 + 3] [i_1 + 3]) | var_6))));
            }
        }
    }
    var_14 = var_5;
    var_15 |= var_7;
    #pragma endscop
}
