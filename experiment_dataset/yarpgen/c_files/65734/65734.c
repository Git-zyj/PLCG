/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!12033193547214903721) ? (((((var_4 ? 102 : var_9))) ? ((max(48, 195))) : ((48 ? 1 : 154)))) : 153));
    var_13 *= (((max(1, var_9))) ? (min((((var_5 ? var_9 : var_7))), (max(var_6, var_11)))) : ((48 + ((227 ? var_1 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 += (((!(!0))));
                            var_15 = (((((!(arr_8 [i_2])))) - var_10));
                            arr_11 [i_0] [1] [i_1 + 2] [i_2] [i_1 + 2] = var_5;
                        }
                    }
                }
                var_16 += ((((((!((((arr_10 [0] [i_1] [i_0]) ? var_0 : var_7))))))) <= (((~2127200928) ? (~2637389185961953055) : ((2101592349 ? 2637389185961953055 : 147))))));
            }
        }
    }
    var_17 = ((-(max(((var_6 ? var_4 : var_11)), var_6))));
    #pragma endscop
}
