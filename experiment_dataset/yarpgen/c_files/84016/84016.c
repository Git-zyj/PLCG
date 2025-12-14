/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = (-2458896927112237813 / 45940);
                                arr_14 [3] [i_1] [i_1] [17] [i_0] = ((((((arr_1 [i_1]) % var_10))) ? (((arr_1 [i_3]) ? 23455 : 4294967275)) : (~-20957)));
                                arr_15 [i_3] [i_3] [i_2 - 2] [18] [0] [6] [i_1] &= (((!539287026402281638) ? (((((min(42080, (arr_9 [1] [i_1] [0] [i_2] [12])))) ? (arr_5 [10] [13] [7]) : (arr_1 [3])))) : ((((max(4526, var_0))) ? (max((arr_2 [17] [i_4]), (arr_2 [i_0 - 1] [11]))) : 0))));
                                arr_16 [1] [i_0] [i_3] [i_4] = ((8171253415245494285 ? (arr_7 [13] [i_1] [i_0]) : ((((arr_1 [i_0 + 4]) ? 47683 : var_2)))));
                            }
                        }
                    }
                    arr_17 [6] [i_0] = 1054429365306109283;
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = var_10;
    #pragma endscop
}
