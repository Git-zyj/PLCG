/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((((arr_3 [i_1] [i_0] [i_0]) ? -32632 : (((arr_3 [i_0] [i_0] [1]) ? 32632 : (arr_3 [i_0] [i_0] [i_1]))))), ((min((arr_1 [i_1] [i_0]), (arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (~3507757309);
                                var_14 = 32623;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_12, var_6));

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_16 = arr_13 [i_6];
                    var_17 = (min(var_17, ((((arr_19 [i_5] [i_5] [i_5]) ? ((~((min(21427, 32632))))) : var_2)))));
                }
            }
        }
        arr_21 [i_5] [1] = max((arr_13 [i_5]), (max((((32632 ? -15381 : var_2))), (max((arr_18 [5] [5]), (arr_14 [1] [14]))))));
    }
    var_18 = -var_6;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_33 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_12] = (arr_26 [i_8]);
                                var_19 -= (((-(arr_17 [i_10 - 2]))));
                                arr_34 [i_8] [i_11] [i_12] [i_11] [17] [i_11] [7] = (max((((arr_25 [i_9]) + (max(10700669757649836213, var_12)))), ((-2115052775 ? (min(-45, (arr_13 [i_8]))) : (arr_27 [i_9] [i_10 - 1] [i_9])))));
                                arr_35 [i_8] [i_8] [i_12] [i_9] [i_10] [i_10] [i_12] = ((+(((arr_23 [i_8] [i_8]) ? 0 : (arr_23 [i_8] [i_12])))));
                                arr_36 [i_8] [i_12] [i_11] [4] = max(1342, 21);
                            }
                        }
                    }
                }
                var_20 = ((-(((arr_29 [i_9]) ? (arr_29 [i_9]) : (arr_29 [i_9])))));
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max(297467734, (min((((249 ? (arr_17 [i_9]) : (arr_25 [i_15])))), (arr_41 [18] [i_9] [i_13 - 1] [i_14]))))))));
                                arr_45 [i_13 - 1] [i_9] [i_13 - 1] [i_15] [i_9] &= (~-8757980670349230350);
                            }
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    arr_49 [i_8] [1] [i_8] [1] = (max(((min((arr_25 [i_8]), (arr_46 [i_9] [i_9])))), 0));
                    arr_50 [i_16] [i_9] = ((!((((((arr_43 [i_8] [i_8] [i_8] [i_16] [i_8]) ? (arr_44 [i_8] [i_8] [i_8] [21] [i_16] [i_16] [i_16]) : (arr_12 [i_16])))) != var_6))));
                    arr_51 [10] [1] [i_16] [16] = (max((arr_17 [i_9]), (((arr_48 [i_8] [i_9] [i_16]) ? (((!(arr_22 [i_8] [i_16])))) : var_1))));
                }
                arr_52 [4] [i_9] = ((var_12 % (arr_46 [i_8] [i_9])));
            }
        }
    }
    #pragma endscop
}
