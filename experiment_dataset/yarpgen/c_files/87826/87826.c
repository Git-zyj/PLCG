/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((max(var_16, var_16))) ? ((max(var_6, var_4))) : var_7)), (!var_4)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((+(((!((max((arr_0 [i_0] [i_0]), 199))))))));
        arr_3 [i_0] = (((((122 != (arr_0 [i_0] [i_0])))) == (max(((86 ? 176 : 122)), (((arr_0 [i_0] [i_0]) / 242))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((-(arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_4] = (((arr_12 [i_1]) ? 80 : 193));
                        arr_15 [i_1] [i_2] [i_1] [i_4] = ((-79 ? ((var_16 - (arr_13 [i_1] [i_3] [i_3] [i_4] [i_4] [i_4]))) : (arr_12 [i_3])));
                    }
                }
            }

            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                arr_20 [i_1] [i_1] [i_2] [i_5 + 1] = (~150);
                arr_21 [i_1] [i_1] [i_5] = (63 && 143);
                arr_22 [i_5] = ((134 ? 252 : (arr_13 [i_1] [i_2] [i_5] [i_5 + 2] [i_1] [i_2])));
                arr_23 [i_5] = ((var_16 & (arr_7 [i_5 + 2] [i_5 + 2] [i_5 + 1])));
            }
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                arr_26 [i_1] [i_2] [i_6 + 1] = ((128 ? 255 : (arr_25 [i_1] [i_2] [i_2] [i_6 - 2])));
                arr_27 [i_2] = (((arr_25 [i_6] [i_6 + 1] [i_6 + 1] [i_1]) ? 128 : (arr_18 [i_6] [i_6] [i_6 - 1] [i_1])));
                arr_28 [i_1] [i_6] = (((var_7 - 134) ? (arr_18 [i_1] [i_1] [i_6] [i_6 - 4]) : 101));

                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    arr_33 [i_7] [i_2] [i_2] = (((arr_1 [i_6 - 2]) ? (arr_1 [i_6 - 3]) : (arr_1 [i_6 + 1])));
                    arr_34 [i_7] [i_7] = 188;
                    arr_35 [i_1] [i_2] [i_6 + 1] [i_6] [i_7] = (arr_17 [i_7]);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_39 [i_1] [i_1] [i_6 - 4] [i_1] = (((251 && 247) < (arr_37 [i_6 - 1] [i_6 - 2] [i_6 - 4])));
                    arr_40 [i_1] [i_2] [i_6] [i_8] = (!211);
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    arr_44 [i_9] [i_1] [i_2] [i_1] = (((103 & (arr_17 [i_1]))));
                    arr_45 [i_1] [i_1] [i_1] [i_1] = (((arr_13 [i_6] [i_6 + 1] [i_6 - 4] [i_6 - 4] [i_6 - 1] [i_6 - 1]) ? (arr_13 [i_6] [i_6 - 4] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 4]) : 79));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    arr_50 [i_1] [i_2] [i_6] [i_10] = (4 > 115);
                    arr_51 [i_1] [i_2] [i_6 - 4] [i_10] = (((arr_36 [i_2] [i_6 + 1] [i_6 - 2] [i_10] [i_6 + 1]) ? (arr_36 [i_2] [i_2] [i_6 - 2] [i_2] [i_6 - 2]) : 142));
                }
                arr_52 [i_6] [i_2] [i_2] [i_2] = (((arr_47 [i_6] [i_2] [i_6 - 3] [i_1] [i_6]) & (arr_47 [i_1] [i_1] [i_6 - 3] [i_1] [i_1])));
            }
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_55 [i_11] [i_1] [i_1] = 15;
            arr_56 [i_1] = ((246 ? (arr_1 [i_1]) : (arr_1 [i_11])));
            arr_57 [i_11] [i_1] [i_1] = (((arr_32 [i_1] [i_11] [i_1] [i_11]) ? 78 : (arr_24 [i_1] [i_1] [i_11])));
            arr_58 [i_11] [i_1] = (((arr_36 [i_11] [i_11] [i_11] [i_11] [i_11]) ? var_16 : var_12));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    {
                        arr_64 [i_13] [i_12] [i_11] [i_11] [i_1] [i_1] = ((-(arr_53 [i_1] [i_11] [i_13 + 2])));
                        arr_65 [i_1] [i_11] [i_1] [i_12] [i_13 - 1] [i_13 - 1] = (((arr_47 [i_13 - 1] [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2]) ? (arr_11 [i_13 - 1] [i_13 - 1] [i_13 + 2]) : 102));
                    }
                }
            }
        }
        arr_66 [i_1] = (((arr_29 [i_1] [i_1] [i_1] [i_1]) ? 88 : 211));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        arr_71 [i_14] = (((arr_41 [i_14] [i_14]) ? (((((var_1 ? 69 : (arr_49 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))) ? (arr_12 [i_14]) : ((var_4 ? var_3 : var_6)))) : ((max((arr_46 [i_14] [i_14]), (arr_62 [i_14] [i_14] [i_14] [i_14]))))));
        arr_72 [i_14] [i_14] = (max(93, (max(((82 ? (arr_53 [i_14] [i_14] [i_14]) : 128)), ((max(131, 152)))))));
        arr_73 [i_14] = max(69, 157);
    }
    var_18 = ((-var_13 + ((~((max(44, var_10)))))));
    var_19 = ((-(max(((max(var_2, 173))), -var_4))));
    #pragma endscop
}
