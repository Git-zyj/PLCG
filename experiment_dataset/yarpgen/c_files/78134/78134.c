/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) * ((~((max(var_10, (arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = (max((((var_10 > (var_5 >= var_8)))), ((var_9 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((arr_5 [i_1] [i_1]) >> ((((~(arr_5 [i_1] [i_1]))) - 3843866340913807424))));
        var_11 -= (min((((-(arr_7 [i_1])))), (arr_5 [9] [9])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_17 [i_4] = ((((min(9, (arr_15 [i_4] [i_3])))) ? ((~((var_10 / (arr_11 [i_2] [i_3] [i_4]))))) : (((-9 ? (((arr_15 [i_2] [0]) ^ (arr_16 [i_2] [i_2] [i_3] [i_4]))) : (arr_10 [i_3] [i_4]))))));
                    var_12 *= (arr_16 [i_2] [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_13 = (max((((((arr_13 [i_5] [i_3] [i_2]) ? (arr_14 [i_5]) : (arr_10 [i_2] [1]))) * (arr_6 [i_2] [i_2]))), (arr_1 [i_2] [i_3])));
                                var_14 = (((((arr_1 [i_6 - 1] [i_6 - 1]) - (arr_1 [i_6 - 1] [i_6]))) - (((arr_1 [i_6 + 1] [6]) ^ 59))));
                                var_15 = (((arr_18 [i_2] [i_3] [i_5] [i_5] [i_6] [i_6 - 1]) * ((-(arr_18 [3] [3] [i_4] [3] [3] [i_6 + 1])))));
                            }
                        }
                    }
                }
            }
        }
        var_16 = ((var_6 && ((((max(var_0, (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) && (((~(arr_21 [i_2] [1] [i_2] [1]))))))));
        var_17 = (arr_15 [i_2] [i_2]);
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_26 [i_7] = min(((((max((arr_23 [1] [i_7]), 4)) > var_2))), (arr_0 [i_7]));
        var_18 = min(((((max(206, var_8))) ? (arr_2 [i_7] [i_7]) : ((~(arr_24 [i_7] [i_7]))))), ((~(((var_10 <= (arr_1 [i_7] [i_7])))))));
    }
    var_19 = var_7;
    #pragma endscop
}
