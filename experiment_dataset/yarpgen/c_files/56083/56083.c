/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = var_3;
                var_21 = (min(var_21, (((((((min(192, 1))))) + -7398426233858112639)))));
                var_22 = ((min(var_17, var_8)));
                var_23 -= -7398426233858112639;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_24 = (max(var_24, var_2));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((~(((var_9 && (arr_15 [i_4 + 1] [i_4] [i_5 - 1] [i_6] [i_4 + 1] [4])))))))));
                                var_26 *= ((-((7398426233858112639 * (58980 && 1099478073344)))));
                                var_27 |= 41611;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_28 |= var_4;
                                arr_23 [i_8] [i_3] [i_4] [i_3] [i_3] [i_2] = max((min(var_14, (arr_14 [i_8 + 1] [i_7] [i_7] [i_7 - 2]))), (((1 ^ (arr_14 [i_8 + 1] [9] [9] [i_7 - 2])))));
                                var_29 |= -1837873607;
                                arr_24 [i_2] [i_3] [i_3] [i_8] = ((6556 ^ (arr_1 [i_3 + 1])));
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_3] = 1;
                }
            }
        }
    }
    var_30 = (max(var_30, (((((60 ? var_4 : var_17)) < 0)))));
    #pragma endscop
}
