/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += (max((((!((min(var_0, var_6)))))), ((~(max(var_10, var_13))))));
                arr_5 [i_1] [i_0] = ((((((((arr_2 [i_0]) ? var_4 : -60)) | (arr_3 [i_1] [i_1 - 1] [i_1 - 1])))) ? ((+((min((arr_4 [i_1]), var_3))))) : (((((arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 1]) / var_3)) - -20492))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    arr_8 [1] [i_0] [i_2] = var_4;
                    arr_9 [i_0] [i_2 + 1] [i_1 - 1] [i_0] = (((arr_3 [2] [i_0 + 1] [2]) ? 0 : -var_4));
                    var_15 = (max(var_15, ((((arr_2 [i_0]) && 1096367105)))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7));
                    var_16 = (max(var_16, -1244149337));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [12] |= 1;
                                var_17 += (min(((((((var_10 ? 255 : var_2))) && (!var_7)))), (~var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_18 = (((((var_7 == (min(var_2, var_10))))) % (max((((arr_4 [i_8]) << (3198600185 - 3198600169))), ((1 ? var_11 : 253))))));
                                var_19 = (((((~(((arr_0 [i_4] [i_0]) ? 16 : 65525))))) ? (var_5 | var_9) : ((((((-(arr_26 [i_8] [i_4] [i_7] [i_8] [13] [i_0] [i_7]))) >= (((var_12 >> (var_6 - 14148))))))))));
                                var_20 = var_2;
                                arr_27 [i_0] [i_4] [i_1 - 1] [i_0] [i_1] = arr_4 [i_4];
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_9 && var_4);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            {
                var_22 = (((min((arr_29 [i_10] [i_10 + 2]), (arr_29 [i_9] [i_10 + 2]))) && ((max((1 / 1), (arr_16 [i_10 - 1] [i_10] [i_10] [i_10] [i_10]))))));
                var_23 = ((((~(arr_3 [i_10 - 1] [0] [i_9]))) * (((!(((13 ? var_5 : var_1))))))));
                var_24 = (((((((max((arr_26 [i_9] [i_9] [1] [i_9] [i_9] [i_10] [i_10]), -1))) ? (var_11 & var_11) : (var_1 & var_13)))) ? (((253 & ((-581701899 - (arr_3 [i_9] [i_9] [i_10])))))) : (((~var_9) & ((var_4 ? 2 : (arr_15 [i_9] [i_9] [16] [i_10])))))));
            }
        }
    }
    var_25 = (max(((~(var_6 - var_7))), var_6));
    #pragma endscop
}
