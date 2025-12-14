/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 -= (((~1148300023) ? ((1 ? (arr_3 [i_0 - 1]) : 824898046)) : (min((arr_3 [i_0 - 3]), (arr_3 [i_0 + 1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = ((((max(((max(var_6, (arr_1 [i_0])))), (((arr_6 [i_1] [1] [i_2]) | (arr_6 [i_1] [i_1] [i_1])))))) ? ((18043 ? (((arr_3 [i_0]) ? -203739569 : -203739546)) : -22798)) : (min((arr_6 [i_1] [i_0 - 2] [i_1]), (max(var_9, (arr_7 [i_0 + 1] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (var_10 ? ((var_5 ? (min(var_9, (arr_0 [i_0] [i_1]))) : (arr_5 [i_1] [i_3 - 2]))) : ((((14969 ? 14965 : 435098830)))));
                                var_16 = (!var_7);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_17 = (((((((min((arr_2 [i_5]), var_6))) * (arr_12 [3] [i_1] [i_1] [i_0])))) > (arr_0 [i_1] [i_0])));
                    var_18 = (min(3470069277, var_1));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_19 = ((((~var_5) ? ((-435098844 ? 1633601150 : 19527)) : (arr_15 [12] [i_1]))));
                        var_20 = ((-(min((arr_10 [i_0 - 2]), (((var_10 ? 1 : var_11)))))));
                        arr_17 [i_1] [i_5] [i_1] [i_1] = (((max(var_4, (((arr_5 [i_1] [i_1]) * (arr_6 [i_1] [i_1] [i_5]))))) | ((max(((var_5 ? var_1 : (arr_10 [i_0]))), var_3)))));
                        arr_18 [i_1] [i_1] [i_5] [i_6] = (-(arr_2 [i_0 + 1]));
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        arr_21 [i_1] = (((((arr_14 [i_1]) ^ (((var_3 ? 30918 : -29317))))) | var_0));
                        arr_22 [i_1] [i_1] [i_5] [i_7] [i_0] = (((((((min((arr_10 [i_0]), 29342))) ? ((var_0 ? (arr_1 [i_1]) : (arr_6 [i_1] [i_1] [i_5]))) : (arr_1 [9])))) ? var_2 : (arr_6 [i_1] [i_5] [i_7])));
                    }
                    var_21 = ((~(((!(arr_3 [i_0 - 3]))))));
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [i_8] = var_8;
        var_22 = ((max((((arr_15 [22] [22]) ? (arr_12 [i_8] [10] [i_8] [i_8]) : (arr_15 [i_8] [14]))), (((~(arr_9 [12] [2] [i_8] [12])))))));
    }
    #pragma endscop
}
