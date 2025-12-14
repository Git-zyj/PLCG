/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = (~-22550);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = -var_5;
                arr_5 [i_1] = (((((~(arr_3 [i_0] [i_1])))) ? -var_10 : (((7 ? var_4 : (arr_2 [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 ^= arr_1 [4];
                                var_23 ^= 12053;
                                arr_16 [i_3] [i_0] [i_2] [i_3] [i_1] = (((arr_9 [i_0 - 1] [i_0] [i_2] [i_0 - 1]) ? (((max(var_16, var_1)))) : (min(((15642281811658768794 / (arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_1]))), -7))));
                                arr_17 [i_0 - 1] [i_1] [i_2] [i_3] [i_1] = ((((((((arr_11 [i_2] [i_1]) > var_4))) | (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))) | (((arr_14 [i_0] [i_1] [i_1] [i_3] [i_2 + 1]) ? var_17 : ((var_19 ? var_7 : -1569685000))))));
                            }
                        }
                    }
                }
                var_24 = (max(((~((var_1 % (arr_6 [i_0] [i_0] [i_0]))))), var_19));
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}
