/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 0;
    var_17 = ((var_13 ? 0 : var_12));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, (((var_1 ? ((((arr_1 [i_0]) ? var_10 : 4294967295))) : var_6)))));
        var_19 = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 += ((!(((-var_13 ? -var_12 : ((32512 ? var_5 : var_7)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] |= (arr_5 [16] [16] [16]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_21 = (((((((!(arr_13 [i_1] [i_2] [i_3] [i_3] [i_3] [i_5]))))) != (arr_12 [i_1]))));
                                arr_16 [i_2] [i_2] [i_2] [16] [i_4] [16] = (((var_0 >> (var_5 - 32))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
