/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min((var_17 > var_8), (max(var_5, var_5)))), var_0));
    var_19 &= var_7;
    var_20 = var_0;
    var_21 = (min((min(var_2, ((24576 ? var_7 : -24558)))), var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((((((arr_4 [3] [5] [18]) ? var_14 : var_5))) / var_12)) / var_13);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [7] = var_4;
                            arr_12 [i_3] [i_3] [i_3] [i_3] &= (((((((-(arr_8 [8] [14] [i_2] [i_2])))) ? var_3 : var_14))) ? var_2 : var_11);
                            arr_13 [i_0] [i_1] [i_0] = (min(var_3, (min(var_9, (arr_8 [i_0 - 2] [i_2 + 1] [i_2] [i_1 + 1])))));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [22] [i_2] = (((arr_6 [12] [i_1] [i_2] [i_2]) / var_12));
                                arr_17 [i_0] [i_4] [i_2] [i_4] [i_4] [i_4] [22] = (min(-24558, (max(var_14, var_12))));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                arr_20 [i_5] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = (max((max(-24558, 7)), var_6));
                                arr_21 [i_0] [i_5] [20] [i_3 - 2] [i_5] [i_0] = (max(24574, 206));
                            }
                        }
                    }
                }
                arr_22 [i_0] = ((((max((arr_4 [i_0 + 2] [i_1 + 1] [i_1]), var_3))) || (((-(arr_4 [i_0 - 3] [15] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
