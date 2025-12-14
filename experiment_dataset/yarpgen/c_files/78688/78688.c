/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 *= (max(1, (max((arr_3 [i_0 + 3]), var_7))));
                var_12 = 241;
                var_13 = (min(var_13, var_8));
                var_14 = (arr_0 [i_0 + 1]);
            }
        }
    }
    var_15 = (min(((-(var_2 || 6423872108895690100))), 1));
    #pragma endscop
}
