/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (~var_12)));
    var_21 = (max(var_21, ((((((min(var_2, var_16)))) ? -8192 : ((var_16 ? ((var_7 ? var_18 : var_2)) : var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((+((max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [3] [i_2] = var_8;
                                arr_16 [i_1] [i_1] [i_1] = ((var_13 ? (max(var_8, var_2) : (min(var_9, 1)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_6] [i_0] [i_1] = ((-(((((~(arr_6 [i_6] [i_1] [i_0])))) ? (min(var_19, var_15)) : var_6))));
                            arr_22 [i_1] [i_1] [7] = (((min((((arr_10 [i_0] [i_0] [i_0] [i_0 + 2]) ? var_14 : (arr_18 [i_1] [i_1]))), (arr_9 [i_0 - 2]))) - ((((!(arr_19 [i_1] [5] [1] [i_6 + 1]))) ? (arr_6 [6] [6] [1]) : -8205))));
                            var_22 = ((~(min((arr_10 [i_0 + 2] [i_5 + 1] [i_5 + 1] [i_6 + 1]), -var_9))));
                            var_23 -= (!var_2);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
