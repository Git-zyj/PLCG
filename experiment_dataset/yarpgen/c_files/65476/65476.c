/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!(~var_0)))) > (((((23 ? var_7 : 1)) > var_0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((var_9 ^ 142) ? var_1 : (((1 > (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_11 = ((!((!(~var_9)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [1] [i_4] [i_5] = ((((arr_4 [i_4 - 1]) == 114)));
                                arr_21 [i_5] [i_4] [0] [i_2] [i_1] = ((((max((((arr_1 [i_3]) + 1)), var_3))) ? (((!(1 == 1)))) : (arr_4 [i_2])));
                                var_12 = ((min(((~(arr_9 [i_3 - 1] [i_3 - 1]))), var_5)) < (((((78 ? var_2 : 63))) ? 0 : (arr_14 [i_4 + 3] [i_1 + 3]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_29 [i_6] [i_6] [i_1] [1] [i_6] = ((((1 == ((1 ? var_0 : 0)))) ? ((((var_0 ? var_6 : var_8)))) : ((min((var_6 > var_3), (arr_24 [i_1] [i_2] [i_2] [i_6] [i_7]))))));
                                var_13 = max((arr_26 [i_1] [i_2] [i_3] [i_3] [i_6]), 141);
                                var_14 = ((arr_12 [i_7] [i_7] [i_7] [i_2]) > ((((max((arr_6 [i_2] [i_1]), 144))) ? ((171 ? 161 : var_7)) : var_0)));
                                arr_30 [i_3 - 1] [i_6] [i_3 - 1] [i_6] [i_1] = (((((-(arr_10 [i_6 - 1])))) ? ((min((arr_10 [i_6 - 1]), (arr_10 [i_6 - 1])))) : (((arr_10 [i_6 - 1]) * var_3))));
                            }
                        }
                    }
                    arr_31 [i_3 - 1] [i_1] [i_1] = (((((((max(0, (arr_1 [4])))) > (~1)))) * (((((var_9 ? var_6 : 1)) == (((arr_12 [i_2] [1] [1] [1]) ? 88 : (arr_9 [i_1 - 1] [i_1 - 1]))))))));
                }
            }
        }
        arr_32 [i_1] = ((((!((((arr_28 [i_1] [i_1] [1]) ? (arr_5 [i_1 + 4] [i_1]) : 0))))) ? (arr_22 [i_1 + 2] [i_1 + 3] [i_1] [i_1 + 2]) : ((1 + ((((arr_19 [i_1] [1] [1]) >= 1)))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_15 = (min(var_1, var_2));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_45 [i_10] [i_11] [i_10] [i_11] = 0;
                        var_16 = (((min(1, var_2)) ? (((!(113 < 1)))) : (((((((arr_17 [i_11] [i_10] [i_9] [i_8]) > var_1))) < (((arr_33 [1] [i_10]) % 216)))))));
                        arr_46 [i_8] [i_10] [i_8] [i_11] = ((((((arr_35 [i_8]) ? (arr_26 [i_10] [i_9] [i_9] [i_9] [i_10]) : (((arr_1 [1]) * (arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))) ? 1 : ((1 >> (206 - 196)))));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_51 [i_10] [i_10] = (((!1) ? (var_0 == 14) : (60 == 1)));
                        arr_52 [i_10] [i_10] = -16;
                        var_17 = ((~(((((var_1 ? 0 : 242))) ? (((!(arr_43 [i_10] [i_10] [3] [i_10] [i_10])))) : ((min(var_4, (arr_6 [i_12] [i_10]))))))));
                    }
                }
            }
        }
        arr_53 [i_8] = ((var_4 == ((min(var_9, var_3)))));
    }
    #pragma endscop
}
