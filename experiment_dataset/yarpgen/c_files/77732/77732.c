/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((89 ? 65535 : 23)))));
                    var_15 = (!-1979847541);
                }
            }
        }
        var_16 = (max(var_16, var_9));
    }
    var_17 = (min(var_8, (-8 ^ -2027492739)));
    #pragma endscop
}
