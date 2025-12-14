/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(var_11, (max(125463430, var_10)))), var_0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = 1;
                                var_14 = (arr_2 [i_0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 = ((((((arr_12 [i_6] [i_6] [i_2 - 1]) ? (arr_16 [i_6 - 2] [i_5] [i_5] [i_2] [i_2] [i_2 - 1]) : (arr_3 [i_6 + 2] [i_6] [i_2 + 1])))) ? (((arr_12 [i_0 + 3] [i_2 - 1] [i_6 - 2]) * var_3)) : (((((var_8 ? (arr_3 [i_1] [i_5] [i_6 + 2]) : (arr_8 [i_6] [i_1] [i_2 + 1] [i_0])))) | var_3))));
                                var_16 = ((var_9 ? (arr_15 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_5] [i_0 + 2]) : (max((((0 ? var_8 : 22842))), (((arr_18 [i_0] [i_1] [i_2 - 2] [i_1] [i_6]) ? var_11 : var_10))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_0] [i_2] = (max(((-(arr_6 [i_0]))), ((((1073741823 / (arr_10 [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_2 - 3] [13] [i_2 - 2]))) + ((max(170, 174)))))));
                    var_17 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
