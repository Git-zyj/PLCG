/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = (((var_1 ? var_13 : 21)));
        var_19 = (min((arr_1 [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 - 2])));
        arr_4 [i_0] |= (((((~(arr_3 [i_0] [i_0 + 1])))) * (min((arr_0 [i_0 + 1]), 18446744073709551615))));
    }
    var_20 |= (max(var_12, var_16));
    var_21 = (((((var_1 | 234) ? var_13 : (var_0 & var_7))) & ((((22 != 22) ? var_17 : ((0 ? var_6 : 156)))))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_22 = ((max((arr_9 [3]), ((min(255, var_16))))));
                        var_23 = (arr_13 [i_1] [i_4] [i_3] [i_4] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_24 = var_2;
                        var_25 = (arr_11 [i_1] [i_2 + 1] [i_3] [i_5]);
                    }
                    var_26 = (!((min(((var_14 ? (arr_13 [1] [i_2] [i_2 + 1] [i_1] [i_1]) : (arr_10 [i_1] [i_2] [i_1]))), (arr_11 [i_2] [i_3] [i_3] [i_3 - 1])))));
                    var_27 = (min(var_27, ((min((((arr_15 [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1]) ^ (arr_15 [i_2] [i_2 - 2] [i_3 - 1] [i_3 - 1]))), (arr_12 [i_3 - 1] [i_3 - 1] [i_3]))))));
                    var_28 = (min(var_28, ((min(((-(arr_10 [0] [0] [i_3 - 1]))), (((arr_6 [i_2 + 1]) | var_13)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_24 [8] [i_6] [i_3] [8] [8] |= 72;
                                arr_25 [i_1] [2] [i_3] |= (((((-(arr_14 [i_1] [i_2 - 4] [i_2 - 4] [0] [12] [i_2])))) % (((arr_21 [i_7] [i_2] [i_3] [i_7] [i_7] [i_1] [i_6 + 1]) ^ (arr_14 [1] [i_2] [i_3] [12] [10] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
