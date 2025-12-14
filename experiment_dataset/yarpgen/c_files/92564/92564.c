/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max(((max(14, var_11))), var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((max((arr_4 [i_1]), ((20 ? 1 : 11461)))))));
                var_18 = min((((arr_2 [i_1 - 1] [i_1 - 1] [i_1]) % var_12)), var_11);
            }
        }
    }
    var_19 = var_9;
    var_20 += min(var_4, var_11);
    var_21 = var_2;
    #pragma endscop
}
