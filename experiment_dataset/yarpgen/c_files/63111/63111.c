/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_16 = (min(((((arr_3 [i_0] [i_1 + 1] [i_1]) / (arr_4 [i_0] [i_0] [i_2])))), (((((max(var_10, 1345413645595352444))) ? 18446744073709551615 : ((var_7 ? var_8 : var_14)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = ((-((var_6 ? (arr_3 [4] [i_1 + 1] [i_2 + 1]) : ((-1635508021509934040 ? 1635508021509934044 : 1))))));
                                var_18 = (((var_12 ? (arr_0 [i_4 + 2]) : var_9)));
                                var_19 = (arr_5 [i_0] [i_1] [i_2]);
                                var_20 = ((var_10 / (((max((arr_9 [i_4] [i_4 + 2] [i_4] [7] [i_4] [i_4] [i_4]), (arr_10 [i_4] [i_4 - 3] [i_4] [i_4 - 3] [i_2])))))));
                                var_21 = ((max(-1635508021509934050, var_13)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
