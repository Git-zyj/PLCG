/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = ((!(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 = (max((arr_3 [i_0] [i_1] [i_2]), (max(251658240, 61979))));
                        var_23 = (max(((1 ? (arr_7 [i_2 + 1]) : var_16)), -9836));
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_12 [i_4] = (~var_16);
            var_24 = ((251658240 ? 1073739776 : 9860));
            var_25 = ((!((((4161348575 + (arr_8 [i_0] [i_0] [i_0] [i_4 - 1] [i_4] [i_4 - 2]))) < 9848))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_26 = ((var_2 ? ((var_12 ? var_19 : var_14)) : 251658240));
            var_27 = 251658245;
            var_28 = ((-9856 ? 3474 : 2374678703));
            arr_15 [i_0] [i_5] [i_5] &= (251658242 > 268427264);
        }
    }
    #pragma endscop
}
