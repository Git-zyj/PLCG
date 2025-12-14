/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((~(min(var_10, (((var_6 && (arr_6 [i_0]))))))));
                    arr_11 [i_0] [i_1] [i_2] = (arr_3 [i_0]);
                    arr_12 [23] [i_1] [i_1] = (((((arr_5 [i_1 - 1] [i_2 - 2]) && (arr_7 [i_1 - 1] [i_2 + 1]))) ? ((((var_3 == (arr_3 [i_1]))) ? ((-(arr_2 [i_0] [i_1]))) : (arr_3 [16]))) : (min((arr_8 [i_1]), (arr_0 [i_0])))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((((((min(255, (arr_1 [i_1 - 1]))) - var_4))) && (((~var_10) < ((((!(arr_2 [i_0] [i_0])))))))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] |= ((((var_12 ? (arr_5 [i_1] [i_2 + 1]) : var_9)) | ((-1949144987 ? 30 : -1591076085))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = (~-1949144987);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                {
                    arr_25 [i_3] = (((arr_6 [i_3]) ? (((((var_0 ? (arr_5 [i_3] [i_4]) : (arr_19 [i_5 - 3])))) ? (((arr_16 [i_5]) ? var_7 : var_10)) : (((1 ? var_5 : 1))))) : (((((arr_22 [i_4 + 4] [i_4 + 4] [i_4 + 4]) > (arr_22 [i_4 + 4] [i_4 + 4] [i_4 + 4])))))));
                    arr_26 [11] [i_4] [i_4] [i_4] = ((((((arr_23 [i_4 + 2] [i_5 + 2] [i_5 - 3]) ? var_4 : (arr_23 [i_4 + 2] [i_5 + 2] [i_5 - 3])))) ? ((var_3 << (arr_24 [i_4 + 2] [i_5 + 2] [i_5 - 3]))) : (((arr_18 [i_4 + 2] [i_5 + 2] [i_5 - 3]) & (arr_18 [i_4 + 2] [i_5 + 2] [i_5 - 3])))));
                    arr_27 [i_3] [i_3] [i_4] [i_3] = -var_2;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_32 [i_6] [i_6] = ((((var_2 ? var_4 : -1591076082)) == ((var_10 ? var_11 : var_7))));
        arr_33 [i_6] = ((+((var_3 ? (arr_4 [0]) : var_0))));

        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            arr_36 [i_6] [i_6] = (((((~(arr_2 [i_6] [i_6])))) ? (arr_7 [i_6] [i_7 + 1]) : ((var_8 ? (arr_3 [i_6]) : (arr_8 [2])))));
            arr_37 [i_6] [i_7] = (!var_12);
        }

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    arr_48 [i_8] [i_9] = (arr_42 [i_6] [i_6] [i_9]);
                    arr_49 [i_9] [i_8] [i_9] [i_9] = (arr_39 [i_9] [i_9 - 1] [i_10]);
                }
                for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    arr_52 [i_9] = (((var_9 * var_3) ? (((arr_41 [i_6]) ? -1685452377 : 38183)) : (arr_50 [i_11 + 1] [i_9 - 1] [i_9])));
                    arr_53 [i_6] [i_8] [i_9] [i_9] [i_11] [i_8] = 6179995537912148461;
                    arr_54 [i_8] [i_8] [i_9 - 1] [i_11] = ((var_7 ? (arr_9 [i_11 + 1]) : (arr_9 [i_11])));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        arr_57 [i_6] [i_8] [12] [i_6] [i_6] [i_6] [i_6] = -1823974231;
                        arr_58 [i_12] [i_9] [i_6] = (arr_38 [i_11 + 1]);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        arr_62 [i_8] = (((arr_61 [i_6] [i_9] [i_6] [i_8] [12] [i_11 - 1] [i_11 + 1]) ? -1311394170 : (((var_5 ? var_1 : var_2)))));
                        arr_63 [i_9] [i_13] [i_6] [i_6] [i_8] [i_6] [i_9] = ((~(arr_3 [i_11 + 1])));
                    }
                }
                for (int i_14 = 1; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    arr_67 [i_6] [i_8] [i_8] [i_8] [i_14] = (arr_65 [i_6] [i_8] [i_9 - 1] [13] [i_14 + 1]);

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_70 [i_6] [i_8] [i_9] [i_14] [2] |= (((arr_44 [i_6] [i_8] [i_9 + 1] [i_14 - 1]) ? (arr_5 [i_15] [i_8]) : (arr_44 [i_15] [13] [i_8] [i_6])));
                        arr_71 [i_9] [i_9] [i_9] [i_9] [i_15] = (((arr_18 [i_8] [i_9 + 1] [i_8]) | (arr_18 [i_15] [i_15] [i_15])));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_74 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [0] = (((arr_2 [i_14 + 1] [i_6]) & (~1)));
                        arr_75 [i_14] [i_9] [i_9] [i_14 + 1] [i_9] = arr_29 [i_6] [i_16];
                    }
                    arr_76 [i_6] [i_8] [i_9] [i_9] = ((((var_12 ? (arr_50 [i_6] [i_6] [i_9]) : (arr_23 [9] [9] [8]))) ^ (~var_2)));
                }
                arr_77 [i_9] [i_6] [i_9] = (((arr_7 [i_9] [i_9 + 1]) ? (arr_7 [i_6] [i_9 - 1]) : var_12));
            }
            arr_78 [i_6] [i_6] [i_8] = ((((arr_2 [i_6] [i_6]) ? 138 : 33)));
        }
        arr_79 [i_6] = 1;
    }
    #pragma endscop
}
