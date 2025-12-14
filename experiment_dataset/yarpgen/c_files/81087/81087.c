/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [8] = (((arr_0 [i_0] [i_0]) >= (((arr_0 [i_0] [7]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] [10] = (73904812 ? (arr_0 [0] [i_0]) : (arr_1 [i_0]));
        arr_4 [i_0] [i_0] = var_5;
    }

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1 - 2] = ((1 ? -10 : (!10)));
        arr_8 [i_1] = (((((~((-2106950595 ? 4032 : 1))))) ? -4 : 1));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_11 [12] = 32767;
        arr_12 [10] = 48;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = var_2;
        arr_18 [9] = (((((var_5 ? 5228 : (arr_16 [4])))) ? var_1 : (var_0 + var_9)));
        arr_19 [i_3 + 1] &= var_0;
    }

    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        arr_23 [i_4] = ((1 & ((~((1 >> (5244 - 5234)))))));
        arr_24 [i_4] = ((~((-2106950596 & (arr_15 [i_4 - 2] [i_4 - 3])))));
        arr_25 [i_4] [i_4] = (((-1073741824 * 1) ? ((-((8 ? 1 : -1)))) : (!1602278403)));
        arr_26 [i_4] [11] = -var_6;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 6;i_5 += 1)
    {
        arr_30 [i_5] = var_11;
        arr_31 [i_5] = arr_5 [i_5 + 3] [i_5 - 3];
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_34 [i_6] = (arr_10 [i_6] [18]);

        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_38 [20] = -var_12;
            arr_39 [i_6] [i_6] = (1 != 0);

            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                arr_42 [i_6] [i_7] = (1 / 1);

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_46 [i_9] = ((65535 ? ((1061332818 ? 8 : (arr_33 [18] [i_7]))) : 0));
                    arr_47 [4] [i_7] [i_8 + 1] [0] = (49823 + 36157);
                }
                arr_48 [6] [i_8] = ((16384 ? 0 : 65535));
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                arr_53 [i_10] [i_10] [i_10 - 3] [i_10 - 3] = -32764;
                arr_54 [9] = ((3720 ? 0 : 1));
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_58 [i_7] [4] [i_7] [i_7] = (var_8 || 1);

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_64 [i_6] = ((65535 ? 13827 : 1));
                        arr_65 [12] [i_7] [1] [2] [6] = arr_41 [i_6];
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        arr_70 [i_6] [7] [8] [5] [7] [7] = (1984 && 1);
                        arr_71 [18] [18] [i_6] [18] [i_14] [5] [15] = (1 / 1);
                        arr_72 [18] [i_7] [1] [i_12] [i_14] = (((arr_61 [i_14] [14] [20] [20]) && (arr_61 [1] [16] [16] [i_14])));
                        arr_73 [9] [i_14] [9] [i_12] [9] [i_14] = 1;
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_77 [18] [i_7] [5] [i_12] [3] [21] [i_11] = -35107;
                        arr_78 [i_6] [1] = (!(arr_66 [5] [i_7] [15] [9] [i_12] [17]));
                    }
                    arr_79 [i_6] [15] [1] [i_12] = (!-12198731);
                    arr_80 [i_12] [i_12] [1] [2] &= (~-32750);
                }
                arr_81 [i_6] [12] [i_6] [i_6] = (((arr_52 [i_6] [i_7] [i_11]) * (arr_52 [i_6] [i_6] [i_11])));
                arr_82 [i_11] [16] [18] = (((26987 + 1) && (65535 && 134216704)));
                arr_83 [i_6] [2] [i_11] = 1;
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_87 [i_6] [i_6] = (~1);
            arr_88 [i_6] = (((!1) ? -var_5 : (arr_86 [i_16] [i_6])));
            arr_89 [i_16] [i_16] = ((var_3 ? (arr_62 [i_6] [13] [i_16] [1]) : var_9));
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_92 [i_6] = ((-126 ? 36900 : 16384));
            arr_93 [4] [19] [4] = 1628;
            arr_94 [21] [21] [21] = var_0;
        }
    }
    #pragma endscop
}
