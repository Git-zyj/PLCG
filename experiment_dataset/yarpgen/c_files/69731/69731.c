/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 += ((arr_0 [i_0]) ? (max(((min(9796, 21768))), (min(305907003, 120)))) : (((-3 ? 117 : 15700))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = var_11;
                                var_20 = (max(var_20, (((((arr_2 [19] [i_1] [i_1]) ? (max((arr_12 [i_4] [i_3] [i_2] [7] [i_0]), (arr_3 [i_4]))) : ((-15700 ? 9223372036854775807 : 120))))))));
                            }
                        }
                    }
                }
                var_21 = -108;
            }
        }
    }
    var_22 = (max(var_22, 120));
    #pragma endscop
}
