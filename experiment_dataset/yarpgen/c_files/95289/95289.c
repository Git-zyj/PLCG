/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_16, -16)));
    var_21 = (min(184, (max(-1, ((min(65535, 158)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_22 += ((-(max(var_7, (((7 / (arr_5 [i_1]))))))));
                    var_23 = (max((max((min((arr_8 [5]), var_10)), ((min(65521, var_1))))), var_13));
                }
            }
        }
    }
    var_24 ^= -65;
    #pragma endscop
}
