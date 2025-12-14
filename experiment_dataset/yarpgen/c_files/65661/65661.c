/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_7));
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(((min((arr_2 [i_0]), (arr_1 [i_0])))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_14 = (min(var_14, ((min(4479856335847969487, -5941)))));
            arr_7 [i_0] = (arr_2 [i_0]);
            var_15 |= ((!((max((13002257448539998006 >= 1), (arr_4 [i_1] [i_1]))))));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = ((((158 && (arr_6 [i_2 + 2] [i_0]))) ? 158 : 1350616529));
                            var_17 = (min(var_17, ((((arr_9 [i_0] [i_0]) ? (arr_6 [i_0] [i_2]) : ((((arr_22 [i_2] [i_2] [i_3] [i_4] [i_4]) >= 63))))))));
                            var_18 = var_5;
                        }
                    }
                }
            }
            var_19 = (((max((-7077973659060802610 >= 49), ((var_5 ? (arr_21 [i_0] [i_0]) : (arr_0 [i_0]))))) / ((18446744073709551588 >> (159 - 148)))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] [i_6] = 106;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_20 = (max(var_20, var_7));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_21 = ((-(arr_35 [i_10] [i_10] [i_10 + 3] [i_10 + 3] [i_10 + 2])));
                                arr_38 [i_6] [i_6] [i_6] [17] [5] [i_6] [i_6] = (~-80);
                                var_22 = (((arr_12 [i_7] [i_10] [i_10]) ? (arr_12 [i_7] [i_10 + 4] [i_10]) : (arr_12 [i_7] [i_10] [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_23 = (arr_11 [i_11] [i_11]);
        var_24 += -80;

        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        {
                            arr_52 [i_11] [i_11] [i_12] [i_13] [i_14] [i_15] = ((+((((!var_3) != ((31 ^ (arr_21 [i_11] [i_12]))))))));
                            var_25 = (min(var_25, var_2));
                        }
                    }
                }
            }
            arr_53 [i_12] = arr_46 [i_11] [i_11] [i_11] [i_12];
            arr_54 [i_11] |= ((-((1 ? (arr_1 [i_12]) : -63))));

            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                arr_57 [i_12] [0] = -63;
                var_26 = 242;
                var_27 -= 4294967295;
                arr_58 [i_11] [i_12] [i_16 + 1] [i_11] = (max(((-63 ? 80 : 7302)), 63479));
            }
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_28 = ((+(max(((((arr_29 [i_11] [i_12] [i_17]) ? 138 : var_10))), ((0 + (arr_55 [i_11] [i_12])))))));
                var_29 = 10;
                arr_61 [i_11] [i_12] [i_11] = 7077973659060802610;
            }
            arr_62 [i_11] [i_12] [i_12] = (arr_60 [i_12]);
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
        {
            var_30 = 15957;
            var_31 ^= arr_35 [i_18] [i_11] [i_11] [i_18] [i_11];
            arr_65 [i_11] = ((-(arr_59 [i_11] [i_11] [i_11] [i_18])));
            arr_66 [i_18] = (((((arr_41 [i_11] [i_11] [i_11]) >= var_4)) ? 64 : (arr_29 [i_11] [i_11] [i_18])));
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 16;i_19 += 1)
        {
            var_32 ^= 192;
            var_33 = (max(var_33, (arr_10 [i_11] [8])));
        }
    }
    #pragma endscop
}
