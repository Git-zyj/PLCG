/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (max((var_18 / var_14), var_17));
    var_20 = min((217 >= -var_0), ((0 >> ((((31 ? var_14 : var_5)) - 2130637608)))));
    var_21 = ((var_11 ? var_15 : ((((max(31720, var_2))) ? (-6114177670978901612 < 18465) : 31))));
    var_22 = (var_18 % var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 31;
        arr_3 [i_0] = 47096;
        arr_4 [6] [6] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = (((~var_15) ? 62985 : 217));
            arr_11 [i_1] [i_1] [i_1] = ((((!(arr_8 [i_2]))) ? (((var_17 != (arr_9 [i_1] [14])))) : 32758));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [18] [18] [11] = (arr_17 [i_1] [i_1] [i_2] [i_3] [16] [i_4 - 2] [i_3]);
                            arr_20 [9] [i_2] [i_2] [i_3] [i_4] [9] [i_5] = (arr_16 [i_1] [i_1] [i_3] [16]);
                            arr_21 [i_1] [i_2] [i_4] [i_1] [10] [i_4] = (arr_16 [i_1] [i_4] [i_3] [i_4 - 1]);
                        }
                    }
                }
                arr_22 [i_1] [i_2] [i_1] = var_9;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_31 [i_1] [2] [i_7] = ((~(arr_9 [i_2 + 1] [i_7 - 1])));
                            arr_32 [i_7] [i_2 - 2] [i_7] = (arr_17 [i_2 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8 + 1] [i_8 - 1]);
                            arr_33 [i_1] [22] [i_1] [i_1] [i_8] = 2044;
                            arr_34 [i_2] [i_6] [i_7 + 1] [i_8 - 1] = (arr_6 [i_2 - 2]);
                        }
                    }
                }
                arr_35 [i_6] [i_2] [16] = 11360;
                arr_36 [i_1] [8] [i_6] = (((arr_25 [i_6] [i_2] [i_1]) ? 1 : (arr_25 [i_1] [i_2 - 2] [i_6])));
                arr_37 [i_1] = 29303;
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_42 [i_1] [13] [22] = var_0;
                arr_43 [i_1] [9] = 62972;
                arr_44 [i_1] [i_1] [4] = -var_17;
                arr_45 [i_2] [i_2] = (((arr_26 [i_2 - 1] [21] [i_2 - 2] [i_2 - 2] [i_2 + 1]) - 219));
            }
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_48 [i_1] [i_1] [i_10] &= (~var_3);
            arr_49 [i_10] = ((0 ? var_15 : 372961089));
            arr_50 [i_10] = (2406475769 / 56);
            arr_51 [i_10] = (~9223372036854775807);
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_55 [i_11] = ((var_2 ? (var_7 || 46285) : ((56 ? (arr_54 [i_11]) : 0))));
        arr_56 [i_11] &= ((~(~97)));
        arr_57 [0] [i_11] = (arr_54 [i_11]);
    }
    #pragma endscop
}
