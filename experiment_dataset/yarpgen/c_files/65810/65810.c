/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 += (arr_1 [i_0] [1]);
        var_19 = ((!((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_20 *= (arr_2 [i_1 - 1]);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_21 = ((!(arr_5 [i_0] [i_0] [i_0] [i_1 + 1])));
                var_22 &= ((10195 ? 281474976710655 : -101));
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
