/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_6);
    var_11 ^= var_7;
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = (((arr_12 [i_0] [i_0] [11] [i_0]) ? (arr_13 [i_4] [16] [i_2] [i_1] [i_0]) : ((((arr_8 [i_0] [18] [i_0] [i_4]) ? 9648 : ((var_0 / (arr_10 [i_4] [i_1] [i_2]))))))));
                                var_13 = var_3;
                                arr_15 [i_4] [i_1] [1] [i_1] [i_0] = ((((min(0, (arr_13 [i_2] [i_2] [i_2] [10] [8])))) % (((arr_4 [i_1] [i_2] [i_3 - 2] [i_4]) ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]) : (max((arr_8 [i_3] [i_3] [i_2] [1]), var_8))))));
                                var_14 = ((((~(105553116266496 > 1)))) ? ((32767 + (arr_12 [i_0] [i_3 + 1] [i_3 + 1] [10]))) : (((var_9 % (((-32767 - 1) ? (arr_7 [9] [1] [i_2] [i_3]) : 1083034768))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] = ((min((((var_8 ? var_3 : var_4))), (-48883355856773026 | 1))) / (((1083034768 ? ((max(var_7, (arr_4 [i_0] [i_1] [i_1] [i_2])))) : 49))));
                    arr_17 [i_1] [i_1] [i_2] = ((1 ? (159049763 | 32751) : 1));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [15] [20] [i_2] [i_1] [i_2] = (((((31 ? 1 : 32767))) ? ((((arr_18 [i_1]) + 263953070))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                                arr_24 [i_0] [i_0] [22] [i_1] [i_0] = ((var_6 ? (arr_11 [i_0] [i_1] [10] [6] [21] [i_2]) : ((((arr_18 [i_0]) / (5711474420197268343 > -13939))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
