/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((((-(arr_0 [i_1 + 1])))) ? (((arr_0 [i_1 + 1]) / (arr_0 [i_1 + 2]))) : ((((!(arr_0 [i_1 + 1]))))));
                                arr_10 [i_4] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = (arr_8 [i_1 + 2] [i_1] [i_2] [3] [12]);
                            }
                        }
                    }
                    arr_11 [7] [7] [i_1] [i_2] = ((((((~(arr_7 [1] [12] [i_2 - 1] [i_1] [1])))) != ((-(arr_0 [i_2]))))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_14 = ((-(((min(var_11, (arr_9 [i_0] [i_1] [i_2] [13] [i_5]))) | (min((arr_15 [i_5] [i_2] [i_5] [i_2] [i_1 + 1] [i_0]), (arr_3 [i_0])))))));
                        arr_16 [i_1] = (--13432);
                        arr_17 [i_1] = ((13432 || (((((~(arr_5 [i_1]))) * (((!(arr_9 [2] [i_1] [i_2 - 1] [i_0] [7])))))))));
                        var_15 = ((~(((!(arr_15 [i_0] [i_0] [4] [4] [i_2] [i_5]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_16 ^= 52121;
                        arr_20 [i_1] [i_1] [i_1] [i_6] [i_6] = ((arr_14 [i_1] [i_1 + 2] [i_1 + 1]) == ((((arr_9 [i_2 + 1] [i_1] [13] [i_2 - 1] [i_2]) ? (arr_7 [i_2 + 1] [i_2] [i_2] [i_6] [i_2]) : (arr_2 [i_0])))));
                        arr_21 [i_1 - 1] [i_2] [i_1] [i_6] [i_0] [i_2] = ((-(arr_6 [i_1])));
                    }
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1 + 2] [i_1] [i_7 + 3] = ((var_1 == (((~(arr_12 [i_7 + 3] [i_2] [i_1] [i_2 - 1] [i_1]))))));
                        arr_25 [i_1] [i_2] [i_1 + 1] [i_1] = ((max((arr_15 [i_1 + 2] [i_2 - 1] [4] [i_7 - 3] [i_7] [1]), (arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7 - 3] [i_7 - 4] [i_7]))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_17 = (((arr_18 [i_1 + 1] [1] [i_2 + 1] [7] [i_2] [i_8]) != (max((arr_8 [i_1] [i_1] [i_1] [i_1] [i_0]), ((-(arr_4 [i_2])))))));
                        arr_28 [i_1 + 2] [i_8] [i_1] [i_1 + 2] [i_0] = var_4;
                    }
                }
            }
        }
        var_18 = (((((((max(26031, (arr_23 [14] [14])))) * (max((arr_26 [i_0] [14] [1]), (arr_2 [i_0])))))) || (~26031)));
        arr_29 [10] = ((((arr_27 [i_0] [i_0] [i_0]) >> (((arr_27 [i_0] [i_0] [i_0]) - 69)))));
    }
    var_19 = var_6;
    var_20 = 21;
    var_21 = ((1 << (((min((min(2147483637, var_6)), ((min(62, var_2))))) - 46))));
    var_22 = ((var_9 > (max(var_6, var_0))));
    #pragma endscop
}
