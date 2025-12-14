/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [8] [i_2] [1] &= 99;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] |= (max((((arr_6 [i_2] [i_3] [15]) * 2113929216)), (5631281093371000159 > 2181038080)));
                                arr_17 [i_0 - 1] [0] [i_0] [i_3] [i_3] = -112;
                            }
                        }
                    }
                    arr_18 [12] [12] [i_0] [i_2] = 28286;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_0] [i_5] [i_6] = (((((arr_2 [i_0] [i_5 + 1]) ? (arr_22 [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_0] [i_0 + 1]) : (arr_21 [i_0 - 1] [i_5 + 1] [i_2] [i_2] [i_0])))) ? (((arr_14 [20] [i_5 + 1] [20] [i_5] [12]) ? (arr_21 [1] [i_5 + 1] [i_2] [i_5 + 1] [i_0]) : (arr_2 [i_0] [i_5 + 1]))) : ((((arr_14 [i_0] [i_5 + 1] [i_2] [i_5 + 1] [i_6]) ? (arr_22 [i_0] [i_5 + 1] [i_5 + 1] [1] [i_6] [i_0 - 2]) : (arr_22 [i_0] [i_5 + 1] [i_1] [i_5 + 1] [i_6] [i_0 + 2])))));
                                arr_24 [i_0 - 1] [i_0] = (min((((((arr_21 [i_0] [i_0] [i_0] [i_5 + 1] [i_0]) ? 18446744073709551615 : (arr_14 [i_0] [i_1] [i_2] [i_0] [i_2]))))), (max((((arr_14 [i_0] [i_0] [i_2] [i_0] [i_6]) ? (arr_5 [i_0] [13] [0] [i_0]) : -1)), ((2113929216 ? -4100414409676958724 : (arr_2 [i_0] [i_6])))))));
                                arr_25 [i_0] [i_1] [i_2] [i_0] = ((2181038080 ? 0 : 4100414409676958712));
                                arr_26 [i_6] [i_1] [4] &= (max((((arr_9 [i_0 + 1] [i_0 - 1] [21] [i_5 + 1]) ? (arr_9 [i_0 + 1] [0] [i_0 - 2] [i_5]) : (arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_6]))), (((!(arr_9 [i_0 - 2] [i_0 - 2] [i_5 + 1] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
