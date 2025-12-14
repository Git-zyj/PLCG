/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 ? (max(((((-127 - 1) - (-127 - 1)))), (max(var_9, 255)))) : ((var_15 ? 12657647282679846810 : -1387864873))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = var_6;
                arr_6 [i_0] [3] = ((var_13 ^ ((var_1 ? var_9 : (arr_3 [i_0] [i_1] [1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_2] [i_3] [i_4] [i_4] = var_3;
                    arr_17 [i_2] = ((max((12197307579834473240 || 255), (max(var_2, 20413)))));
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    var_22 -= ((!(((~(~20413))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] = ((0 ? ((((var_18 && 255) || (!var_15)))) : ((((max((arr_13 [i_5] [i_2]), 1888870785))) ? var_11 : ((255 ? -123 : var_2))))));
                                var_23 = (max((((!(arr_15 [i_2] [i_3] [i_5 + 3] [i_6])))), (max(20400, (arr_15 [i_3] [21] [i_5 - 1] [i_5 + 2])))));
                                var_24 = (((max((((arr_9 [i_3] [i_2]) ? 8661514337781619416 : 2855519005)), var_1)) ^ 400311488));
                            }
                        }
                    }
                    arr_27 [i_5] [i_5] [i_5 + 3] = 1;
                }
                arr_28 [i_2] [i_2] = (~((109 ? (arr_15 [1] [1] [i_3 + 1] [i_2]) : (arr_15 [i_2] [i_3 + 1] [i_3 + 1] [i_2]))));
                arr_29 [i_2] [i_2] [i_2] = (~var_18);
            }
        }
    }
    #pragma endscop
}
