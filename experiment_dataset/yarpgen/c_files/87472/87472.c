/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_14, (~var_3)))) ? var_9 : -var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = var_3;
                        arr_10 [i_0] [i_0] &= (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 2]) : (arr_4 [i_1 - 1])))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3])));
                        var_20 = (min(var_20, (arr_2 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_21 = (((min((arr_0 [i_5 + 2]), (arr_4 [i_0])))) ? ((var_15 ? (arr_4 [i_1 - 1]) : (arr_4 [i_5 + 2]))) : (((arr_0 [i_2]) ? (arr_4 [i_5 + 1]) : (arr_0 [i_2]))));
                                var_22 = (max(var_22, ((((arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] [i_0] [i_0]) ? (max((arr_14 [i_5] [i_2] [i_0] [i_0] [i_2] [i_1] [i_0]), (((arr_7 [i_0] [i_1] [i_2] [i_1]) ? var_16 : (arr_4 [i_2]))))) : (arr_2 [i_0]))))));
                            }
                        }
                    }
                    arr_15 [i_1] = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (((max(var_7, var_4)))))))));
                }
            }
        }
    }
    var_23 = (-(((var_10 ? var_10 : var_0))));
    var_24 = var_14;
    #pragma endscop
}
