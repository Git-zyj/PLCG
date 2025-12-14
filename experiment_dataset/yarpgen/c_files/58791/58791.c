/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (((var_6 != ((9493398423313397648 ? ((max((arr_2 [i_2 - 3]), 0))) : 98)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((max((((max(var_0, 9493398423313397648)) * (((0 ? (-32767 - 1) : -1661991970))))), ((max(7418, ((var_0 ? -32759 : var_0))))))))));
                                var_12 = (min(var_12, ((((0 - (var_8 + 3)))))));
                                var_13 = (min(var_13, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (((~3557727833) ? (((var_8 ? var_4 : 123))) : (((var_0 * var_5) ? -103 : var_3))));
    var_15 |= ((var_1 < (max(var_9, (max(63488, 6434472578532543021))))));
    var_16 = (~var_7);
    #pragma endscop
}
