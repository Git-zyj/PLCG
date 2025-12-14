/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((((((arr_0 [i_0] [i_0]) ? (((min(65515, 65515)))) : ((65517 ? -48 : 16))))) ? ((65515 ? (min(var_14, var_9)) : ((min((arr_1 [i_0]), var_16))))) : var_0));
                var_19 = 47;
                var_20 = ((!((max(-59, var_10)))));
            }
        }
    }
    var_21 = min(((min(0, 16384))), var_4);
    #pragma endscop
}
