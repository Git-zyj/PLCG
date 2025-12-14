/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((!var_6), (((!var_8) ? ((23358 ? var_5 : var_13)) : 42177))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= (arr_0 [i_0]);
        var_16 = (max(var_16, 2));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_17 *= -0;

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_18 = (arr_3 [i_0] [i_1] [i_0]);
                arr_6 [i_0] [i_0] [i_1 + 1] [i_2 + 1] = ((((-93 ? 3791749762 : -32758)) << (((arr_1 [i_0]) - 31712))));
            }
            var_19 = (min(var_19, -8414));
        }
    }
    #pragma endscop
}
