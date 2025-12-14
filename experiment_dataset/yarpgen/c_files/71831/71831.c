/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 += (max(((-(var_15 * var_11))), ((max((arr_3 [i_0] [i_2] [i_1]), (max(17987, var_8)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = (((max(((var_6 ? var_5 : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_1]))), (arr_10 [i_4] [i_4] [i_4 - 1] [i_3] [i_0 - 2] [i_0]))) > (((var_8 ? var_16 : var_13)))));
                                var_19 = var_8;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
