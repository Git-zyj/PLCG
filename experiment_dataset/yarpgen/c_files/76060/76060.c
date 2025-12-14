/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((min(3894195198, 1))) ? 2183017177 : (((22877 ? 1428 : 1))))));
    var_20 = (((~1) ? ((min(var_16, (-32767 - 1)))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((-32759 + 1) | var_2)))));
                arr_6 [i_0] [i_0] [i_1] = max(-28286, -32764);
                arr_7 [i_0] [0] [0] &= (max((min(((((arr_1 [i_0 + 1]) == var_16))), var_17)), (arr_5 [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_22 = (arr_0 [i_1 - 1]);
                            arr_14 [i_3] [i_2] [i_1] [i_0] = 4290072051;
                            var_23 = (max(((((arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1]) <= (arr_10 [i_0 + 1] [i_1 - 1] [i_2 + 1])))), (((((1 ? -29889 : (arr_13 [i_0] [i_1] [i_2] [i_3])))) ? var_13 : var_9))));
                            var_24 = (arr_2 [i_1]);
                        }
                    }
                }
                var_25 = var_6;
            }
        }
    }
    #pragma endscop
}
