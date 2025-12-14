/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((var_11 ? ((var_14 ? var_7 : var_10)) : var_9))) ? var_16 : (var_2 != 2892427181)));
    var_19 = (max(var_19, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((((arr_3 [i_0] [i_1]) * var_5))) ? (arr_3 [i_0] [i_1]) : (min(((((arr_3 [1] [10]) ? (arr_1 [6] [i_0]) : var_15))), (max(10115465664815758500, 1402540092)))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = ((((((var_12 * var_8) ? (arr_7 [i_0] [i_1] [i_2]) : ((((arr_6 [i_0] [i_1] [i_2 - 2] [i_3] [i_1]) >= (arr_4 [i_0]))))))) ? (min((arr_5 [i_2 - 2] [3] [i_2]), (((arr_1 [i_0] [i_0]) ? var_5 : (arr_3 [i_0] [i_0]))))) : ((var_14 ? (arr_1 [i_2 - 2] [i_2 - 2]) : 250))));
                            var_22 = (+(((224 > 245) >> (((arr_6 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 2]) - 14480)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
