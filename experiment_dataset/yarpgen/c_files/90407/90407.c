/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_17);
    var_21 = ((((max(var_4, (~var_14)))) ? (((1 | 65) ? 1 : 1)) : (((~var_6) ? var_19 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_22 -= ((((arr_0 [i_0 + 3]) > (arr_0 [i_0 + 3]))) ? (arr_0 [i_0 + 3]) : (((arr_0 [i_0 + 3]) ? var_5 : (arr_0 [i_0 + 1]))));
                var_23 *= ((-(arr_0 [i_0])));
                var_24 = ((-((((arr_3 [2] [i_1 + 2] [i_1 + 3]) ? (arr_4 [1] [i_1 + 2]) : (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [1] [6] [i_0] [i_2] [i_4] = max(157, 0);
                                var_25 *= ((((((arr_12 [i_1 + 1] [4] [i_1 + 2] [i_1 + 2]) ? (arr_12 [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_4]) : (arr_12 [i_1 + 1] [i_1] [i_1] [i_4 + 1])))) ? (min((arr_7 [i_1 + 1] [i_2] [i_3] [i_4]), (arr_12 [i_1 + 1] [7] [i_1 + 2] [4]))) : ((-(arr_7 [i_1 + 1] [i_3] [i_3] [i_4])))));
                                var_26 = (((~var_4) & (((((60 ? 161 : 125))) ? 116 : (arr_2 [i_3] [i_0])))));
                                var_27 *= (((arr_3 [1] [1] [i_2]) ? ((max((arr_12 [i_4] [i_3] [i_2] [i_1]), (arr_1 [i_3])))) : ((var_7 ? (arr_7 [i_2] [i_2] [i_2] [3]) : (arr_6 [1] [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = (max(var_10, (((var_13 ? (var_7 >> var_19) : (min(-244394487, 831386995)))))));
    #pragma endscop
}
