/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 11908584422007690198));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 -= min(((var_6 + (arr_7 [i_2] [i_1] [i_0]))), var_1);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_1 [i_0] [i_1 - 2]) ? (arr_1 [i_0] [i_1 - 2]) : ((max((arr_1 [i_0] [i_1 + 1]), (arr_1 [i_0] [i_1 - 2]))))));
                                var_14 = ((((((min(36, 14520283817870945252))) ? 3926460255838606359 : (((min(var_10, var_1)))))) - 36));
                                arr_13 [i_4] [i_3 + 1] [i_2] [i_1] [i_0] = 4237817269;
                                var_15 = ((2147268086 < (arr_7 [i_3 + 3] [i_3 - 1] [i_1 - 2])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1 + 1] [i_0] = ((11908584422007690210 > (max(((((var_9 + 9223372036854775807) >> (((arr_11 [i_0] [i_1 - 1] [i_2] [i_1 - 2] [i_2] [i_1 + 1] [i_2]) - 8596))))), (max((arr_10 [i_0] [i_1 - 2] [i_1]), 3926460255838606378))))));
                }
            }
        }
    }
    var_16 = ((var_8 ? ((((max(var_0, 0)) > var_4))) : 15));
    var_17 = ((var_10 ? var_9 : var_8));
    #pragma endscop
}
