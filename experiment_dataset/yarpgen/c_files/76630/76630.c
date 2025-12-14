/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = arr_0 [i_2];
                            var_20 = 49215;
                            var_21 = ((var_3 ? (var_18 + var_11) : (max((!var_0), var_2))));
                        }
                    }
                }
                var_22 = ((+(max((min((arr_4 [i_0]), 0)), ((max(var_18, (arr_1 [5]))))))));
                var_23 = ((((32308 * -8228) + (arr_9 [i_1] [i_1]))) * (((((var_17 ? var_5 : 1))))));
            }
        }
    }
    var_24 = ((((-(var_4 / var_0))) + var_5));
    var_25 = var_2;
    #pragma endscop
}
