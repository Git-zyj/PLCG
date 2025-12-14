/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(var_13, var_6))) ? -var_0 : var_0))) ? (!var_14) : var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (max((~68), (min(31362, (((arr_4 [i_0] [i_1] [11]) & var_14))))));
                                var_19 = (((~-750) ? (max(9252649400735401361, 4294967292)) : var_0));
                                arr_14 [i_4] [14] [i_4] [i_1] [i_1] [i_4] = (((((var_14 ? (((!(arr_8 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [i_0])))) : ((min(var_17, (arr_2 [i_0]))))))) ? ((((min(-99, (arr_11 [i_4] [i_1] [i_4] [i_3] [i_4 - 1])))) ? var_1 : (arr_7 [i_2 + 2] [i_2 + 2] [i_2]))) : (((((max(3, 13))) ? (((arr_1 [i_2]) * var_15)) : (!var_11))))));
                                arr_15 [i_0] [1] [i_2] [i_2] [6] [i_3] [i_4] = -32767;
                            }
                        }
                    }
                    var_20 = var_5;
                    arr_16 [i_0] [i_0] [i_0] [i_0] |= (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
