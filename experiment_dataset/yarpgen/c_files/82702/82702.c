/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = ((!((min(var_10, (var_11 % 4))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_8 [i_3] [23] [i_1] [1] [i_1] [i_0] = ((((((arr_4 [i_0 + 1] [i_0] [i_0 - 3]) * (arr_2 [13] [i_1 - 2] [i_0])))) ? ((((arr_2 [i_0 - 1] [i_1] [i_0]) ? (arr_2 [i_0 + 1] [i_2] [i_0]) : var_8))) : (max((arr_4 [i_0 - 3] [i_0] [i_0 - 2]), (arr_2 [i_0 - 1] [i_1 - 2] [i_0])))));
                        var_18 = (((-(!4))));
                        var_19 *= ((((((max((arr_4 [0] [i_3] [0]), (arr_6 [12] [12] [i_2] [i_3] [i_3])))) ? (((1 * (arr_6 [i_0] [i_0] [i_2] [i_1] [i_1])))) : (min(4203443248, 4203443260))))) / ((+(((arr_3 [i_3]) / (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_20 = ((72057594037927936 < var_14) * 4203443278);
                                var_21 += (arr_7 [i_4] [i_1 - 2]);
                                var_22 = ((min(((~(arr_4 [i_2 - 1] [i_0] [i_2]))), (((4203443255 ? 6 : 4203443272))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                arr_19 [i_7] [i_7] [i_6] = ((((((max((arr_15 [12]), (arr_6 [i_7] [i_7] [i_7] [i_6] [i_6]))))) / (min(var_1, 50)))));
                arr_20 [i_6] [5] [5] = (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
