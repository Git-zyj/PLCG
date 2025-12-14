/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_1;
    var_17 = (var_3 & var_10);
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_3 [1] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 |= (min(var_11, (arr_5 [i_2 - 3] [i_3] [i_3 + 1])));
                                var_21 += ((min(var_1, (((var_8 % (arr_4 [i_2] [i_2])))))));
                            }
                        }
                    }
                }
                var_22 ^= ((((var_6 ? ((min((arr_5 [i_1] [i_1] [i_0]), 142))) : 1)) / (((!0) ^ ((var_6 ? 246 : var_10))))));
            }
        }
    }
    #pragma endscop
}
