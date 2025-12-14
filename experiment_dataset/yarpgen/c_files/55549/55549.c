/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min((~var_11), var_10)), (((var_13 < (((min(var_16, var_15)))))))));
    var_18 = ((var_14 ? var_10 : (((0 ? 1 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_4] [20] = var_6;
                                arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_1] [i_4] [i_4] = (arr_4 [i_0 + 1]);
                            }
                        }
                    }
                }
                arr_12 [i_1] = ((((1 ^ ((var_13 ? (arr_4 [i_0]) : var_9))))) ? ((((min((arr_1 [i_0]), var_2))) ? (arr_1 [i_0 + 1]) : (~var_16))) : ((((!(arr_0 [i_0 - 1]))))));
                arr_13 [i_0 - 1] = min((arr_7 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_0] [i_1] [8] [i_0]));
            }
        }
    }
    var_19 = ((65529 ^ (((1 ^ 1) ? (-119 == 18446744073709551615) : var_15))));
    var_20 = (~var_3);
    #pragma endscop
}
