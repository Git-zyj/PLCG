/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 = (((37337 ? 1880459698 : var_4)));
                        var_15 = (((arr_2 [i_0] [i_0]) || (643490211 && 1)));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_16 &= (max((((~((var_4 & (arr_11 [i_0] [i_0] [i_2])))))), (max(47770, 280555501484906093))));
                        var_17 = var_10;
                        var_18 = 1;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 = (((arr_0 [i_2]) ? -124 : (~1)));
                        arr_14 [i_0] [3] [i_1] [3] [3] [1] = ((arr_3 [i_5]) ? (arr_3 [i_2]) : (arr_3 [i_0]));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 -= (((26489 / (arr_0 [i_2]))));
                            var_21 = ((((-119 ? 3469168387205092587 : 1)) + (arr_13 [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_22 = (((((arr_1 [i_1] [i_1]) + var_6)) == 1));
                            var_23 = (189 - (arr_11 [i_0] [i_1] [i_2]));
                            var_24 = var_4;
                            var_25 |= (arr_12 [i_0] [i_0] [i_0]);
                        }
                        var_26 = (min(var_26, 1));
                    }
                    var_27 = ((((min(((min(var_1, -10979))), 6099573863493875598))) ? (((((max((arr_3 [i_0]), var_8)))) * (arr_16 [i_2] [0] [0] [i_1] [i_0]))) : 349235590));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_28 = ((((-(arr_3 [i_8 + 1]))) + (arr_3 [i_8 - 2])));
                                var_29 += min((arr_3 [i_8 + 1]), (arr_7 [i_0] [i_1] [6] [6]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_30 = (arr_2 [1] [1]);
                                var_31 = ((((-(arr_22 [i_11] [1] [i_2] [i_1] [6]))) * ((-(arr_10 [i_0] [0] [i_2] [i_10] [i_11])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (max(((1 ? var_10 : var_8)), (var_12 && var_4)));
    var_33 = (max(var_33, -var_9));
    #pragma endscop
}
