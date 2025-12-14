/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_15;
    var_17 = ((-((var_4 ? (!var_12) : (16482731480622222375 | -28)))));
    var_18 = 562949953417216;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (-(arr_2 [12] [i_1] [i_1 + 1]));
                var_20 = ((((max(-16, (arr_0 [i_0])))) ? (arr_2 [i_0] [7] [i_1 + 1]) : 0));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
