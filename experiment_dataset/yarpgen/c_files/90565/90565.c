/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((108 % var_9), (min(-4294967286, var_1))));
    var_14 = (max(var_14, var_1));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_0 [i_0 + 3])));
                var_17 &= (((arr_2 [i_1]) ? (arr_4 [i_1]) : var_2));
            }
        }
    }
    #pragma endscop
}
