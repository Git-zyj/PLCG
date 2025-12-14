/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 ^= arr_3 [i_0] [i_1];
                var_21 = (((((arr_0 [i_0 - 2]) ? (arr_1 [i_0 - 3]) : (arr_0 [i_0 + 1]))) & ((((5 <= (arr_3 [i_1] [i_1])))))));
                var_22 += (max((102001264 != var_4), -6510));
                var_23 -= ((6494 ? (((min((arr_3 [i_0] [i_0]), (arr_0 [i_0]))))) : var_18));
                var_24 = (((max(-6503, -6510))) | (max(-6520, 2147483641)));
            }
        }
    }
    var_25 &= (--1);
    var_26 = (max(var_26, -6510));
    #pragma endscop
}
