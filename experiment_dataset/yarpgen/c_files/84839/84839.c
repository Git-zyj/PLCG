/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((var_9 && ((((arr_9 [i_0] [i_1] [i_2] [i_3]) ? var_0 : 4095)))));
                        var_14 = (max(var_14, ((((((-7757946924484357937 ? -1 : -1013724069))) ? ((((arr_4 [i_3] [i_2] [i_1]) ? (arr_7 [2] [2]) : 1))) : var_13)))));
                        var_15 = ((arr_7 [i_1 - 1] [7]) ? (-34 * var_5) : ((1 ? 4 : 0)));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = var_1;
                        arr_13 [i_1] &= -44;
                    }
                    arr_14 [i_1 + 3] = (((((((max(var_6, 34))) ? (arr_10 [1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : -32316))) ? (min((arr_3 [i_1 + 1] [i_1 + 4]), ((var_7 ^ (arr_0 [i_2]))))) : (((arr_6 [15]) >> ((1 >> (-32766 + 32782)))))));
                }
            }
        }
    }
    var_16 = ((((max(var_0, 2031686981)) / -98)));
    var_17 = var_3;
    var_18 = (~var_10);
    var_19 = var_2;
    #pragma endscop
}
