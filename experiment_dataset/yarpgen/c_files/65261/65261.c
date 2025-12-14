/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((min(var_1, (min(var_7, var_14))))), (max((max(-2791985702425302198, var_12)), (min(-2791985702425302198, var_14))))));
    var_18 = var_12;
    var_19 = ((((((-var_11 != (min(-2791985702425302174, 2791985702425302174)))))) < (((var_5 ^ var_11) ? 2791985702425302173 : var_14))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = 2791985702425302196;
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_0 - 2] = var_14;
                            }
                        }
                    }
                    var_21 = (max(((var_5 ? 2791985702425302197 : var_14)), var_15));
                }
            }
        }
    }
    var_22 = (min((min(-2791985702425302174, ((min(var_2, var_1))))), var_1));
    #pragma endscop
}
