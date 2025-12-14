/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = var_14;
                var_16 = (min((((arr_4 [i_0] [i_0]) ? (-2147483647 - 1) : (min(var_1, var_7)))), (arr_1 [i_0 - 1])));
            }
        }
    }
    var_17 -= var_13;
    var_18 *= var_3;
    var_19 = (min(var_19, ((10 && ((max(2147483647, 1)))))));
    #pragma endscop
}
