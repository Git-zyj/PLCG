/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (((!var_12) ? var_5 : (min(7135471898277903556, 1))));
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (((arr_1 [i_0 + 1]) | var_3));
        var_18 |= 29676;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = var_11;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 &= ((var_11 < (((7135471898277903560 ? var_3 : 1)))));
                            var_21 = (max(var_21, (((~(arr_3 [2] [i_2] [i_2]))))));
                        }
                    }
                }
            }
            var_22 -= (arr_6 [i_0 + 2]);
            var_23 = (max(var_23, (((~(((arr_1 [i_0]) & 89)))))));
            arr_11 [i_0 + 1] [i_1] [i_0 + 1] = (((arr_1 [i_0]) || ((((arr_10 [i_0 + 2] [i_0] [i_0]) ? 12 : (arr_6 [1]))))));
        }
        var_24 = (arr_0 [i_0]);
    }
    #pragma endscop
}
