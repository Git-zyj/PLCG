/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = -var_11;
                                var_21 = (min(var_21, (((+((0 ? (max((arr_10 [i_0 - 2] [i_1] [i_2] [i_3] [i_4]), 1)) : (arr_9 [i_0] [9] [16] [4] [i_0] [i_0 - 3]))))))));
                                arr_12 [i_0] [i_0] [i_4] = -1037746143333038459;
                                arr_13 [1] [1] [1] [i_2] [i_3] [i_4] = (min(var_17, var_3));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((min((arr_8 [i_0 - 3] [i_0 - 3] [i_1] [21] [20]), var_2)))));
                    arr_14 [i_0] [17] = var_17;
                }
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
