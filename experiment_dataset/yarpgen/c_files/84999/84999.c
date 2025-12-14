/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_0) * (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (~-1357903547);
                var_15 = (arr_3 [i_0] [7] [i_1 - 2]);
                var_16 = (max(var_16, 1));
            }
        }
    }
    var_17 = (!var_7);
    var_18 = var_0;
    var_19 = var_6;
    #pragma endscop
}
