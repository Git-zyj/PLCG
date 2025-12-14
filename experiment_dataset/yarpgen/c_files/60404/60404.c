/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = var_4;
                var_14 = (max(((15892 ? 67 : -18)), (((-(arr_0 [i_0 + 1]))))));
                var_15 = (min(var_15, (((((!(arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) ? ((min(29, 162))) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
            }
        }
    }
    var_16 = ((((min(var_9, var_2))) ? (((var_0 ? var_9 : var_11))) : (min((16593 - -1319545688), -3809356289163466555))));
    var_17 = max(var_9, var_10);
    var_18 = var_3;
    var_19 = ((~((1 ? -15 : -9))));
    #pragma endscop
}
