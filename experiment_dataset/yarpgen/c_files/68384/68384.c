/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 *= (!var_1);

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (arr_5 [i_0] [i_0 + 1] [i_2]);
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_4 [i_2 - 2] [i_1]);
                            }
                        }
                    }
                    var_12 = (arr_11 [i_0] [i_2] [13] [13] [i_2] [i_2 - 3] [10]);
                    var_13 = (min((~var_6), var_2));
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    var_14 = (((((((arr_4 [i_0] [i_0 - 1]) ? var_9 : (arr_2 [i_0] [i_1]))))) ? (arr_14 [10] [i_1] [i_1]) : (((!(arr_10 [i_0] [i_0 - 2] [i_1] [1] [i_5 + 4] [1]))))));

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_15 = (((var_6 ? var_0 : var_1)));
                        arr_19 [i_0] [i_5] [i_5] [i_6] [i_6 + 3] = (arr_18 [i_6] [i_0]);
                    }
                    var_16 = (((((max(var_9, (arr_1 [i_5])))) ? var_7 : var_5)));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_0] [i_1] = (~(max((arr_5 [i_0] [i_1] [i_0]), (arr_21 [12] [i_1] [i_7]))));
                    var_17 = (!var_2);
                }
                arr_23 [i_0] [i_0] [i_0] = ((-((var_0 ? (arr_13 [7] [i_1] [i_1]) : (((!(arr_15 [i_1] [i_0]))))))));
            }
        }
    }
    var_18 = -var_1;
    var_19 = (min(var_6, ((var_2 ? ((min(var_3, var_6))) : ((var_3 ? var_6 : var_8))))));
    var_20 = ((((!(!var_0)))));
    var_21 = ((((((var_8 ? var_0 : var_1)) ? var_1 : -var_0))));
    #pragma endscop
}
