/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-((var_2 ? var_5 : var_16)))) * (var_17 / var_7)));
    var_20 -= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((~(max(((max(20303, -260549989))), (max(var_13, (arr_4 [i_0])))))));
                arr_6 [i_0] = var_3;
            }
        }
    }

    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_22 ^= ((var_2 && (arr_5 [14])));
        var_23 *= (arr_4 [20]);
    }
    #pragma endscop
}
