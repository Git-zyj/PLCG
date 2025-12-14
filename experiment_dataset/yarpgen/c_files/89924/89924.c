/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) - (((((arr_1 [i_0]) != (arr_1 [i_0])))))));
        var_11 = (min(var_11, ((((((((arr_1 [i_0]) != (arr_1 [i_0]))))) - (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (arr_8 [i_2] [i_2] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (arr_4 [i_0] [i_1] [i_0]);
                                var_14 = (((arr_6 [i_1] [i_3]) + (arr_1 [i_2])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] = (arr_10 [i_2] [i_2] [i_1] [i_0]);
                }
            }
        }
        arr_18 [i_0] = ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) || (arr_7 [i_0] [i_0] [i_0]))))) * (arr_7 [i_0] [i_0] [i_0]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_24 [i_0] [i_5] [i_5] = (arr_8 [i_0] [i_5] [i_6] [i_6]);
                    var_15 = (max(var_15, ((((arr_12 [i_0] [i_0]) | (arr_12 [i_6] [i_5]))))));
                    arr_25 [i_0] [i_5] [i_5] [i_6] = (((arr_20 [i_0]) ? (((arr_21 [i_0] [i_6]) / (arr_11 [i_0] [i_5] [i_6]))) : (((arr_9 [i_0] [i_5] [i_6] [i_6]) * (arr_10 [i_6] [i_5] [i_0] [i_0])))));
                    arr_26 [i_0] [i_5] [i_5] [i_6] |= (((arr_13 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0]) || ((((arr_19 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_5] [i_6]))))));
                }
            }
        }
    }
    var_16 = (max((min((var_1 - var_1), (var_10 + var_7))), var_3));
    var_17 = ((!(((((min(var_8, var_3))) ? (!var_6) : (var_10 && var_3))))));
    var_18 = (((~-947961369) >> (65535 - 65509)));
    var_19 = var_7;
    #pragma endscop
}
