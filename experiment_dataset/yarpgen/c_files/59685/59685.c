/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_9, var_4));
    var_13 = var_3;
    var_14 = ((((min(var_10, ((var_9 ? 65535 : 0))))) ? ((var_10 ? 0 : 12713077590652642098)) : var_0));
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (arr_0 [17] [i_1]);
                    var_16 = 6995269404606352918;
                }
            }
        }
    }
    #pragma endscop
}
