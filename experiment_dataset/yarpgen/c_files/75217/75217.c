/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_1 >> (((min((((55681 << (var_6 - 4005356253)))), (var_15 | var_14))) - 1824554978)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((max((arr_1 [i_0] [i_0]), 55705))) + ((max(55681, (arr_4 [i_1])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((34 ? 226 : 32753)))), 15139159507618754160));
                                var_19 += ((55687 ^ (((((min((arr_7 [i_0]), 55681))) | (~var_9))))));
                            }
                        }
                    }
                }
                var_20 = var_15;
                var_21 = (min(var_21, ((min((arr_6 [8] [i_1]), (!var_15))))));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
