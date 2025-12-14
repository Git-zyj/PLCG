/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [8] [16] [8] |= (((min(247, (arr_1 [i_1])))));
                arr_6 [i_0] = var_17;
                var_21 = 0;
            }
        }
    }
    var_22 = ((~((min((min(var_9, var_2)), 13)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, ((((arr_11 [i_3 + 1] [i_3 - 4] [i_3 - 2]) ? (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 3]) : var_13)))));
                    arr_16 [i_4] [i_2] [i_2] [i_4] = ((~(arr_7 [i_3 - 1])));
                }
            }
        }
        arr_17 [i_2] [i_2] |= ((((246 ? (arr_9 [i_2] [i_2]) : (arr_7 [i_2]))) - 253));
        var_24 = var_9;
    }
    #pragma endscop
}
