/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((var_10 ? var_0 : (min(var_2, var_11))))), (max(var_6, (max(var_9, var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 + 3])));
                    arr_9 [i_0] [i_1] [i_1] = (((max(var_4, (arr_5 [i_2] [i_1]))) > (arr_8 [i_0] [i_0])));
                    var_16 = ((max((arr_2 [i_0]), (arr_2 [i_0]))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_5] [i_5] [i_6] [i_4] = ((((min(1, (max(1, 1318288309))))) ? ((max((arr_18 [i_3 + 3] [1] [i_3 + 3] [i_3 + 3] [i_3 - 2]), (arr_18 [i_3 + 1] [i_3 + 3] [i_3 + 4] [i_3 + 3] [i_3 + 3])))) : (min(1, (max(1567912542, 118))))));
                                arr_22 [i_3 - 3] [i_3 - 3] [i_5] [i_5] [i_5] = (min((min((arr_18 [i_3 + 4] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]), 95)), 65535));
                            }
                        }
                    }
                    arr_23 [i_3] [i_5] = (max(var_8, ((var_4 ? ((51250 ? 3829966906 : 2439858044008657954)) : (((max((arr_13 [i_3] [8] [i_5]), (arr_1 [i_3])))))))));
                    var_17 ^= ((((min((arr_2 [i_3]), (arr_2 [i_3])))) ? ((max(var_10, (max(-24585, 126))))) : (max(-45, -2))));
                }
            }
        }
    }
    #pragma endscop
}
