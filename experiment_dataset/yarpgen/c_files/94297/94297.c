/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((2147483647 - 2147483647), (!var_6)));
    var_12 += var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_13 = (arr_5 [i_2 + 1] [i_2] [i_2 + 1]);
                var_14 += (arr_8 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_15 [i_3] [i_3] [i_1] [i_2 - 1] [8] [i_3] [i_4 - 1] = arr_4 [i_0] [i_0];
                            arr_16 [i_0] [i_1] [i_0] [i_2 + 1] [1] [i_3] = var_3;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_15 &= (arr_11 [i_0] [i_1] [i_0] [i_5]);
                var_16 = var_5;
                var_17 = ((var_8 ? (((arr_10 [i_0] [i_1] [i_5]) / (arr_12 [i_1] [12] [i_5] [i_0] [0] [i_0]))) : var_1));
            }
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                arr_24 [i_0] [1] [5] &= (((((281474976709632 ? 210 : (arr_3 [i_6 - 1])))) ? (arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_14 [i_1] [8] [i_1] [0] [i_6 - 2] [12] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_18 = (((arr_25 [5] [5] [i_6 - 2] [i_6 - 2] [i_8]) >> (((arr_25 [i_1] [i_6] [i_6 - 2] [i_8] [7]) - 44))));
                            arr_29 [i_0] [i_0] [i_8] [i_6] [i_7] [i_8 - 1] [i_8 - 1] = arr_3 [i_6 - 1];
                            arr_30 [i_0] [i_0] [i_6 - 1] [i_7] [i_8] [i_8] = (arr_27 [i_8] [i_1] [i_6 - 2] [i_8] [12]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_19 &= (((arr_35 [i_6] [10] [i_6 - 2] [4] [i_10 + 1]) + (arr_35 [i_0] [i_0] [i_6 + 1] [i_10 - 2] [i_10 - 1])));
                            var_20 += -29;
                            arr_37 [i_10] [10] [i_9] [i_9] [i_6] [i_1] [i_0] = ((var_0 % (arr_7 [i_0] [i_0] [i_6 - 2] [i_10 + 1])));
                        }
                    }
                }
            }
            arr_38 [i_0] [i_0] [1] = (((var_2 & var_6) ? 108 : (arr_34 [i_0] [i_1] [i_1] [i_1] [i_0])));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_21 += (!var_1);
            var_22 = ((((((!2147483647) ? (arr_41 [i_0] [i_0]) : var_1))) ? ((((arr_8 [i_11] [i_11] [i_11]) || var_5))) : ((((arr_27 [i_0] [1] [i_0] [10] [i_11]) || (arr_25 [i_11] [i_11] [i_11] [1] [i_11]))))));
            arr_42 [i_0] [i_0] = (min((max((arr_32 [i_0] [i_0] [6] [i_11] [6] [i_11]), (arr_32 [i_0] [i_11] [i_0] [i_0] [i_11] [i_11]))), -var_1));
        }
        arr_43 [i_0] = ((((((15425 * (arr_21 [i_0] [i_0] [i_0] [i_0]))) - (arr_21 [i_0] [i_0] [11] [i_0]))) & ((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    #pragma endscop
}
