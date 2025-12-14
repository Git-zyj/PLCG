/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = ((var_9 ? var_5 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [2] [i_2] = ((62 ? 17592186044415 : 17592186044415));
                    var_22 = ((((arr_1 [i_1 - 1]) ? var_17 : var_18)));
                    arr_7 [i_0] = ((173 ? 0 : 160794636));
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
