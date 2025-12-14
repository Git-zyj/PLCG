/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((-1 + 9223372036854775807) << (((((-71288800 < -71288800) ? 71288821 : ((-25631 ? (arr_3 [1] [i_3]) : 8878)))) - 16326851734354205638))))));
                                arr_15 [i_2] [3] [6] [3] [i_4] = (((((((135936234 ? 2064384 : -15))) ^ (((arr_2 [4]) | (arr_13 [i_4] [i_1]))))) / 37));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((-(max((arr_1 [i_1 - 2]), -7119284823864920217))))));
                    var_17 = ((max((((1073739776 ? var_13 : 49))), ((var_13 ? (arr_7 [i_0] [i_1] [i_2]) : (arr_1 [i_0]))))) >> (((((~0) & (min(-8730227037940611233, (arr_13 [i_0] [i_1]))))) + 8730227037940611256)));
                    var_18 = -19;
                }
            }
        }
    }
    var_19 = max((((~((max(-119, -454)))))), (min(((-71288821 ? var_14 : var_0)), (~-27))));
    #pragma endscop
}
