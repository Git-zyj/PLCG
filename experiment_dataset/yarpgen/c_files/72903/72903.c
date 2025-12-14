/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((min((max(var_0, (arr_1 [i_0 - 1]))), ((1 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))))))));
        arr_2 [i_0] = (arr_1 [i_0 - 2]);
        var_17 &= ((!(((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [16] |= (((arr_4 [i_0 + 1] [i_0 - 1]) != -3230285825227449691));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = (!var_6);
                                arr_14 [i_0] [i_3] [i_3] [i_3] [i_4] = ((~((~((18446744073709551613 ? 139 : var_6))))));
                                arr_15 [i_3] = (((((arr_1 [i_0 - 2]) || 1)) ? (~1688741555) : (((((((~(arr_8 [i_2 + 3] [i_3] [i_2 + 3] [i_3] [19])))) > (max(67553994410557440, 2359))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [2] = (max((((!((max(var_4, -2360)))))), ((var_12 ? (arr_4 [4] [i_2 - 2]) : (arr_4 [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_18 = ((!(arr_18 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_19 ^= 1359709740;
                    var_20 = (((arr_21 [i_5 + 2] [21]) - var_1));
                }
            }
        }
        var_21 = ((-var_7 ? 1 : (var_13 & var_15)));
        arr_25 [i_5] [i_5] = ((~(arr_20 [i_5 + 1])));
    }

    for (int i_8 = 3; i_8 < 15;i_8 += 1)
    {
        var_22 = (max(var_22, (max(((((arr_20 [i_8 + 3]) != 138))), (max((arr_20 [i_8 - 1]), 1))))));
        var_23 = 2359;
        arr_30 [i_8 - 2] = (~var_11);
        var_24 = (arr_3 [i_8 - 1] [1] [i_8]);
    }
    #pragma endscop
}
