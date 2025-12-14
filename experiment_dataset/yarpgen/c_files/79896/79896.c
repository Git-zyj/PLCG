/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (((((3077481743 ? 6988254666800417309 : 125))) ? ((-1205662134 ? var_11 : 12)) : -var_4));
                arr_6 [i_0] [i_1] [i_0] &= 46259;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (((((var_1 ? var_5 : var_9))) ? 46259 : (!var_11)));
                            arr_12 [i_3] [i_1] [i_0] [i_1] = -127;

                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                var_13 += (((!-var_1) ? var_6 : ((11458489406909134306 ? (((var_5 ? var_2 : 50304))) : var_6))));
                                arr_16 [i_1] [i_4] [i_4] [i_4] [i_4] [i_0] = var_11;
                                var_14 = var_7;
                                arr_17 [i_4] [2] [i_2] [i_3] [i_4 + 1] = 64912;
                                var_15 |= ((var_8 ? var_12 : 13513));
                            }
                            var_16 = var_12;
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
