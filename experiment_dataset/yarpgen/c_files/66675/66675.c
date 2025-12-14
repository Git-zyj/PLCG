/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-((-var_3 & (~var_13))));
    var_16 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 -= (((1879048192 >> (5183501397450225838 - 5183501397450225826))));
                            var_18 = (min((max((arr_1 [i_0 + 2] [i_0 + 4]), var_13)), -16388));
                            arr_12 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] = var_6;
                        }
                    }
                }
                arr_13 [i_0 + 1] [i_0] = (max(((max((~var_2), (var_10 | var_7)))), (((arr_7 [11] [i_0 + 4] [i_0 + 3]) ? (max(13263242676259325774, (arr_1 [i_1] [i_1]))) : (arr_7 [i_1] [12] [i_0 - 1])))));
                arr_14 [i_1] [i_0] [i_0] = ((arr_4 [i_0 + 2]) * (((arr_0 [i_0 + 1] [i_0]) - (((8388604 ? (arr_2 [i_0]) : var_6))))));
                arr_15 [i_0] = (((((min((arr_3 [18]), (arr_1 [i_0] [i_0]))))) ? (min(var_11, var_6)) : var_2));
            }
        }
    }
    var_19 = (min(var_6, var_14));
    #pragma endscop
}
