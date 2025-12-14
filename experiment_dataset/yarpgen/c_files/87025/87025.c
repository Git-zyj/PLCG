/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((min(157, 243))), (0 * var_16)))) ? (((min((max(243, 31408)), var_18)))) : ((var_4 / (max(var_14, 243))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (min(var_21, (((((-113 - (arr_0 [i_0])))) ? ((((((arr_1 [i_0]) ? 268435455 : 13))) ? ((min(-46, -113))) : ((2950145293714139452 ? (arr_0 [i_0]) : (arr_1 [i_0]))))) : (max((939524096 - 31892), (arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_22 = min((((arr_0 [i_0]) & (((arr_2 [i_0] [i_0]) ? (arr_1 [i_1]) : 113)))), ((((-114 ? (-32767 - 1) : 100)))));
                        var_23 = ((((1 << (((arr_2 [i_0] [i_0]) - 55))))));
                    }
                }
            }
        }
        var_24 += (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0])));
    }
    var_25 = var_4;
    var_26 = (2950145293714139452 | var_15);
    var_27 = ((max(var_12, -1631152039)));
    #pragma endscop
}
