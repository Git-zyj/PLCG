/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_6 | var_4) | (((var_8 && var_2) ? -65536 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] |= ((+(((var_11 == 11199) ? (((arr_4 [i_0] [i_1] [i_0]) ? 1 : 3245905749)) : 28998))));
                arr_6 [i_0] [i_1] [i_1] = (!65527);
                var_14 = (((arr_3 [i_1] [i_1 - 1] [i_1 - 1]) / ((-1 ? -28998 : (0 / var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((+((((((arr_7 [i_1] [i_1] [i_1 - 2]) ? (arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0]) : (arr_11 [i_0] [i_1] [i_1] [i_3] [10])))) ? var_1 : ((541304286 ? 17864461904194020583 : 36538))))));
                                arr_14 [i_1] [i_1] = (((((((-11461 ? (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) : (arr_3 [i_1] [i_1] [i_1]))) * ((18446744073709551615 ? var_10 : var_0))))) ? (((((arr_1 [i_2]) / (arr_2 [15]))) * (arr_10 [i_1] [i_1 - 1] [i_2]))) : -var_10));
                                arr_15 [i_0] [i_1] [i_1] [i_3] = (((((((13245483117648395503 + (arr_11 [i_2] [i_2] [i_1] [i_2] [i_2])))) ? (arr_3 [i_1] [i_1 - 1] [i_1]) : (arr_0 [i_3]))) > (((-var_1 ? 396528003 : 1)))));
                                arr_16 [i_4] [i_1] [i_2] [i_1] [i_0] = ((((18213 && (arr_8 [i_1] [i_1] [i_4] [i_3]))) ? ((((arr_10 [i_1] [i_1] [1]) / -1169935582))) : ((28998 ? var_11 : (arr_8 [i_1] [i_1] [i_2] [i_3])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1 - 1] [i_5 - 3] [i_6] [i_1] = ((-((-(arr_8 [i_1] [i_1] [i_1 - 1] [i_1])))));
                                arr_25 [i_1] [i_6] [i_5] [i_1 - 2] [i_1] = ((-(var_12 / var_10)));
                                var_16 |= (((((((var_10 ? 2 : var_10)) * (6512 / -1605069897)))) - (((var_2 / (arr_3 [i_0] [i_6] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
