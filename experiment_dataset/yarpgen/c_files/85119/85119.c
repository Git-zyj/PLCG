/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_2 != var_6) >= var_15));
    var_17 = 1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_18 *= (((arr_2 [i_1 - 2] [i_0 + 1]) > (arr_2 [i_0 + 2] [i_2 + 1])));
                arr_9 [i_0] [i_2] [i_2] = (!(arr_5 [i_1 - 2] [i_1 - 2] [i_0 - 1]));
                var_19 = (max(var_19, 0));
                arr_10 [2] |= (((arr_0 [i_2] [i_2 + 3]) != (arr_0 [i_2] [i_2 + 3])));
                var_20 = ((((arr_0 [i_2 + 3] [i_0 + 2]) + 2147483647)) >> (((arr_0 [i_2 + 1] [i_0 + 1]) + 195746339)));
            }
            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_1] [i_3 - 3] = (((arr_2 [i_3] [i_0 + 1]) || (arr_5 [i_1 + 1] [i_1 - 2] [i_0 + 1])));

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_21 = (max(var_21, (arr_15 [i_0 + 1])));
                    arr_17 [i_0] [i_3] [i_0] = (~(arr_8 [6] [i_1 + 1]));
                    arr_18 [i_4] [i_1] [14] [i_1] [i_3 - 3] [i_0] = (((arr_3 [i_3 - 2] [i_0 - 1]) - (arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1])));
                    arr_19 [i_0] [i_4] [i_3 + 2] [i_4] = ((-(arr_3 [i_0 + 3] [i_3 + 3])));
                }
                var_22 = (min(var_22, (((arr_11 [i_3] [i_0 + 3]) * (arr_11 [2] [i_0 + 1])))));
            }
            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_23 = (max(var_23, ((((arr_12 [i_0] [i_0 + 2] [i_1 - 1] [i_5 - 3]) << (((arr_12 [i_0] [i_0 + 2] [i_1 + 1] [i_5 + 4]) - 6050485708387856511)))))));
                arr_24 [i_0] [i_0] [6] [i_0 - 1] = (arr_1 [i_5]);
                var_24 = -1;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_25 = (arr_11 [i_5 - 1] [i_6]);
                            var_26 = (((arr_3 [i_7] [i_6]) == (arr_6 [i_0 + 3] [i_1] [i_5 + 2])));
                            arr_32 [i_0] [i_0] [i_0] [i_6] [i_6] = (1 < 255);
                            arr_33 [14] [i_1 + 1] [i_5] [i_6] [i_7] = (arr_5 [i_0] [i_5 - 1] [i_6]);
                        }
                    }
                }
            }
            arr_34 [i_1 - 2] [i_0] = (~1);
        }
        /* vectorizable */
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            arr_39 [i_0] [i_8 - 2] = (254 <= 1);
            arr_40 [i_0] [i_8] [i_8 - 3] = (arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [8] [i_0]);
        }
        arr_41 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_27 = ((arr_31 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0]) != (max((arr_37 [i_0 + 3]), (arr_35 [i_0 + 2] [i_0 + 2]))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_28 = (arr_5 [i_10] [i_10] [i_9 - 1]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_55 [i_9] [i_9] [i_9] [i_12] = (((arr_5 [i_9] [i_11] [i_12]) & (arr_5 [i_12] [i_10] [i_9])));
                        arr_56 [i_9] [i_10] = ((arr_45 [i_9 + 2] [i_9]) < (arr_45 [i_9 - 1] [i_9]));
                    }
                }
            }
            arr_57 [i_9] [2] [2] &= ((-(arr_48 [i_9 + 2] [i_9 + 1])));
        }
        arr_58 [i_9] = 1;
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            arr_65 [i_13] = (min(((((arr_60 [i_13 + 3]) <= (arr_60 [i_13 + 2])))), ((~((max((arr_63 [i_14]), (arr_59 [i_13]))))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_29 = 0;
                        var_30 = (max(var_30, ((((((arr_63 [i_13 + 2]) >> (((arr_59 [i_13 + 2]) - 64)))) > ((max((arr_59 [i_13 - 1]), (arr_63 [i_13 - 1])))))))));
                        var_31 = (max((arr_66 [i_13 + 2] [i_13] [i_13] [i_13 + 1]), (max((arr_66 [i_13] [4] [i_13 + 2] [i_13 + 3]), (arr_66 [i_13] [0] [i_13 + 2] [i_13 + 3])))));
                    }
                }
            }

            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                arr_74 [i_14] |= (arr_68 [i_13] [i_13] [i_13] [i_13]);
                arr_75 [i_13] = ((((((((arr_70 [i_17]) <= (arr_73 [i_13] [i_14] [i_13])))) != (arr_59 [i_13 + 2])))) % (max((arr_71 [i_13] [i_17] [i_17]), (arr_61 [i_13 + 2] [i_13 + 3]))));
                var_32 = (max(var_32, (arr_68 [i_17] [15] [i_14] [i_13])));

                /* vectorizable */
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_79 [i_13] [i_13] [i_13] [i_13] [i_13] [i_18] = (((arr_78 [i_13 + 1] [i_13 + 1] [i_17] [i_18]) == (arr_78 [i_13] [i_14] [i_17] [i_18])));
                    var_33 ^= ((arr_76 [i_13 + 1] [i_13] [i_13 - 1] [i_13 - 1] [i_18]) || (arr_76 [i_13 - 1] [i_13] [i_13 - 1] [i_18] [i_18]));
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            var_34 *= (((arr_62 [i_13 + 2] [i_19] [i_19]) >= (arr_61 [i_13 + 2] [i_13 + 1])));
            arr_82 [i_13] [i_13] [i_13] = ((arr_76 [i_13] [i_13] [i_13] [i_19] [i_13]) / (arr_69 [i_13 - 1] [i_13 + 2] [i_13 + 1] [i_13 + 1]));
        }
        arr_83 [i_13] [i_13] = ((((arr_67 [i_13] [i_13]) > (arr_67 [i_13] [i_13]))));
        arr_84 [i_13] [i_13] = (arr_63 [i_13]);
    }
    var_35 = var_13;
    #pragma endscop
}
