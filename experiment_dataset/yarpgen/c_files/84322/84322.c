/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 ? (~3767218211156420294) : (var_14 == var_6)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [11] = ((((((arr_4 [i_0]) ? (arr_2 [i_1] [i_2]) : 9223372036854775807)))) ? var_2 : (max(3767218211156420306, (var_9 & 14679525862553131321))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [11] [i_3] [7] [1] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0]);
                                var_18 += ((-1540730769 ? (max((arr_3 [i_1] [i_1]), -3767218211156420295)) : (((arr_10 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0 + 1]) | (arr_7 [i_0 - 1])))));
                            }
                        }
                    }
                    arr_14 [1] [i_1] |= max((max(14679525862553131320, ((((arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0]) != (arr_4 [i_1])))))), var_9);
                    arr_15 [i_0 + 1] [i_0] [i_2] [i_2] = (max(25, ((var_0 | (arr_2 [8] [i_0])))));
                }
            }
        }
    }
    var_19 = (~((((min(3767218211156420294, var_13))) ? (max(var_7, var_6)) : var_14)));
    var_20 = (min(((((min(43998, var_1))) ? ((var_9 ? var_11 : var_3)) : var_5)), 1));
    #pragma endscop
}
