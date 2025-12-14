/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min((min(var_15, (arr_1 [i_0 - 1]))), ((max(-4029333254050240659, var_12)))));
                var_19 = (min((min(var_1, var_7)), ((max(var_15, 7680)))));
                var_20 += (max((max(var_3, (max((arr_1 [i_0 - 1]), var_13)))), (max(((min((arr_2 [i_1]), var_12))), (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_21 = var_0;
    var_22 = max((max(var_5, (max(var_14, var_15)))), var_4);
    #pragma endscop
}
