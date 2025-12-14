/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 *= (((((var_10 / (max((arr_5 [i_0 + 2] [19] [19]), var_1))))) ? ((-1948575341 ? -1948575341 : 13331083717758267462)) : ((max(-1948575332, -var_6)))));
                            var_20 = (min((min((arr_1 [i_3 - 2]), var_1)), (((((max(var_2, var_17))) ? var_11 : var_17)))));
                            arr_12 [i_0] [14] [i_1 - 1] [i_1 - 1] [10] |= (((-1948575341 + 2147483647) << (((max(-var_8, ((((arr_1 [i_1]) ? var_10 : var_0))))) - 15472801638265205285))));
                            arr_13 [14] [i_3] [i_2] [i_3 - 2] = var_7;
                        }
                    }
                }
                var_21 = (((((min(var_10, var_18)) ? (((arr_3 [10] [i_1 - 1]) ? var_8 : -1948575335)) : (~var_8)))));
            }
        }
    }
    var_22 = (max((((max(var_13, var_1)))), (max((10 != 1), (min(5115660355951284140, 1))))));
    var_23 = (max(((var_13 ? (min(var_2, var_4)) : (~var_7))), (((var_14 ? var_9 : var_5)))));
    #pragma endscop
}
