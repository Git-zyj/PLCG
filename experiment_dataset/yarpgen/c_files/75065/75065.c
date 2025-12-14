/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((((-380 ? 251658240 : 896))), (-251658227 | 654822831));
    var_20 -= ((((var_12 ? (!4294967272) : var_1))) ? 64645 : var_12);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = ((((((((~(arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))) ? ((var_4 ? 1 : 65535)) : ((18073502463768260192 ? var_6 : (arr_3 [i_1] [i_1] [1])))))) ? ((var_9 ? (373241609941291431 - var_3) : (((4294967269 ? (arr_1 [0]) : var_8))))) : (((6493 + 373241609941291451) | 18073502463768260193))));
                                var_22 = -2115125417966444175;
                                var_23 = (13669 ? ((~(~865))) : (arr_1 [i_0 + 1]));
                            }
                        }
                    }
                    var_24 *= (((min((arr_6 [i_0 - 2] [4] [i_1]), var_17)) < (arr_6 [i_0 - 2] [i_0 - 2] [i_2 - 3])));
                    var_25 = (((arr_4 [i_0]) ? ((~(min((arr_10 [i_2 - 3] [6] [12] [i_0] [i_0]), var_9)))) : (min(251658227, 928984304))));
                }
            }
        }
    }
    var_26 = var_15;
    #pragma endscop
}
