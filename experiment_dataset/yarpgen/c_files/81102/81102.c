/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_4] [i_3] [i_4] [10] [4] [i_3] = ((max((((arr_4 [i_1]) / var_11)), -var_7)));
                                var_15 = max((arr_4 [i_0]), (((max(0, (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]))) + 0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [3] [i_6] [i_5] [16] = (min((min((~var_1), -956229769)), 247));
                                var_16 = ((((((min(var_8, 16733344)) - (((arr_16 [12] [13] [i_0] [i_0]) - (arr_11 [i_0] [i_0] [16] [5] [i_0] [5] [i_0])))))) ? (((1783746076 - 255) + (arr_4 [2]))) : (var_7 - 218)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(((((min(252, var_10))) != (!var_4))), (!889126620)));
    var_18 = var_9;
    var_19 *= (((((var_9 ? var_7 : var_7))) ? var_2 : (max((max(var_10, var_12)), (var_14 & 38)))));
    var_20 = (((((!var_9) >> var_14))) ? (((!((max(var_14, var_7)))))) : ((var_0 ? -49 : var_10)));
    #pragma endscop
}
