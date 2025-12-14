/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((!(((4492891912499853951 ? 8053063680 : 972418131)))));
                var_17 = (min((7168 / -6596029475917031871), (min(6596029475917031848, 6596029475917031848))));
            }
        }
    }
    var_18 = ((((((min(var_4, var_0))) | (min(var_3, var_7)))) < (((((min(var_7, var_6))) ? (~var_8) : (~255))))));
    #pragma endscop
}
