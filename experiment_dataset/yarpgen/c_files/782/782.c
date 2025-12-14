/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = ((15 ^ ((((min((arr_4 [i_0]), -7530896147202081311))) ? 7530896147202081310 : (min(var_4, 7530896147202081294))))));
                var_11 *= ((var_1 / var_6) ? (((~(!var_4)))) : (arr_2 [i_1 + 1]));
            }
        }
    }
    var_12 = (((-(1611068085 != -30216612))));
    #pragma endscop
}
