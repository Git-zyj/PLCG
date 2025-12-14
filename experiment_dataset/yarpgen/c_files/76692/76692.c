/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((~(max(var_4, var_3))));
    var_17 = (var_4 && var_15);
    var_18 = (min(var_18, ((((((-676 ? var_14 : (var_14 >= var_7)))) < var_15)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((!var_6) % ((107 ? (arr_6 [i_2] [i_1] [i_0] [i_2]) : 12127))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [17] [i_1] [4] [2] [7] = (((arr_6 [1] [i_3 + 1] [i_2] [i_3 - 1]) ? (arr_6 [i_3] [i_3 + 1] [i_3 + 1] [i_3]) : (arr_4 [i_2] [i_3 - 1] [i_2] [i_3])));
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] = ((var_6 ^ (arr_5 [i_0] [i_1] [i_2] [i_3 - 2])));
                        var_20 = (4727106508661892610 << (23001 - 23001));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [11] [17] = ((~(arr_4 [i_0] [i_1] [i_0] [i_4 + 1])));
                        var_21 = (((arr_14 [i_4 - 1] [i_4 - 1] [16] [i_4 + 1]) && (arr_4 [i_4 - 1] [i_1] [18] [i_4])));
                    }
                }
            }
        }
        var_22 = var_14;
        var_23 -= (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? ((((!(arr_4 [i_0] [i_0] [i_0] [i_0]))))) : ((var_6 ? var_10 : var_15))));
    }
    #pragma endscop
}
