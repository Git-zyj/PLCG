/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_6, (~10)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 17013;
        arr_3 [i_0 - 1] [i_0] = (max(-17013, (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (0 / -53);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = -28387;
                                arr_17 [i_1] [i_2] [i_2] [i_2] [i_5] = ((max(((var_0 ? 0 : 17012), ((var_8 ? 17036 : 14))))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_3] [3] = (max(((6733 ? -17013 : 31371)), (((~var_4) - var_3))));
                }
            }
        }
    }
    var_13 = ((((min(var_9, (var_10 >= var_3)))) ? ((var_5 ? (var_7 - var_10) : (((var_9 + 2147483647) << (1 - 1))))) : (var_10 + -3)));
    var_14 = ((((~(min(-6422420416586992873, -2)))) & (((var_0 ? (~var_1) : var_9)))));
    var_15 = (min((!-2), ((var_1 ? ((min(25165, 17012))) : (var_9 && var_8)))));
    #pragma endscop
}
