/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_6, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = ((max(45098, 32764)));
                                var_20 = (arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_4 + 2]);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [12] [i_4 - 3] = ((((!((((arr_1 [i_0]) ? 101 : -2928438459240985186))))) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (max((((arr_7 [i_0] [i_1] [i_1] [i_0]) >> (var_0 - 36))), ((max((arr_4 [i_0] [i_1] [i_3 - 2]), 0)))))));
                            }
                        }
                    }
                    var_21 = var_5;
                }
                var_22 = (max(var_22, (((-0 ? ((min((arr_5 [i_0] [i_0] [i_1]), (arr_8 [1] [i_0] [i_0] [i_0] [i_0])))) : (((arr_8 [i_0] [1] [i_1] [i_1] [6]) ? var_7 : (arr_9 [i_1] [i_1] [i_1] [i_1] [20] [i_0] [i_0]))))))));
                var_23 = (max(var_23, ((((((((arr_5 [i_0] [i_1] [14]) ? -19899 : (arr_3 [2] [6] [6]))) * (arr_9 [3] [i_1] [i_0] [3] [i_0] [3] [i_0])))) || 6143107824943229085))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_14 [i_5] = (((arr_13 [i_5] [i_5]) | var_10));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_24 -= (65535 < 1);
                    arr_21 [20] [20] [19] = ((-(arr_13 [i_6 - 1] [i_6])));
                    arr_22 [i_5] [1] [i_7] [i_5] = (arr_18 [i_6 + 1] [i_6 - 1] [i_6 - 1]);
                    var_25 = (min(var_25, (5 < -8832)));
                }
            }
        }
        arr_23 [i_5] = (82 % (-5076 | -110));
    }
    #pragma endscop
}
