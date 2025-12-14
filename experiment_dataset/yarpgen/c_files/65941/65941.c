/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((!var_10), (arr_4 [i_1] [i_0 + 1] [i_1])));
                arr_6 [i_1] [i_1] = (max((arr_3 [i_0 + 1] [i_0 - 2]), ((((-5 ? (arr_1 [i_0] [i_0]) : (arr_4 [i_0 + 1] [i_0] [i_1]))) >> (-1069747497 + 1069747502)))));
                var_20 = (min(var_20, ((max(((max((-13 == -29), 1))), ((((((arr_2 [i_1] [i_1]) - -9))) ? (arr_0 [i_0 - 1] [i_0 - 2]) : ((max((arr_1 [i_1] [i_0]), (arr_3 [i_0] [i_1])))))))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        var_21 = ((!(((-(((arr_0 [i_2] [i_2]) ? -605419422326249117 : (arr_1 [i_2] [i_2 + 1]))))))));
        arr_10 [i_2 - 3] = 32236;
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_15 [i_3] = (arr_3 [6] [i_4]);
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] [i_3] = (arr_11 [i_3]);
                            arr_25 [i_7] [i_3] [i_5 + 3] [i_3] [i_3] = ((var_17 | (arr_22 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 3])));
                            var_22 *= (arr_4 [i_3 + 1] [i_3 + 1] [i_7]);
                        }
                    }
                }
            }
            var_23 = (min(var_23, var_17));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_24 -= (((arr_4 [i_3 - 3] [i_3 + 1] [4]) ? (arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 - 2]) : (arr_4 [i_3 - 1] [i_3 - 2] [16])));

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_25 *= -38;

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = 208;
                        var_26 = (min(var_26, ((((arr_20 [i_3 - 1] [i_3 - 1]) > (arr_20 [i_3 - 3] [i_3 - 1]))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_36 [i_3] [i_4] [i_8] [i_9] [i_11] = 221;
                        arr_37 [i_3] [i_3] [i_8] [15] [i_11] [i_11] = (((arr_34 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3] [i_3 - 3]) ? (arr_34 [17] [i_3 - 1] [i_3] [i_3 - 2] [17] [i_3 - 1]) : (arr_8 [i_3])));
                        var_27 -= 213;
                        arr_38 [i_3] [2] [i_8] [i_4] [i_3] = 18;
                        var_28 -= (((arr_27 [i_3] [i_11] [i_3] [i_3]) + (arr_13 [i_3] [i_3])));
                    }
                }
                var_29 = (max(var_29, (((-(arr_0 [i_3 - 2] [i_3 - 1]))))));
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_47 [i_3] [i_13 + 1] [i_12] [i_12] [i_4] [i_3] [i_3] = (~var_7);
                            arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_35 [i_3]);
                            var_30 = (arr_14 [i_13 - 1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        {
                            arr_53 [i_4] [i_4] [i_3] [i_4] [i_4] = (arr_49 [i_3] [i_3 - 2] [i_3] [i_3 - 2]);
                            var_31 = ((((((arr_29 [i_15]) ? (arr_46 [i_16] [i_3] [i_3] [i_12] [i_3] [i_3 + 1]) : (arr_44 [i_16] [i_15] [i_4])))) ? (arr_32 [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_3 - 3]) : var_19));
                        }
                    }
                }
                arr_54 [i_3] = (((arr_31 [i_12] [i_4] [i_3]) ? (arr_12 [i_3]) : (arr_50 [3] [i_3 - 2] [i_3 - 1] [i_4])));
                arr_55 [i_12] [i_3] [i_3] [i_3] = (((arr_23 [i_3] [i_3 - 2] [i_3 - 2] [1]) ? (arr_23 [i_3 + 1] [i_3 + 1] [i_3 - 3] [10]) : (arr_23 [i_3] [i_3 - 3] [i_3 - 1] [i_3])));
                arr_56 [i_3] [19] [i_3] [i_3] = (arr_28 [i_12] [i_4] [i_3]);
            }
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
        {
            var_32 -= ((!((min((arr_26 [i_17] [i_3] [i_3]), (!159))))));
            arr_59 [i_3] [i_3] = (((max((arr_11 [i_3]), 26)) | (arr_18 [i_17] [i_3] [i_3] [19])));
            arr_60 [i_3] = (max((arr_17 [i_3] [i_3 - 1] [i_3 + 1]), (((!(arr_26 [i_17] [i_3] [3]))))));
        }
        arr_61 [i_3] [i_3] = 243;
        arr_62 [i_3] = max(908, (((115 || (arr_49 [i_3 - 3] [i_3] [i_3 - 3] [i_3])))));
    }
    #pragma endscop
}
