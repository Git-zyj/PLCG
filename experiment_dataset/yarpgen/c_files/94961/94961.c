/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-var_19 + 8388607);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 += (256200269 >= var_17);
                                var_22 ^= (((~(arr_10 [i_0] [i_4] [i_2] [i_3] [i_4]))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((((arr_7 [i_1 + 4] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 - 1]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 4] [i_1 + 4]) : (arr_7 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2]))));
                            }
                        }
                    }
                    var_23 = (22716 == 2651576491);
                }
            }
        }
    }
    var_24 = (max(var_7, var_5));
    var_25 = ((((((((var_5 << (var_12 - 804147970)))) ? (max(var_4, var_10)) : 1643390821))) ? var_19 : var_15));
    var_26 = 1643390821;
    #pragma endscop
}
