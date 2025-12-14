/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = ((arr_1 [i_3]) ? (arr_6 [i_1] [i_1] [7]) : (arr_0 [11]));
                            var_21 = (min(var_21, ((min((arr_3 [i_0]), (((arr_3 [i_0]) ? -10459 : (arr_3 [i_1]))))))));
                        }
                    }
                }
                var_22 = (min(var_22, ((min((((((-10459 ? (arr_6 [i_0] [15] [i_1]) : (arr_3 [i_1])))) ? ((2 ? -9214379632064264345 : 250)) : (arr_0 [i_1]))), (arr_0 [i_0]))))));
            }
        }
    }
    var_23 = ((10459 ? var_13 : (min((var_14 / var_17), ((max(12820, 14166)))))));
    var_24 = (((((var_2 ? var_1 : (!var_8)))) ? -1575537587 : -var_19));
    var_25 = var_12;
    var_26 = (~20);
    #pragma endscop
}
