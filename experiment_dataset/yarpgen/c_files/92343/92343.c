/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (min(67107840, (((-((min(197, (arr_3 [21] [i_0])))))))));
                    var_16 = (max(var_16, (((((!(arr_4 [i_2 + 2] [i_2 + 2] [i_2]))) ? (arr_4 [i_2 + 1] [i_1] [i_2 - 1]) : ((max(0, (arr_4 [i_2 + 1] [i_1] [i_2])))))))));
                    var_17 &= min(((min((arr_0 [i_2 + 1]), 254))), (119 * var_5));
                    var_18 = (min(var_18, (arr_7 [16] [16] [16] [16])));
                }
            }
        }
    }
    var_19 |= (-(max(var_3, -var_15)));
    var_20 |= var_7;
    #pragma endscop
}
