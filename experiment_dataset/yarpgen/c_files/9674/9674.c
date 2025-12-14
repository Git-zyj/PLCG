/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = (max(var_11, -38));
    var_15 = (((((max(var_11, (max(var_11, var_11)))))) | ((var_11 ? (max(var_9, var_5)) : (((max(var_11, 122))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = (((((-(arr_1 [i_0]))) - (arr_9 [i_4] [i_3] [i_2] [12]))));
                                arr_14 [i_0] = (-40 != 1);
                                arr_15 [i_0] &= ((min(var_10, var_7)));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((((!(arr_3 [i_1] [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((((~(arr_21 [i_6] [i_5] [3] [i_1] [i_1] [i_1] [i_0]))) & ((var_8 ? var_11 : (arr_19 [i_2])))))) ? (arr_17 [i_0] [i_2 - 2] [i_0] [i_6]) : ((((var_11 ? 11749 : (arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] [i_2]))) - (arr_4 [i_2] [i_2 - 2] [i_2 - 1]))))))));
                                var_18 = ((1 ? 11737 : 1741675054));
                                var_19 = ((max(var_7, (!var_11))));
                                var_20 = max(((max((arr_17 [i_1 - 1] [i_2 + 1] [i_5 - 1] [i_0 + 2]), var_11))), (arr_17 [i_1 - 1] [i_2 - 2] [i_5 - 1] [i_0 + 1]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
