/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max(9223372036854775807, var_4));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (min(((((arr_9 [i_0] [i_0] [i_0 - 4] [i_0] [i_2 + 2]) > (!255)))), (arr_8 [i_4] [i_0] [i_2] [i_3] [i_3])));
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_3] [i_4] = (((arr_2 [9]) >= ((var_0 ? (arr_7 [i_0 + 1] [i_3]) : (arr_2 [i_0 - 4])))));
                                var_17 *= (((+(((arr_6 [i_3] [3] [i_1] [i_0]) ? var_11 : var_11)))) + (arr_6 [i_0] [i_3] [i_2] [i_3]));
                                arr_13 [14] [i_3] [i_2 - 1] [i_0 - 3] [i_4] = (-9223372036854775807 - 1);
                                arr_14 [i_3] [i_4] = var_1;
                            }
                        }
                    }
                }
                arr_15 [i_1] = ((((((arr_7 [i_0 - 3] [i_0]) ? (arr_1 [i_0 - 1]) : (255 < var_1)))) ? ((var_12 ? (((arr_8 [24] [i_1] [i_0] [i_1] [i_0]) ? var_13 : var_9)) : (((var_4 ? 219 : var_10))))) : (((((arr_3 [i_0 - 3] [i_0 - 3] [i_0 + 2]) != var_3))))));
                arr_16 [i_0] [12] = (arr_7 [i_1] [i_1]);
                var_18 = (min(var_18, (((((((arr_0 [i_0 + 2]) ? var_13 : var_1))) || var_13)))));
            }
        }
    }
    var_19 = var_8;
    var_20 = var_5;
    #pragma endscop
}
