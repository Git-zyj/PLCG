/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((39905 ? 34 : 4269860981));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((!(((-(arr_2 [i_1] [i_1 - 1])))))))));
                var_18 = (((+(((arr_0 [i_0]) ? 2096640 : var_12)))));
            }
        }
    }
    #pragma endscop
}
