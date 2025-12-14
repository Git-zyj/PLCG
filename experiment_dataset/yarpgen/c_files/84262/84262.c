/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -16;
    var_11 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((7696604564985515222 ? (arr_4 [13] [i_1]) : 127)) & ((~(arr_5 [i_0] [i_1] [i_0]))));
                var_13 = 217837738;
            }
        }
    }
    var_14 = ((var_9 ? var_9 : ((4832875051439695434 ? -4832875051439695434 : -4832875051439695441))));
    #pragma endscop
}
