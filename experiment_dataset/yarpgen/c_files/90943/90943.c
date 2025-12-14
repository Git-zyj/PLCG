/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (118 ? 137 : (-9223372036854775807 - 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (((max(((var_8 ? var_10 : 268173312)), ((var_16 / (arr_1 [i_4]))))) * (arr_1 [2])));
                                var_23 = ((((-var_18 ? (145 - var_6) : (arr_4 [i_1 - 1] [i_1]))) << ((((var_7 ? ((min((arr_10 [i_0] [0] [i_3] [i_4]), var_18))) : var_17)) - 15621452693856829207))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((~-var_17) << (((max(var_16, var_10)) - 140))));
    #pragma endscop
}
