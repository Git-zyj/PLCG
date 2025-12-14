/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_12 = (min(var_12, (((((((20 * (arr_12 [10]))) - 2147483647)) < ((((18 ? (arr_13 [i_3] [i_3]) : 22)) | ((var_7 | (arr_6 [i_3] [i_1] [i_1]))))))))));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_2] [4] [i_4] [i_3] [i_1] |= (((min((((arr_6 [i_3] [i_1] [i_3]) ? 18 : (arr_15 [i_4] [i_3] [i_0] [i_3] [i_0]))), ((var_3 ? var_1 : var_7)))) > ((min(((((arr_10 [i_0] [i_2]) == (arr_0 [i_0] [i_0])))), -1)))));
                            var_13 -= ((((((arr_15 [0] [i_3] [i_2] [i_3] [i_3]) ? var_7 : ((((-127 - 1) < (-127 - 1))))))) > (((arr_15 [i_4 - 1] [i_3] [i_4 + 1] [i_4 + 2] [i_4 + 2]) ? (arr_15 [i_4 + 2] [i_3] [i_4 - 1] [i_4 + 2] [i_4 + 2]) : (arr_15 [i_4 + 2] [i_3] [i_4 + 2] [i_4 + 1] [i_4 + 2])))));
                            var_14 &= 2720528655497121279;
                            var_15 -= (((((arr_14 [i_0] [i_1] [i_4 + 2] [i_3] [i_4]) ? (arr_14 [i_0] [i_0] [i_4 + 2] [i_3] [i_4 + 2]) : var_2)) | (((min((((20 || (arr_13 [i_3] [i_4 + 2])))), (arr_9 [i_0] [i_3] [i_0])))))));
                        }
                        arr_19 [i_0] = (max((max(((var_11 | (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))), (((var_8 ? 20 : 64030))))), (~3569)));
                    }
                    arr_20 [i_0] [i_1] [i_2] = (((arr_13 [i_0] [i_1]) + (max(((12299086592589231757 ? 8642003591588266537 : (arr_3 [i_0] [i_0] [i_2]))), -15108))));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        var_16 = var_9;
                        arr_23 [i_0] [6] [i_5] [i_5 + 1] |= (max(((max(-1, (min((arr_0 [i_0] [i_0]), (arr_6 [6] [i_1] [i_5])))))), ((((arr_14 [i_5 + 1] [0] [i_2] [0] [i_0]) && 2060059751)))));
                        arr_24 [i_0] [i_0] [i_2] [i_2] = ((~((((arr_17 [i_5 - 3]) < (min(10, -26)))))));
                    }
                    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_29 [i_0] = 177;
                        var_17 += ((((max((((var_10 ? (arr_6 [12] [12] [i_2]) : var_0))), (max(-26, -1))))) | ((var_9 << (((arr_2 [i_6 + 1]) + 13152))))));
                    }
                    for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 = (arr_11 [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 3] [i_7 - 3]);
                        var_19 = (min(var_19, var_1));
                        var_20 = (max(var_20, 26));
                        var_21 &= (((arr_12 [i_0]) ^ (arr_11 [i_0] [i_1] [i_2] [i_7] [i_0] [i_2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_44 [i_11] [i_10] [i_0] [i_8 + 1] [i_0] = (((((-((var_6 ? var_3 : (arr_43 [i_0] [2] [i_9])))))) * (min(-1, ((((arr_42 [8] [8] [i_0] [4]) < (arr_14 [i_0] [i_8 - 1] [i_8 - 1] [i_0] [i_8 - 1]))))))));
                                arr_45 [i_9] [i_0] [i_9] [i_9] [i_11 - 2] [i_9] [i_11 - 1] = var_3;
                                arr_46 [i_0] [i_8 - 1] [i_9] [i_10] [i_0] [i_0] = (arr_26 [8] [8] [8] [11]);
                                arr_47 [i_0] = ((127 ? (((((var_3 && -2013566362) < var_4)))) : (max(343251286, (arr_37 [i_11 + 1] [i_11 - 2] [i_10])))));
                            }
                        }
                    }
                    var_22 -= (-((var_6 & (arr_2 [i_8]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    var_23 = (((arr_54 [i_13]) > (((arr_53 [i_12]) ? var_6 : 12456619941621308496))));
                    arr_58 [i_13] [i_13] [i_14] = (11120231616136407981 == -2318991438080457215);
                    var_24 = (arr_49 [i_12] [i_12]);
                    var_25 = (arr_53 [i_12]);
                }
            }
        }
        var_26 = (arr_52 [i_12] [i_12] [i_12]);
        arr_59 [i_12] [i_12] = (var_0 > 12456619941621308509);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
    {
        var_27 = var_7;
        arr_62 [i_15] = var_11;
        arr_63 [i_15] = (arr_49 [i_15] [i_15]);
    }
    var_28 = (min(var_28, ((((((var_1 ? var_0 : (~var_7)))) ? (max((var_4 + var_8), (9087122860922756887 || var_1))) : (!var_5))))));
    var_29 |= (max(((var_6 ? var_9 : var_5)), var_1));
    var_30 += -18;
    #pragma endscop
}
