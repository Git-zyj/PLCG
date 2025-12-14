/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 ^= (max((arr_0 [i_0 - 1] [i_0 - 1]), (((arr_0 [i_0 + 1] [i_0 - 1]) ? var_4 : var_1))));
                var_17 = (((!(arr_1 [i_0 + 2] [i_0 - 1]))));
                var_18 = (((((~(min(-423247093, 1588524263))))) || 2351987704));
            }
        }
    }
    var_19 = ((((max(var_10, (var_13 ^ 3795066956)))) ? (((((var_14 ? var_15 : var_13))) ? (var_0 == 2147483621) : 993254464)) : (min((max(2147483632, 3310725212)), ((min(var_13, 2147483621)))))));
    var_20 = (((2147483621 >> ((var_0 ? var_9 : var_3)))));
    #pragma endscop
}
