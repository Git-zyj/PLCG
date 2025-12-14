/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((var_15 ? var_6 : var_9))) * ((4070841638 ? 4060293834 : var_12))))) != (max(0, (((var_6 ? var_12 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((+(max((arr_4 [i_0] [i_1]), var_2))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (max(-280977320, (max((arr_7 [7] [i_0] [i_0] [i_3 - 2]), (arr_7 [20] [i_0] [i_0] [i_3 + 1])))));
                            arr_12 [i_0] = (min((arr_0 [i_0]), 32767));
                        }
                    }
                }
                var_18 = (max(((((((6618 ? 16 : 87))) ? (var_14 && var_8) : (((arr_11 [13] [i_1] [i_0] [i_0] [i_0]) ? 16 : -88))))), ((var_8 ? ((((!(arr_0 [i_1]))))) : ((~(arr_9 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
