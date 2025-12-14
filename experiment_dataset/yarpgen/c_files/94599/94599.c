/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0] [1] [i_1 + 3]) < (1 / 1)));
                arr_4 [i_0] [i_1] = ((arr_0 [i_0 - 1] [i_0 - 1]) ? (~1) : ((min((17969 && 1), (12 != var_18)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_13 [i_2] [21] [i_2] [i_2] = ((1 ? (((-(arr_12 [i_2] [i_2 + 1] [i_4])))) : (((arr_12 [i_2] [i_2 - 1] [i_2 - 1]) ? -4971290652827081660 : (arr_6 [i_2])))));
                    var_21 = (!var_4);
                    var_22 = var_14;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_23 = (((((~1) && (((4294967295 ? var_14 : var_10))))) ? (((arr_14 [15] [i_2]) ? (((arr_17 [3] [10] [i_2] [i_2] [1] [18]) ? 12146 : 16862)) : ((min((arr_12 [i_2] [i_4] [i_6]), 27881))))) : (min(1, -32306))));
                                var_24 = ((~((~(-9223372036854775807 - 1)))));
                                var_25 = max((41052 + 24486), var_19);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
