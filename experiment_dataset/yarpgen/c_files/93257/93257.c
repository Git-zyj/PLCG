/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(1, -531570574))) ? ((0 << (!var_13))) : ((-(var_7 / var_7)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-((((arr_1 [i_0] [i_0]) > var_13))));
        var_15 = ((((max(0, (arr_0 [i_0])))) ? 1239300694 : 1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 ^= ((1054988721 <= (arr_3 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_3] = (min(-127, (max(2147482624, ((max(73, -72)))))));
                        arr_12 [i_3] [i_3] = (max(((var_2 ? (max(2147482624, 14626821470101025898)) : ((min((arr_0 [i_0]), var_4))))), var_11));
                        arr_13 [i_2] [i_2] [i_3] = 1;
                    }
                }
            }
            var_17 *= (min((arr_3 [i_0] [i_1] [i_1]), (((~66) ? (arr_6 [i_0] [i_0] [i_1]) : ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) : var_13)))))));
            var_18 = (max((max((arr_4 [i_0]), (arr_6 [i_0] [i_0] [i_0]))), ((1 ? 16324250186331301019 : (((1 ? -8115221850429390305 : 0)))))));
        }
        arr_14 [i_0] = ((16324250186331301022 ? 0 : 1118122088));
        var_19 = (max(-1, ((-8251168079989307252 ? ((2147484671 ? var_0 : 143)) : 14557310601666527641))));
    }
    #pragma endscop
}
