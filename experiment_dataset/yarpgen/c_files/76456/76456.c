/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 *= (((-1 + 2147483647) >> (((max((max((arr_7 [4] [i_0] [i_0]), var_13)), var_14)) - 8596474877877583828))));
                    var_17 = var_13;
                }
            }
        }
    }
    var_18 = (!var_7);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 = ((10 == ((((arr_19 [i_3] [i_7]) ^ (!var_4))))));
                                var_20 = (min(var_20, (((((arr_8 [i_3] [i_4] [i_5] [i_6]) + (arr_6 [i_3] [i_4] [i_6] [i_6])))))));
                                arr_21 [i_3] [i_3] [i_3] [i_6] [i_7] = ((((((var_3 ? var_0 : var_13))) % (((arr_13 [i_3] [i_3] [i_5]) / var_3)))));
                                var_21 += (min((((arr_15 [i_3] [i_4] [i_6]) ? (arr_15 [i_7] [i_6] [i_4]) : (((((arr_11 [8] [i_7]) != (arr_17 [i_3] [i_4] [i_5] [i_6]))))))), (((!(!var_14))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_26 [6] [i_4] [6] [i_8] [i_9 + 3] = (((((var_6 >> (var_14 - 3713839500)))) ? (min(15329, 5182097495542995691)) : ((((arr_9 [i_3] [i_3]) | ((var_2 % (arr_10 [i_4] [i_8]))))))));
                                var_22 = (!((((arr_0 [i_8 - 1]) | (arr_0 [i_8 - 1])))));
                                var_23 = (min(var_23, var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
