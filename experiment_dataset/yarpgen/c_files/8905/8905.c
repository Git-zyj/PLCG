/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8140;
    var_18 = var_14;
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((-(!-20985))) != -8141)))));
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_0] = ((12649 > (45 / -9699)));
                }
            }
        }
    }
    #pragma endscop
}
