/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 & var_0) ? var_6 : (65535 && var_7));
    var_21 = var_16;
    var_22 = 19598;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 2] = (!var_13);
                    var_23 += ((((arr_8 [i_2] [i_2]) ? (arr_8 [i_0] [i_1 - 2]) : -783052315)));
                    var_24 = (((!var_8) ? (max((min((arr_3 [i_0] [i_1 - 1] [i_2]), (arr_5 [i_1 + 2] [i_1]))), var_18)) : var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_0] [i_3 + 2] [i_3] = -15213;
                                var_25 = (arr_2 [i_3 - 2]);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_0 [i_3 - 1]) + ((-77513775 ? (arr_14 [i_1 - 2] [i_1] [i_1 + 2] [i_1] [i_3 + 3]) : var_11))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
