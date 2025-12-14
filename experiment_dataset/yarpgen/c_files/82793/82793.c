/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((~((~(((arr_2 [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_7))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1 - 1] [i_3 + 2] [i_1] [i_1 - 1] [i_0] = (arr_3 [i_1 - 2]);
                                var_20 += ((((((arr_13 [4] [i_3 + 2] [i_3 + 3] [i_3 + 2] [1]) * (arr_13 [8] [i_3 + 2] [i_3 + 3] [i_3 + 2] [8])))) ? ((min((arr_13 [2] [i_1 + 1] [i_3 + 3] [i_3] [1]), (arr_13 [6] [i_0] [i_3 + 3] [i_0] [i_3])))) : (arr_13 [8] [i_3] [i_3 + 3] [i_3] [i_3])));
                                arr_17 [i_4] [i_1] [1] [i_1] [i_0] = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]);
                                var_21 = (arr_11 [7] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                {
                    var_22 = ((((!(arr_20 [i_5 - 1] [i_6 - 1]))) ? ((min(var_0, (arr_20 [i_5 - 1] [i_6 - 1])))) : ((((arr_18 [i_5 - 1]) || (arr_20 [i_5 - 1] [i_6 + 3]))))));
                    var_23 = (max(((((!(arr_19 [i_5] [i_6]))) ? (min((arr_23 [i_5]), (arr_21 [0]))) : (((arr_22 [i_7 + 3] [i_6]) ? (arr_18 [i_6 - 1]) : var_10)))), (arr_23 [i_5 - 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6 + 3] [i_7 + 2] [i_8] [i_9] = (!((!(arr_24 [i_5] [i_6] [i_7 + 4] [i_8]))));
                                var_24 = (min((arr_29 [i_5 - 1]), (min((~var_14), ((var_17 ? (arr_28 [i_6 - 2]) : (arr_26 [i_5] [i_6 - 1] [i_7 + 2] [i_5])))))));
                                var_25 = (max((((min(var_7, (arr_30 [i_5 - 1] [i_5 - 1] [i_8]))))), ((~(min((arr_27 [i_6]), var_6))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_10;
    var_27 = ((var_18 ? ((var_7 ? (min(var_17, var_4)) : -var_11)) : ((((!(var_7 ^ var_7)))))));
    #pragma endscop
}
