/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((1 ? (var_8 - var_3) : (arr_0 [i_0]))));
        arr_5 [i_0] = (arr_1 [4] [4]);
        arr_6 [i_0] = (min(((var_7 ? 962058361 : var_6)), ((((var_0 + 3332908917) > 18357876060215437836)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_11 = var_5;
            arr_9 [i_0] [i_0] [i_0] = var_0;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_14 [i_0] = var_9;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_12 = ((var_1 ? (((((arr_12 [i_2]) / 962058375)) * ((((arr_7 [i_0]) / 4717))))) : var_4));
                        arr_22 [2] [i_2] [i_3] [4] [i_4] &= ((((((arr_13 [i_3]) | 1153412151)) | (arr_2 [i_0]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_29 [i_0] [i_6] |= ((!(arr_15 [i_6] [i_5] [i_5])));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_32 [i_0] [i_6] [10] [i_0] = (arr_17 [i_7] [i_6] [i_0]);
                        var_13 = (((arr_20 [5] [i_5] [i_5] [i_6] [i_0]) - 32));
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_35 [i_0] [i_0] [8] [i_0] = (min((26276 <= var_4), ((-(((arr_18 [i_0] [i_5] [1]) ? 3332908915 : var_7))))));

                        for (int i_9 = 4; i_9 < 9;i_9 += 1)
                        {
                            var_14 = (((((-(~1)))) ? ((((arr_3 [i_9 - 4] [i_0]) ? (arr_3 [i_9 + 2] [i_0]) : (arr_3 [i_9 + 1] [i_0])))) : ((var_4 + (arr_36 [i_0] [i_5] [i_6] [i_8] [i_9 - 3])))));
                            var_15 = (((var_0 * (arr_20 [i_0] [i_8] [1] [1] [i_0]))));
                        }
                        arr_38 [i_0] = ((-12816 + 2147483647) << (1153412151 - 1153412151));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_16 = (min(var_16, ((((arr_34 [i_6]) + ((-2438102604868351850 % (arr_33 [5] [5]))))))));
                        arr_41 [i_0] = (arr_10 [i_5] [i_0]);
                    }
                    arr_42 [i_0] [i_6] [i_6] [i_0] &= (!3332908917);
                }
            }
        }
    }
    var_17 = ((((var_8 ? 1 : ((83 << (var_8 - 49))))) * (var_1 >= var_9)));
    var_18 = ((68 >= -96) != -828322360);
    #pragma endscop
}
