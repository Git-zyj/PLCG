/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_5;
    var_19 *= var_3;
    var_20 *= var_11;
    var_21 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (-((var_1 ? (arr_3 [i_0 - 1] [i_1 - 2]) : (arr_3 [i_0 - 1] [i_0 - 1]))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_22 = 1;
                    var_23 = (min(var_23, (((((((arr_1 [i_0] [i_0 - 1]) ? var_7 : (arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))) - (var_2 ^ var_13))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] = (((((arr_5 [i_0] [i_1] [i_3]) ? -1374020495707441084 : 1))) ? var_7 : ((((1 ? var_0 : var_14)) - 1)));
                            arr_13 [i_0] [i_1 + 1] [i_3 + 1] = ((var_1 ^ (((4265872524 ? var_15 : 1080582955)))));
                            var_24 = var_5;
                            var_25 = (arr_5 [i_0] [i_0 - 1] [i_0]);
                            arr_14 [i_0 - 1] [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_4 - 1] = var_8;
                        }
                    }
                }
                var_26 *= (arr_3 [i_1 + 1] [i_1 - 2]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_27 |= (max((max((var_7 / -1097330646369432852), var_5)), -1));
                            arr_20 [i_6] [i_5] [i_5] [i_0 - 1] = (arr_16 [i_0] [i_1 + 1] [i_5 + 2]);
                            arr_21 [i_0 - 1] [i_5] [i_5] [i_6] [i_0] = var_6;
                            var_28 *= (((((arr_0 [i_5]) ? (min(1, -1)) : var_16)) & (arr_11 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
