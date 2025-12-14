/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = var_7;
                                var_16 &= -4077252605511259001;
                                arr_12 [i_3] = ((-(max((arr_11 [i_0] [i_4]), var_12))));
                                var_17 = ((~(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_4])));
                                arr_13 [i_3] [i_3] [i_2] [i_2] [9] [9] [i_3] = (((((((!(arr_11 [i_0] [i_0]))) ? -42885 : 0))) ? ((((42872 ? (arr_10 [i_4] [i_3] [i_2] [i_2] [7] [i_0] [i_0]) : var_6)) + (arr_9 [10] [i_2] [i_2] [i_1] [i_3]))) : (-9223372036854775807 - 1)));
                            }
                        }
                    }
                }
                var_18 = (min(-30251, (((arr_8 [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_1] [0] [i_0])))));
            }
        }
    }
    var_19 = (max((!-19808), (max(var_0, (!13398806187262165407)))));
    #pragma endscop
}
