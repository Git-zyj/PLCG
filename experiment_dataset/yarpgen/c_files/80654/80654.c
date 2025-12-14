/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((!var_4) | var_2)))));
    var_21 = var_16;
    var_22 = (max(var_22, ((0 ? 15663 : -1041431257))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = (min(var_23, ((45579 ? (arr_3 [i_0] [i_0] [i_0]) : 53610))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0 - 1] [i_1] = (var_3 ? var_5 : var_18);
                    var_24 = arr_3 [i_1 + 1] [i_2] [14];
                    arr_9 [i_1] [i_1 + 2] [i_2] [i_2] = (((arr_7 [15] [i_1] [i_1]) ? var_14 : (arr_5 [1] [i_2])));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_13 [i_1] [i_1] [i_1] = (-31801 <= 45579);
                    var_25 = (max(var_25, ((((arr_7 [i_0 + 1] [i_1 + 1] [i_3 + 1]) ? var_16 : (arr_7 [i_0 - 1] [i_1 + 1] [i_3 - 1]))))));
                    arr_14 [i_0] [i_1] = ((~(arr_12 [i_0] [i_1 + 1] [i_3 - 2])));
                }
            }
        }
    }
    var_26 -= ((42297 ? 935627854 : 16822));
    #pragma endscop
}
