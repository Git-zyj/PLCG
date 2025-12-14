/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_0]);
        var_21 = (((max((arr_1 [5]), 37))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_22 = (arr_0 [i_1] [i_1]);
        var_23 = (arr_3 [i_1 + 1]);
    }
    var_24 = var_12;

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_25 = (max(var_25, (((max((arr_4 [i_2 + 1] [i_2 + 1]), 65011712))))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_26 = (arr_6 [16]);

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_27 = arr_8 [i_4] [1] [1];
                var_28 = (arr_6 [i_2 + 3]);
                var_29 = (arr_6 [i_2]);
                var_30 *= (arr_7 [13]);
            }

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_31 = (min(var_31, (arr_7 [i_2])));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_32 = (min(((max(((((arr_11 [i_2] [i_3] [i_5]) ^ (arr_14 [i_2 + 1] [8] [8] [7])))), (((arr_5 [10]) | (arr_6 [i_2])))))), ((3685409455 + (max((arr_7 [i_2 - 2]), (arr_9 [i_6])))))));

                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        var_33 = ((max((arr_4 [i_7 - 1] [i_2 + 3]), (arr_4 [i_7 - 3] [i_2 - 1]))));
                        var_34 = (arr_16 [i_2] [i_2] [i_2] [1] [8]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_35 = (((arr_6 [i_2 + 2]) != (arr_15 [i_2 + 1] [i_2 + 3] [i_2 - 2])));
                        var_36 = (arr_9 [i_2 + 1]);
                    }
                    var_37 -= (((arr_16 [i_2] [14] [i_5] [i_6] [i_5]) && (arr_4 [i_2] [i_6])));
                    var_38 = (max((~6416751592461750630), 101));
                    var_39 = ((~(arr_10 [i_2] [i_3] [i_3] [i_6])));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_40 ^= (arr_4 [i_2] [i_2]);
                    var_41 = (max((((max(-7253925595208811669, (arr_13 [i_2 - 2] [i_2 - 2] [i_3] [i_5] [7] [i_9]))))), ((((255 <= (arr_6 [i_2])))))));
                }
                var_42 += (arr_6 [i_2]);
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_43 = (arr_8 [i_2 - 2] [6] [0]);
                var_44 = (arr_12 [i_2 - 2] [i_2]);
                var_45 = arr_24 [i_2] [i_3] [i_10] [i_2 - 1];
            }
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                var_46 ^= (((((min((arr_19 [i_2] [i_2] [i_2] [i_3] [i_11]), 2157)))) > ((2923863330 % (arr_9 [i_2])))));
                var_47 *= (arr_9 [i_2]);
                var_48 = 2960480122;
            }

            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_49 = ((!(!-102)));
                    var_50 ^= (min((arr_21 [i_2] [i_2] [i_12 + 3] [5]), (arr_27 [i_2 + 1] [i_3] [i_2 + 3] [i_13])));
                    var_51 = ((-(((arr_22 [i_2 + 2]) ^ (arr_12 [i_12 + 3] [i_2 - 1])))));
                }

                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    var_52 = ((~((-(~808357771389587107)))));
                    var_53 += 504;
                }
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    var_54 = ((-(arr_14 [i_15 - 1] [11] [i_12 - 2] [11])));
                    var_55 = (arr_17 [i_2] [14] [i_12] [i_15] [i_2] [i_12]);

                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_56 = (arr_5 [i_2 - 1]);
                        var_57 &= (((((min(26, (arr_25 [i_2]))))) != ((-(((arr_24 [i_2] [i_3] [i_15] [i_3]) - 1))))));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        var_58 = (arr_36 [i_17] [i_12] [i_2] [i_2]);
                        var_59 = (max(var_59, (arr_25 [i_3])));
                        var_60 &= ((((-(arr_33 [i_2] [i_2] [i_2] [i_15])))));
                        var_61 = (arr_20 [i_12 - 2] [i_12 - 2] [i_12] [i_2]);
                    }
                }
                /* vectorizable */
                for (int i_18 = 1; i_18 < 17;i_18 += 1)
                {
                    var_62 = (((arr_32 [i_18 - 1] [i_12 - 2]) < (arr_32 [i_18 - 1] [i_12 + 2])));
                    var_63 = (arr_41 [i_2 + 2] [i_3] [i_12 + 4] [i_18] [i_18] [i_18 + 1]);
                }
                var_64 = (arr_9 [i_12]);
                var_65 = (((min(124, (arr_18 [i_2] [i_2] [7] [i_12] [i_12])))));
                var_66 = (min(((((arr_20 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2]) != -3))), (max((arr_20 [i_2 + 2] [i_2] [i_2 + 3] [i_2]), (arr_20 [i_2 - 2] [i_2] [i_2 + 3] [i_2])))));
            }
        }
    }
    #pragma endscop
}
