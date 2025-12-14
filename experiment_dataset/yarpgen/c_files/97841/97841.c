/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_18 ? var_4 : var_8))) ? var_15 : (~var_0)));
    var_20 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 ^= (min((arr_10 [i_0] [i_1] [2] [4] [0]), (((((arr_3 [i_1 - 1] [i_4]) ? (arr_10 [i_0] [i_1] [4] [i_3] [i_4]) : (arr_8 [i_0] [i_0] [i_0] [i_0]))) / ((min((arr_10 [i_4] [6] [1] [i_0] [i_0]), 996475706)))))));
                                var_22 ^= (!1);
                            }
                        }
                    }
                }
                var_23 = ((~(((((arr_6 [i_0] [i_0] [i_1]) | 877847265)) & (~var_15)))));
                arr_13 [i_0] [i_1] = (arr_6 [i_0] [i_1] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_24 [i_5] [i_5] [i_7 + 1] [i_5] = (arr_22 [i_5] [11] [i_6] [i_5] [8]);
                            arr_25 [i_5] [i_6] = (((((arr_23 [i_7 + 1] [i_7 - 1] [i_8 + 2] [i_8]) + 2147483647)) >> (7629151643798891931 - 7629151643798891905)));
                            var_24 ^= ((!(((~(((arr_20 [i_5] [i_6] [6]) ? -877847265 : var_17)))))));
                            var_25 = (arr_16 [i_5]);
                            arr_26 [i_6] [i_5] [i_7] [i_7] = ((~(arr_19 [i_5])));
                        }
                    }
                }
                arr_27 [i_5] = (max(877847265, 171));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_26 ^= var_15;
                            var_27 = (max(((7995363361883680305 % (arr_18 [i_9] [i_10]))), (((~(arr_18 [i_6] [i_6]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
