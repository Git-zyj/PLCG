/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((31 ? (min(17, (var_2 * 9))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((arr_0 [i_0]) + ((((((-9223372036854775807 - 1) ? (arr_1 [1] [i_1]) : var_2))))));
                arr_5 [i_0] [i_0] = (min(76, var_7));
                var_18 = 8589410304;
            }
        }
    }
    #pragma endscop
}
