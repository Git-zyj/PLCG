/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((-(max((-16170 == 18289676430370088597), (var_9 - 18289676430370088608))))))));
                var_16 += var_0;
                var_17 = (max(var_17, 1931039178));
            }
        }
    }
    var_18 = (min(var_18, var_8));
    var_19 ^= (!var_8);
    #pragma endscop
}
