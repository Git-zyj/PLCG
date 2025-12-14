/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((1 ? -121 : 2129079169))));
    var_15 = ((((((var_0 ? 2129079164 : 4294967295))) ? var_11 : var_2)));
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((((-(arr_3 [1] [i_0 - 1] [i_1 + 1]))) == (((arr_3 [i_0 - 1] [i_1 + 1] [i_1 + 1]) ? var_12 : (arr_3 [11] [17] [i_1 + 1])))));
                            var_18 = (max((((((arr_1 [2]) && 4294967278)) ? ((var_12 ? (arr_6 [0] [6] [1] [11]) : var_4)) : (!2165888129))), ((702213520 ? 2424634037 : 103))));
                        }
                    }
                }
                var_19 |= 1;
                var_20 = (min(var_20, (((((max((arr_3 [15] [i_1 + 1] [i_0 - 1]), var_10))) ? (((arr_2 [10] [i_1 + 1] [i_1 + 1]) ? 4294967295 : ((((arr_1 [6]) && var_2))))) : (arr_3 [i_0 - 1] [i_1 + 1] [i_1 + 1]))))));
                var_21 = (((-101 & var_9) | (arr_3 [i_0 - 1] [6] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
