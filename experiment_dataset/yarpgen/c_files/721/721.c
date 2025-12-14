/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((18421 != var_12), 3862648993)), var_1));
    var_18 = ((!((min(var_16, (((-80 ? 125 : var_8))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = (arr_8 [16] [i_2] [i_2]);
                        var_20 = (((arr_6 [i_2] [i_2 + 1] [4]) == 16));
                        var_21 = (((~(arr_3 [i_0]))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_14 [13] [i_4] |= ((~(arr_3 [1])));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_22 = ((!(((~(arr_9 [i_0] [0] [i_0] [i_4] [i_0]))))));
                arr_17 [i_4] [6] [2] |= ((((((arr_7 [i_0] [i_4] [8]) || (arr_12 [i_0])))) % var_13));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_22 [17] [i_4] [i_6] [i_4] &= (((arr_19 [i_0] [i_0] [i_0] [10]) == (arr_4 [8] [11])));
                arr_23 [i_0] [15] [1] [16] = (!12871437318010391896);
                arr_24 [i_0] [i_0] [i_0] [19] = (arr_15 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((42437 == (arr_10 [i_0] [i_4] [i_4] [i_4] [i_4]))))));
                            arr_30 [i_0] [i_0] [i_8] [i_7] [7] = 3;
                            arr_31 [i_4] [i_4] [i_8] [i_6] [i_8] [i_4] [17] = ((~(arr_3 [i_0])));
                            var_24 = (((arr_13 [i_0]) | (arr_12 [i_0])));
                        }
                    }
                }
            }
            arr_32 [i_4] [i_4] = ((((arr_13 [i_4]) ? 2330317844 : (arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]))) < (arr_10 [i_0] [i_4] [i_0] [i_0] [i_0]));
            arr_33 [i_0] [i_4] [i_4] = (((arr_12 [i_4]) * (arr_27 [18] [18] [18] [1] [i_0])));
        }
    }
    #pragma endscop
}
