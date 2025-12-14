/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(3, -1504454712195597326)))));
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [14] = (-(((!(arr_6 [i_0] [i_0 + 1] [i_0 - 2] [5])))));
                                var_20 = (max(var_20, var_3));
                                var_21 = (min((~78), var_15));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [3] = (((((18446744073709551610 ? -120 : 87))) ? var_5 : ((((min(1008, var_16))) ? var_5 : -var_11))));
                            }
                        }
                    }
                    var_22 = (min(var_9, var_10));
                    var_23 = var_17;
                    var_24 += ((61888 ? 743830362 : 1089));
                }
            }
        }
    }
    #pragma endscop
}
