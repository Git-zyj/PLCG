/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91085
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
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((!(arr_3 [i_0] [i_1] [i_2])));
                    var_17 = max((((arr_1 [i_0]) ? ((-(arr_6 [20]))) : ((((arr_7 [i_0] [i_0] [i_0]) ? (arr_3 [i_1] [i_1] [i_1]) : 175))))), (arr_3 [i_0] [i_1] [i_0]));
                    arr_8 [i_0] [i_1] = (!-3505);
                    arr_9 [i_2] [i_0] = ((-(max(175, 7320068152520166868))));
                }
            }
        }
    }
    var_18 = (max((((((1963871372280246893 ? var_12 : var_11))) ? (~var_12) : (max(var_15, 2376422031712441116)))), (var_11 >= var_0)));
    var_19 *= ((((max(-12888782092469368457, (((240 ? -1662276379 : 188)))))) ? (((var_7 ? var_12 : var_12))) : ((var_7 ? ((var_11 ? var_2 : 3368171931)) : -var_9))));
    #pragma endscop
}
