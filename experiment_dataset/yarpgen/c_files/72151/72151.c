/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_8 [i_1] [i_1 + 1] [i_1]);
                                arr_18 [i_1] [i_3] [i_2] [5] [i_1] [i_1] = (arr_2 [3]);
                                arr_19 [i_1] [i_1] = (max((((0 & 242) + 671207423)), ((max(27, var_4)))));
                            }
                        }
                    }
                    var_19 = (max(var_19, ((((arr_7 [16]) | var_18)))));

                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [12] [i_1] [12] [16] = ((((max(var_13, (var_18 + var_10)))) / (max((max(0, 2593824938555892053)), (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - -2723961465804841220))))));
                        var_20 = (max(var_20, var_6));
                        var_21 = (min(var_21, (((-(arr_21 [i_1] [13]))))));
                    }
                    var_22 = (arr_10 [i_2] [22] [i_2] [i_0]);
                    var_23 |= ((~(arr_21 [i_1 + 1] [i_1 - 1])));
                }
            }
        }
        arr_23 [17] = ((var_18 * (max((((-9223372036854775807 - 1) / 9196931203125035370)), 0))));
    }
    var_24 += var_10;
    #pragma endscop
}
