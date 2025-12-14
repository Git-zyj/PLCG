/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 *= ((var_5 * (arr_3 [i_0] [i_0])));
        var_12 = (var_4 ? var_6 : (!var_1));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((16376 % (arr_0 [i_0])));
                    arr_12 [i_0] [i_0] = 33078;
                    var_14 -= ((!((((arr_11 [i_2] [8] [3]) + 281474976710655)))));
                }
            }
        }
        var_15 = (max(var_15, (((4721357946045576165 ? (~766315134) : var_9)))));
    }
    var_16 = (~var_0);
    #pragma endscop
}
