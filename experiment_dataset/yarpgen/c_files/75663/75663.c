/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_1] [i_0] [i_0] [i_1] = var_1;
                    arr_8 [i_1] [i_1] [i_1 - 2] [i_1 - 2] = ((((8866543733537037310 ? 8866543733537037299 : 2147483647)) << (((~1610612736) + 1610612784))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_11 [i_1] = (((~var_0) << (var_13 == var_15)));
                    arr_12 [9] [i_1] = var_17;
                    var_20 = (min(var_20, (((+(max((-2147483647 - 1), (((arr_5 [i_0] [i_0] [i_3]) / var_13)))))))));
                    var_21 = 8866543733537037297;

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (min(var_22, ((((max(0, 2825013761310729495)) ^ (((arr_6 [i_0] [i_1 - 2] [i_4]) ? 12767109747831460597 : var_3)))))));
                        var_23 = (min(var_23, -1791782366240693702));
                    }
                }
                var_24 ^= ((var_15 ? (min(34993, (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2]), var_12)))) : (((min(16058605401184252916, 171)) + 14912))));
            }
        }
    }
    var_25 = ((max((((30518 ? 379672031 : var_5))), (((-6074608424277434283 + 9223372036854775807) >> (1795087792900796206 - 1795087792900796176))))));
    var_26 |= (var_12 > var_11);
    var_27 = var_1;
    #pragma endscop
}
