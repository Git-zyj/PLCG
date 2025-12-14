/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0] [i_1] = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : 7))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : ((((((arr_2 [i_1] [i_1]) + var_19)) << (((arr_2 [i_1 + 1] [i_1 + 1]) - 8443877325360228338)))))));
                var_20 = ((~(min(((3968 ? (arr_1 [10]) : (arr_3 [i_0]))), (arr_1 [i_0 + 2])))));
                var_21 = (((max(((max(-116, var_3))), ((248 ? var_1 : 2437836799)))) ^ 8646911284551352320));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [12] [i_1 - 1] [i_0] = arr_5 [i_0] [i_0 - 1] [i_0];
                            arr_11 [i_0] [i_0 - 2] [i_0] [i_0 + 1] = 94;
                            arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0] = (((arr_0 [i_3]) ? (((arr_1 [i_0 + 2]) << (((arr_9 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 1]) - 26)))) : ((var_2 ^ ((7 ? 7 : 95))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;
    var_23 = var_19;
    var_24 = var_1;
    #pragma endscop
}
