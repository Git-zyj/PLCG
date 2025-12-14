/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((248 ? ((((min((arr_6 [i_0] [i_3] [i_3] [i_4]), var_2))) ? ((((arr_4 [i_2] [i_1] [i_2] [i_3]) >= (arr_6 [i_0] [i_1] [i_1] [i_3])))) : (6 - 1))) : ((70 ? (-8813195167796171948 >= 7) : 1)))))));
                                var_19 = (((~1151122228) | ((min(248, 162)))));
                            }
                        }
                    }
                }
                var_20 ^= 4939204969993119863;
                arr_12 [i_0 + 1] [i_0 + 1] [i_0] = (((var_14 ^ (arr_11 [14] [14] [i_0] [i_0] [i_1]))));
                var_21 = (max(((((((arr_8 [i_0] [i_0 + 2] [i_1]) & 2608933577)) <= (((arr_10 [i_1] [i_1] [16] [i_0]) ? (arr_8 [i_0 + 2] [i_1] [i_1]) : (arr_3 [i_0] [i_0 + 1] [i_0])))))), var_5));
            }
        }
    }
    var_22 = (max(var_7, (!var_3)));
    #pragma endscop
}
