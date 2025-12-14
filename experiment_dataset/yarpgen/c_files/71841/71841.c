/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_10 &= (((arr_2 [i_1 - 1]) && ((((((arr_3 [i_0] [i_0] [0]) && var_8)) ? ((min((arr_3 [i_0] [i_1] [1]), 1))) : (((arr_4 [14] [i_1] [14]) % (arr_5 [i_0] [i_0] [10]))))))));
                arr_7 [i_0] [i_1] = (min((min((arr_3 [i_1 + 2] [i_1 + 2] [i_0]), (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 1]))), (arr_5 [i_1] [i_1 + 3] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (!1);
                                arr_17 [i_1 - 3] [i_2 - 2] [i_4] |= ((-((-(~var_3)))));
                            }
                        }
                    }
                }
                var_12 = (((arr_12 [i_1 - 3] [i_1 - 1] [i_1] [3] [i_1 - 3]) + (((arr_16 [i_0] [i_1] [i_1 + 1]) / (arr_16 [i_0] [1] [i_1 - 2])))));
            }
        }
    }
    var_13 = var_1;
    var_14 |= var_4;
    #pragma endscop
}
