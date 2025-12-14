/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_1 [i_0]) ? ((((((max(-1283061979, var_16))) || (arr_0 [i_1 - 3] [i_1 - 1]))))) : (((arr_4 [i_1 + 1] [i_1 + 1]) ? 4294967295 : 979064907))));
                arr_6 [i_0] [i_0] = ((var_18 >= (((arr_4 [i_1 + 1] [i_1 - 2]) ? (arr_2 [i_1 - 2]) : 55))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_2] = (((65535 | (arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1]))) - ((((arr_2 [i_1 - 3]) || var_12))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 += (min((((var_8 + 9223372036854775807) >> ((-979064904 ? var_10 : -23)))), 979064907));
                                var_20 = (min(var_20, (arr_0 [i_4] [i_4])));
                            }
                        }
                    }
                    var_21 *= (((((var_13 & ((1 ? 1 : 117))))) != var_7));
                }
            }
        }
    }
    var_22 = ((var_5 ? (var_0 - var_10) : (max(var_7, 63))));
    var_23 = (min(var_23, ((min(var_16, var_2)))));
    var_24 = var_4;
    #pragma endscop
}
