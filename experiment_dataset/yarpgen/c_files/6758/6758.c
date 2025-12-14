/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0 - 3] [i_0] = (~1);
        arr_4 [13] = ((((min((arr_1 [i_0] [i_0 - 3]), (arr_1 [i_0] [i_0 - 1])))) >= (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((var_11 ? (!var_9) : (44242 || var_11)))) ? (((var_19 && (((var_11 ? var_11 : 1)))))) : (((var_6 || (arr_0 [i_1 - 3]))))));
        arr_9 [i_1] [i_1] = (arr_7 [i_1 + 1] [i_1 + 1]);
        arr_10 [i_1] = var_9;
    }
    var_20 = ((var_14 ? ((((var_13 ? -6883034846459058406 : var_7)) + var_5)) : 2313398644709670560));

    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    arr_22 [i_2 - 2] [i_3 + 2] [i_2] = -var_1;
                    arr_23 [i_2] [i_2] [i_2] [i_2] = (((((!(!1)))) < (((arr_16 [i_4] [i_3] [i_2]) ? (((!(arr_15 [i_2 + 1])))) : (arr_0 [1])))));
                    arr_24 [i_3] [i_2] = (max((var_7 < var_2), var_7));

                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        arr_29 [i_2] [i_5] = 6883034846459058397;
                        arr_30 [0] [i_3] [i_4 + 2] [i_4] [i_2] = var_17;
                        arr_31 [i_2] = ((((arr_26 [i_5] [i_2 - 2] [i_3 - 1] [i_2] [i_5] [i_5 - 2]) <= var_6)) ? (~var_15) : (max(var_8, var_19)));
                        arr_32 [i_2 + 2] [i_2] [i_4] [i_5] = (min((var_12 ^ var_7), (!var_6)));
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        arr_36 [i_2] [i_2] [i_2] = (var_5 < var_11);
                        arr_37 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2] = (((!var_3) ? ((12646 ? var_3 : var_5)) : (arr_1 [i_6 - 2] [i_6 - 2])));
                    }
                }
            }
        }
        arr_38 [i_2] = (max((((arr_17 [i_2 + 1] [i_2]) ? var_2 : var_10)), (((arr_17 [1] [i_2 + 1]) ? (arr_17 [i_2 - 1] [i_2 - 3]) : var_17))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_47 [i_2] [i_7] [i_8 + 1] [i_2] = (arr_18 [i_2] [i_8] [i_2]);
                        arr_48 [i_9] [i_2] [i_8] [i_7] [0] [i_9] = (max((((var_19 ? var_1 : (arr_26 [i_2] [i_7] [i_8] [i_9] [i_7] [i_9 - 3])))), (min((arr_14 [i_7]), var_11))));
                        arr_49 [i_2] [i_2] [i_2] [0] [i_2] [i_9 - 4] = ((((((arr_26 [i_2 - 2] [1] [i_7] [i_2] [i_8] [15]) ? (var_19 && var_0) : (var_1 < var_10)))) > (((((arr_16 [i_2 + 2] [i_7] [i_2 + 2]) ? var_9 : (arr_44 [11] [1] [i_2] [i_8 + 1]))) * (arr_1 [i_9 + 3] [i_9 + 3])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_57 [1] [i_11 - 1] [1] = var_7;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_64 [i_10] [i_13 - 1] [1] [i_10] [i_14] = ((arr_56 [i_11 - 1] [i_11] [1]) & var_15);
                                arr_65 [12] = (((arr_50 [i_10 + 1]) >= var_9));
                            }
                        }
                    }
                }
            }
        }
        arr_66 [i_10] = (((arr_50 [i_10 + 1]) ? var_18 : (arr_58 [i_10] [i_10 + 1] [i_10 + 1] [16])));
        arr_67 [i_10] [i_10] = (~40652);
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 14;i_18 += 1)
                    {
                        {
                            arr_80 [i_16] = ((var_2 | (((var_4 & (((11910 || (arr_60 [i_18 + 1] [i_15] [i_16] [i_15])))))))));
                            arr_81 [i_15] [0] [i_17] [i_16] [i_18] = (arr_11 [i_17 - 1] [i_16]);
                            arr_82 [0] [i_18] = var_16;
                        }
                    }
                }
                arr_83 [4] = ((-6534315510838307756 ? (var_2 || var_8) : var_9));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 21;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 23;i_23 += 1)
                        {
                            {
                                arr_94 [i_19] [i_19] [i_21] [i_22 + 2] [i_23] = ((var_15 + (((((-24 & (arr_59 [i_23] [i_22 + 1] [i_21] [i_20] [i_19] [i_19])))) ? var_0 : (min(var_18, 1099655541))))));
                                arr_95 [i_19] [i_19] [i_23] [i_19] [i_23] = ((var_17 / (((!var_8) ? ((var_9 ? var_13 : var_13)) : (arr_61 [i_21] [i_20] [i_20])))));
                                arr_96 [12] [12] [4] [i_22 + 2] [i_19] = ((var_0 | (arr_55 [i_19] [i_20] [i_21] [14])));
                                arr_97 [i_19] = var_11;
                            }
                        }
                    }
                    arr_98 [i_19] = ((-((-21 ? (max(var_16, var_0)) : (arr_62 [i_19] [8] [i_21] [i_21])))));
                }
            }
        }
    }
    #pragma endscop
}
