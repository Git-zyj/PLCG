/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_0] [i_1] [i_2] = ((((((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1]) ? 16434985555669953355 : (arr_5 [i_0 - 1] [i_0] [i_0 + 3])))) ? ((((((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_5 [i_2] [i_2] [i_2])))) ? var_0 : ((max((arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]), var_2))))) : 2013265920));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_1, (((((var_8 ^ (arr_4 [i_1] [i_2] [i_4 - 4])))) ? (((max((arr_7 [i_4] [15] [i_1] [i_1]), 4)))) : (~13)))));
                                var_19 &= ((-((((max(42346, 1))) ? var_12 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_20 = (arr_12 [i_4 - 4] [i_3 - 4] [i_2] [9] [i_0 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= ((-var_9 ? ((max(var_8, (var_7 >= var_2)))) : var_5));
    #pragma endscop
}
