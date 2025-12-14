/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(1, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 += (arr_0 [12]);
                            var_22 = ((32035 ? var_11 : 32035));
                        }
                    }
                }
                var_23 = (max(((-var_17 ? (((var_4 ? var_16 : var_2))) : (arr_8 [9] [i_1] [i_1] [8] [8]))), (((var_14 ? var_14 : var_10)))));

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_24 = ((min((min((arr_2 [i_4] [i_1]), (arr_11 [i_0] [i_1] [i_1] [i_4]))), ((min(var_15, var_16))))));
                    arr_13 [i_0] [19] [i_0] [5] = var_16;
                    arr_14 [i_0] [i_0] [i_0] [1] = (128 / 1);
                }
            }
        }
    }
    #pragma endscop
}
