/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_2 ? var_1 : var_5))) ? ((var_15 ? var_14 : var_7)) : (var_9 <= -23286)))) ? var_6 : (((((!var_13) || var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (((((var_4 | ((var_11 ? var_9 : 14404392780566357660))))) ? (((((arr_0 [i_2]) * -10832)) / var_8)) : (32740 * -26601)));
                    var_21 = ((var_16 ? ((((var_3 ? 511 : var_9)) ^ ((4502022760807200271 ? var_1 : var_11)))) : 25531));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = 14;
                                var_23 = var_11;
                                arr_13 [i_0] [i_0] [i_2] [5] [i_1] = ((((((15396 != 23283) ? -15069 : ((var_5 ? 32740 : var_4))))) ? ((((~-9627) ? (arr_11 [i_4] [i_2] [i_1] [3]) : var_10))) : ((((var_18 ? 9015848218496920456 : 25531)) % var_12))));
                                var_24 = (((arr_5 [i_4] [i_1] [i_2 - 1] [i_3]) ? var_3 : ((-(arr_3 [i_1 - 1] [i_1])))));
                                arr_14 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] [6] = (-32762 < 6630640791141598449);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
