/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!157);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_19 -= var_6;
                                var_20 -= var_9;
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_1 - 1] [i_1 - 1]);
                                var_21 = 497751981;
                                var_22 = 99;
                                var_23 -= (((((5633 >> (497751981 - 497751971)))) ? (229 + var_14) : 129));
                            }

                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_24 = max(var_0, (max(497752003, ((min((arr_11 [14] [13]), 121))))));
                                arr_20 [i_0] [i_6] = (arr_3 [1] [i_1] [i_0]);
                            }
                            arr_21 [i_3] [i_0] = var_17;
                            var_25 = var_2;
                            var_26 = 134216704;
                        }
                    }
                }
                var_27 -= ((var_17 | ((var_12 / (max(98, 7333429050814254590))))));
                var_28 -= var_6;
            }
        }
    }
    #pragma endscop
}
