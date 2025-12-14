/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [9] [9] [1] [1] = (!7973144361620325126);
                    arr_10 [i_1] [i_1] [i_1] [i_1] |= 20924;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_4] [i_3] = (arr_5 [11] [i_1] [11] [i_1]);
                                arr_19 [i_4] [i_4] [i_2] [i_4] [i_0] = (arr_3 [i_1 + 1]);
                                arr_20 [i_0] [24] [i_3] [i_0] [24] [i_0] [24] |= ((-(arr_5 [i_4] [i_4] [i_4] [6])));
                                arr_21 [i_4] [i_4] [i_4] [i_2] [i_4] [i_0] [i_0] = (arr_2 [i_0]);
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = var_12;
        arr_23 [18] [i_0] = (arr_16 [i_0] [i_0] [24]);
    }
    var_16 = max(var_9, var_14);
    var_17 = var_13;
    var_18 = ((((((((var_1 ? 31 : 2653868668))) ? var_14 : var_14))) ? 4294967295 : var_13));
    var_19 = var_9;
    #pragma endscop
}
