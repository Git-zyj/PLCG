/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((0 & var_10) ^ ((var_13 ? var_13 : var_9)))), ((max((!1), var_7)))));
    var_15 = (!var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (min(((var_0 >> (1185579376 - 1185579356))), 201326592));
                    var_17 = (!var_13);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 3] [i_0] [i_2] [i_0] = 0;
                                arr_15 [i_2] [i_3] [i_3 + 2] [i_2] [i_1] [i_2] = (min(var_11, ((((!-1352131602) ? var_1 : (!0))))));
                                var_18 = (max(var_18, 1));
                            }
                        }
                    }
                    var_19 = var_0;
                }
            }
        }
    }
    var_20 = var_11;
    var_21 = ((!((!((min(127, -118)))))));
    #pragma endscop
}
