/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? 9715997746029789203 : var_12));
    var_15 = var_2;
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 ^= var_10;
                arr_5 [i_0] [i_1] = ((((((var_2 != (arr_1 [i_0 + 1]))))) != (arr_0 [i_0 + 1] [i_1 + 1])));
                var_18 *= ((5492146940188564049 ? ((((var_4 + 9223372036854775807) << (var_0 - 749968095217208475)))) : 0));
            }
        }
    }
    #pragma endscop
}
