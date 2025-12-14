/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [8] [i_2] [8] [i_0] |= ((-(min((~15985981038428842996), 2337370932365800467))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = 105;
                                arr_14 [i_0] [i_0] = (min((((696012670 < ((((!(arr_11 [i_0] [i_3] [i_2] [i_0])))))))), var_10));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_1] = (!var_10);
                var_20 = (max(var_20, (((-((((var_18 > -6225205708595968090) && (((-6225205708595968090 ? 60 : -105)))))))))));
            }
        }
    }
    var_21 = ((!(var_1 / var_17)));
    var_22 = var_9;
    var_23 = (max(var_18, (((38 ? -15808 : 16109373141343751154)))));
    #pragma endscop
}
