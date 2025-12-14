/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [16] = 8050;
                arr_6 [i_0] [i_0] [i_1] = (max(((4445686996601887775 % (arr_2 [i_0] [i_1]))), ((0 ? var_4 : -5755683944862267057))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_10 [i_1] [10] = (min((((((min(65535, -5758))) != 9))), (max((arr_2 [i_1 - 1] [i_1]), ((((arr_0 [i_2]) != var_5)))))));
                    arr_11 [i_1] [2] [i_1] = (((((((((arr_4 [i_0] [i_1]) % var_14))) != 21684))) & ((((arr_3 [i_1 - 1] [15] [1]) != (arr_3 [i_1 - 1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = var_5;
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_3] [i_1] = min((arr_3 [i_3] [i_3] [i_2]), ((max((arr_15 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [5] [i_3 + 1]), 0))));
                                var_16 = var_2;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_17 -= (arr_9 [i_0] [i_5] [i_5]);

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 -= ((arr_12 [i_1 + 1] [i_1 - 1]) ? ((((max((arr_21 [1] [i_5] [i_5]), var_1))) ? (~1) : 164070666)) : var_8);
                        arr_26 [i_0] [i_0] [i_0] [i_1] [i_0] = (i_1 % 2 == zero) ? ((((((((((arr_8 [15] [i_1] [i_5]) ? 1 : var_6)) <= -var_12)))) & ((-((var_7 << (((arr_2 [3] [i_1]) - 5504))))))))) : ((((((((((arr_8 [15] [i_1] [i_5]) ? 1 : var_6)) <= -var_12)))) & ((-((var_7 << (((((arr_2 [3] [i_1]) - 5504)) - 53619)))))))));
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_19 |= ((((((max(557351048, -4931586458391002874)) * (arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_1])))) ? 102 : 0));
                    arr_29 [i_0] [i_1] [12] [2] = (((arr_20 [i_0] [1] [10] [i_7]) != (!1)));
                }
                arr_30 [i_1] = ((((arr_0 [i_1]) ? -164070666 : var_15)) * (1 != 1));
            }
        }
    }
    var_20 = (max(var_6, var_0));
    #pragma endscop
}
