/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0 - 2]) ? (((max((arr_1 [i_0 - 2]), var_2)))) : (((arr_0 [i_0 - 2]) % (arr_0 [i_0 - 2]))));
        var_12 = (min(var_12, (var_10 == 8191)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_8 [i_1] [i_2 - 1] [i_2 + 2] [i_0 + 2]) ? var_0 : ((~(arr_14 [i_0 - 2] [i_3] [i_1] [i_3] [i_4] [i_2 - 1])))));
                                var_14 = (min(((((!(arr_4 [i_0 + 2] [i_2]))) ? (arr_4 [i_0 - 2] [i_0 + 1]) : var_5)), (arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = -121;
                            }
                        }
                    }
                    var_15 = (max(var_15, (arr_12 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2])));
                }
            }
        }
    }
    var_16 = ((var_0 / (((var_9 && 149) ? (((min(var_0, var_3)))) : (min(var_1, -121))))));
    #pragma endscop
}
