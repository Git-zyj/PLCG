/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-((var_2 ? 6488116730380294624 : var_14)))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 - 3] [i_0 - 1]);
        arr_4 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) ? -var_11 : (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : var_8)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 -= ((((!(arr_2 [i_1]))) ? ((((~(arr_8 [i_1] [i_2]))))) : ((~(arr_6 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 += (arr_17 [i_5] [i_4] [i_5] [i_5] [i_2] [i_1]);
                                var_21 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_14));
    var_23 = var_1;
    #pragma endscop
}
