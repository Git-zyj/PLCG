/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((min((!var_16), var_1)))));
    var_19 = -1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((-1 ? (((arr_2 [i_1 + 1]) ? 4 : -13)) : (arr_2 [i_0])));
            arr_6 [i_0] [6] |= (max(((~((-9 ? 1 : 0)))), (-12 != 12)));
            arr_7 [i_1] = (((((var_1 ? var_0 : var_8))) ? (~1) : 16));
            arr_8 [i_0] [i_0] [i_1] = ((3 ? var_13 : (var_6 - var_6)));
        }
        arr_9 [i_0] = ((623 ? (((56 ? (arr_1 [i_0 - 1]) : 135))) : (((-32 + 9223372036854775807) << (49 - 49)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] &= (((((1 | (arr_11 [i_2] [i_2])))) ? -var_4 : -32));
        arr_14 [i_2] = var_13;
        arr_15 [i_2 + 1] [i_2 + 1] = ((var_16 * (((1 ? 1 : 208)))));
    }

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            arr_22 [i_3] [16] [i_4] = var_6;

            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                arr_25 [i_3] [16] [i_3 + 1] [i_3] = var_16;
                arr_26 [i_5] [i_5] [i_5] [2] = (max((((!(!-50)))), -509451808));
                arr_27 [i_3] [i_3] [2] = ((((!(!-7174)))));
                arr_28 [0] [i_4] [i_5] = (((((var_6 ? 0 : (arr_0 [i_3 - 1])))) ? 1 : var_6));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_15;
                            arr_36 [i_3 - 3] = 0;
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_30 [i_3 - 3] [i_3 - 3] [i_3]);
                            arr_38 [i_3] [i_3] [i_3] [i_3] [i_3 - 2] = 5621;
                        }
                    }
                }
                arr_39 [i_3] [i_4] [i_4] [i_6] |= 920112343;
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_48 [i_10] [i_9] [4] [i_9] [i_9] [i_9] [0] = ((min(12, (6 & 2045890698))) & (arr_29 [i_4]));
                            arr_49 [i_9] [7] [i_10] [i_9] [13] = (arr_41 [i_9] [i_10] [i_11]);
                            arr_50 [i_10] [i_4] [i_9] [i_10] [i_11] = ((((var_8 ? (!-609) : 9193)) == (~-1)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {

                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            arr_58 [i_4] [i_13] = 12;
                            arr_59 [i_3] [i_12 + 2] [i_12 + 2] [16] = -1;
                            arr_60 [i_12] [i_12] [6] = 1425405494;
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            arr_64 [i_3] [i_4] [i_12] [i_13] [i_15] [i_15] [i_13] = var_4;
                            arr_65 [i_3 + 1] [i_13] [i_3 + 1] [i_13] [i_15] [i_15] = ((24568 >> (((arr_34 [i_3 - 1] [i_13] [i_15] [i_15]) - 116))));
                            arr_66 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_13] [i_3] = 0;
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                        {
                            arr_70 [14] [14] = ((59918 ? ((2045890698 ? 14357159682724901059 : (((5054508531059048583 ? -37 : var_8))))) : var_17));
                            arr_71 [i_3] [10] [i_12] [i_12] [i_12] &= ((~(((arr_54 [i_3] [i_3] [i_3] [i_3] [i_16]) ? ((max(var_3, 40123))) : var_3))));
                            arr_72 [i_13] [i_12] [i_16] = (((~59911) ? ((~(arr_23 [i_13] [i_12 + 4]))) : (~1)));
                        }
                        arr_73 [16] [i_3] [i_3] [10] [i_3] [16] |= (arr_47 [i_13] [i_13] [i_12] [7] [i_3 + 1] [i_3 + 1]);
                        arr_74 [i_13] [i_4] [i_13] [i_13] = ((-7 ? -2782585343130639144 : ((((!(~1)))))));
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
        {
            arr_78 [i_3] [i_3] [i_3] = 12;
            arr_79 [i_17] [i_3] = (((arr_76 [i_17] [i_17]) ? (~84) : ((var_10 ? 4294967295 : 59903))));
            arr_80 [i_3] = var_10;
        }

        for (int i_18 = 2; i_18 < 16;i_18 += 1) /* same iter space */
        {
            arr_83 [i_3] [i_18] = var_9;
            arr_84 [i_3 - 3] [i_3] [i_18] = (((((~(1 + var_13)))) ? 4311956969267831626 : 1));
        }
        for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
        {
            arr_87 [i_3 + 1] [i_3 + 1] [i_3] = (max(25, var_2));
            arr_88 [i_19] = 4311956969267831634;
        }
    }
    #pragma endscop
}
