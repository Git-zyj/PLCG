/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (((arr_2 [i_1] [i_0] [i_1]) <= ((-26913 - (((arr_0 [4]) ? (arr_0 [i_1]) : 0))))));
                var_11 += ((((min(63045, (arr_0 [i_1 + 1])))) / 26913));
                var_12 = (arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = var_1;
                        var_13 = (min(var_13, (arr_6 [i_1 - 1] [i_3 - 1] [i_3 + 1])));
                    }
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_14 = ((arr_9 [2] [i_1]) != (((arr_8 [i_0] [i_4 - 2] [i_1 + 1] [i_4 - 2] [i_4]) + 166)));
                        var_15 = var_0;
                    }
                    arr_15 [i_0] [i_1] |= -15;
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    arr_20 [i_5] = 61419;
                    arr_21 [i_5 + 2] [i_5] [i_5] [8] = (((arr_6 [i_0] [i_1 + 1] [i_5 - 2]) ? -14 : (arr_12 [i_1 - 1] [i_1 - 1])));
                    arr_22 [i_5] [i_1] [i_1 + 1] [i_5] = (((arr_11 [i_5] [i_5 - 2] [i_1 + 1] [i_0]) >= (arr_11 [i_0] [i_1 - 1] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_16 = (max(var_16, var_1));
                    arr_25 [i_6] [i_1] [i_6] = (((arr_16 [i_0] [i_6] [i_1] [i_0]) | (arr_16 [i_0] [i_1 + 1] [i_1] [i_0])));
                    var_17 = (min(var_17, (arr_19 [i_0] [i_1 + 1] [1] [i_6])));
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_31 [0] [i_7] [8] = ((-(((arr_26 [i_7] [i_7] [4] [i_7]) - (arr_14 [12] [i_7 + 1] [i_8])))));
                        var_18 = (arr_16 [i_7] [i_7 - 1] [i_1 - 1] [i_7]);
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_7] = ((max(((0 - (arr_29 [13] [i_9] [i_9] [8]))), 61412)));
                        arr_37 [i_7] [i_9] [i_7] [i_1] [i_0] [i_7] = ((min((arr_17 [i_7] [i_1] [i_7 - 1] [i_7]), (arr_12 [i_7 - 1] [1]))));
                    }
                    arr_38 [i_7] [i_1] [i_7] [i_0] = (min((arr_33 [i_1 + 1] [i_1 + 1] [i_7] [i_7 + 1]), ((var_0 ? var_7 : (arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                    var_19 = 8796092760064;
                }
            }
        }
    }
    var_20 = (max((((max(var_8, var_7)) != ((min(var_4, 2499))))), 1));
    var_21 = ((var_0 ? ((((min(var_9, var_1)) ^ var_4))) : 12355823009398523650));
    #pragma endscop
}
