/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_16 *= ((var_1 ? (max(2047, -7081)) : ((31 ? (arr_4 [i_1 - 1] [i_1 - 2]) : -656561496))));
                        arr_10 [i_2] = (~var_11);
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_2] = (min(1073676288, var_2));

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_17 = 2;
                            var_18 = -656561503;
                        }
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_5] = (min(((((arr_7 [i_2] [i_5]) ? (arr_15 [i_5] [i_2] [i_1] [i_1] [i_5]) : var_3))), (min((-656561477 / var_11), (((656561451 ? var_6 : (arr_3 [i_0] [i_0]))))))));
                        arr_17 [i_0] [i_1 - 2] [i_5] [i_5] = (((min(var_12, var_10)) & (1 && 1)));
                    }
                    arr_18 [i_0] = ((var_14 ? (min((((arr_6 [i_2] [i_2] [0] [i_0]) ? var_10 : var_13)), 1)) : var_5));
                    var_19 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
