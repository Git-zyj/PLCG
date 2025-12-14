/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(-3048822452, (((-(((arr_4 [i_0] [i_1 - 1]) ? (arr_5 [13]) : var_10)))))));
                var_16 = 1246144843;
            }
        }
    }
    var_17 = var_13;
    var_18 |= (max((((min(1065216721, var_1)))), var_5));
    #pragma endscop
}
