/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((~(((((-(arr_0 [i_0] [i_1])))) ? (arr_4 [i_0 - 1] [i_0 + 1]) : (arr_2 [i_0] [i_0] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_6 [i_0] [i_1] [i_2] [i_3])));
                                var_18 = (arr_3 [i_2]);
                            }
                        }
                    }
                    var_19 = ((~(arr_1 [i_0] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = var_13;
                                var_21 = (min(var_21, ((((~var_1) >> (-13677 + 13677))))));
                                var_22 = (((((127 / (arr_4 [i_0 + 1] [i_0 - 1])))) ? ((var_15 ? (arr_4 [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1]))) : (((((arr_4 [i_0 + 1] [i_0 - 1]) || (arr_4 [i_0 - 1] [i_0 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
