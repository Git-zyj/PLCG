/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 ^ var_8);
    var_14 &= var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0 + 1]) == (arr_0 [i_0 - 2])));
        arr_3 [i_0] = (((arr_1 [i_0 + 1]) & (arr_1 [i_0 - 2])));
        var_16 ^= (((arr_2 [i_0 - 2]) > var_12));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_17 += var_5;
        var_18 = (min(var_18, var_8));
        var_19 -= (arr_6 [i_1 - 3]);
        arr_7 [i_1] = var_4;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_20 = var_8;

        for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_21 &= (((arr_5 [i_2 + 1]) && var_8));
                arr_16 [i_2] [i_2] [i_3 + 1] [i_3 + 1] = (arr_10 [i_2 + 1] [i_2 + 1] [i_4]);
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 = (arr_17 [i_2] [i_2] [i_2]);
                var_23 = (min(var_23, (var_9 & var_2)));
                arr_19 [i_2] [i_3 - 3] [i_5] &= var_0;
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_23 [i_2 + 1] [i_2 + 1] [i_6] = (((arr_15 [i_2 + 1] [i_3 - 1]) ^ (arr_5 [i_6 + 1])));
                arr_24 [i_2] [i_3] [i_3] [i_3] = (arr_11 [i_6 - 1] [i_3 + 1]);
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_24 *= var_5;
                var_25 -= (arr_8 [i_3 - 1]);
                arr_27 [i_7] [i_7] [i_7] [i_2] = var_6;
            }
            arr_28 [i_2 + 1] [i_3 - 2] [i_3 + 1] = (arr_14 [i_3] [i_2] [i_2] [i_2]);
        }
        for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_26 = var_9;
                    var_27 = (((arr_15 [i_2 + 1] [i_8 - 2]) ^ (arr_15 [i_2 + 1] [i_8 - 3])));
                    var_28 -= (((((arr_38 [i_8 - 1]) + 2147483647)) >> (((arr_4 [i_2]) << (var_6 - 9548986250808587362)))));

                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        var_29 -= (((arr_35 [i_2 + 1] [i_8 - 1] [i_10] [i_2 + 1]) > (arr_29 [i_2] [i_8] [i_9])));
                        var_30 *= var_6;
                        var_31 = (((arr_43 [i_8 - 3] [i_2 + 1]) > (arr_36 [i_2 + 1])));
                        var_32 = var_11;
                        var_33 = (((arr_22 [i_11 + 2]) && (arr_30 [i_8] [i_8] [i_8 - 1])));
                    }
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    var_34 = (((arr_44 [i_12] [i_8 - 1] [i_2 + 1]) && (arr_44 [i_2 + 1] [i_8 - 3] [i_2 + 1])));
                    var_35 -= var_9;
                }
                var_36 = (max(var_36, (arr_10 [i_9] [i_8] [i_2])));
            }
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                arr_50 [i_8] [i_13] = (((arr_45 [i_2 + 1] [i_2 + 1] [i_13 + 2] [i_2 + 1]) + var_6));
                var_37 |= ((var_1 << (arr_26 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                var_38 = (max(var_38, (arr_42 [i_2] [i_8] [i_13 - 1] [i_13 + 2] [i_13 - 1] [i_13] [i_13 + 2])));
                var_39 = (arr_49 [i_13 - 1] [i_2 + 1] [i_8 + 1] [i_2 + 1]);
                var_40 = (((arr_17 [i_2 + 1] [i_8 - 1] [i_13 + 2]) >= 1306256075));
            }
            var_41 = var_11;
        }
        for (int i_14 = 3; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_42 = (((arr_11 [i_2] [i_2]) / ((var_7 | (arr_13 [i_2] [i_2] [i_2] [i_2])))));

            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                arr_56 [i_2] [i_2] [i_15] = ((arr_42 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1]) ^ var_2);
                var_43 = (arr_54 [i_14 - 2] [i_15]);
            }
            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                var_44 = var_9;
                var_45 = (((arr_14 [i_2] [i_14 - 2] [i_2] [i_2 + 1]) & (arr_14 [i_2] [i_14 - 2] [i_16 - 1] [i_2 + 1])));
                var_46 ^= (arr_15 [i_2] [i_2]);
                var_47 = var_6;
                var_48 = (((arr_44 [i_14 - 3] [i_2] [i_2]) | (arr_44 [i_14 - 3] [i_14 - 3] [i_14])));
            }
        }
        var_49 = var_8;
        var_50 = (max(var_50, (arr_17 [i_2] [i_2 + 1] [i_2])));
    }

    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {

        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                var_51 = var_9;
                var_52 -= (((arr_62 [i_19]) | (arr_62 [i_19])));
                var_53 = var_11;
            }
            for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
            {
                var_54 = var_6;
                var_55 = (max(var_55, var_4));
            }
            for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
            {
                var_56 *= ((var_12 == (arr_67 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 - 1])));
                arr_74 [i_17] [i_18] [i_18] [i_18] = (((arr_68 [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1]) - (arr_68 [i_18 - 1] [i_18 + 1] [i_18] [i_18 - 1])));
                var_57 = var_10;
            }
            var_58 = arr_59 [i_18];
        }

        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            arr_78 [i_17] [i_22] [i_22] &= (((arr_68 [i_17] [i_17] [i_17] [i_17]) >> (var_4 - 1176913534)));
            var_59 = (min(var_59, ((((var_8 > var_0) <= (arr_67 [i_17] [i_17] [i_17] [i_17]))))));
        }
        for (int i_23 = 4; i_23 < 21;i_23 += 1)
        {
            arr_81 [i_17] = (((arr_61 [i_17] [i_17]) < (arr_68 [i_17] [i_17] [i_23 - 3] [i_23])));
            var_60 = var_5;
            var_61 = (((arr_71 [i_17] [i_17] [i_17]) || (arr_72 [i_23])));
            arr_82 [i_17] [i_17] [i_17] = (arr_59 [i_23 - 2]);
            var_62 = (arr_62 [i_17]);
        }
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            arr_85 [i_17] [i_17] [i_17] = ((var_12 + ((((var_4 < (arr_67 [i_17] [i_24] [i_17] [i_17])))))));
            var_63 ^= (((arr_76 [i_24]) ^ var_11));

            for (int i_25 = 4; i_25 < 20;i_25 += 1) /* same iter space */
            {
                var_64 = var_5;
                arr_88 [i_17] [i_17] [i_24] [i_25] = var_9;
                var_65 = (min(var_65, (arr_63 [i_17])));
                var_66 = (max(var_66, (arr_63 [i_25 - 2])));
            }
            for (int i_26 = 4; i_26 < 20;i_26 += 1) /* same iter space */
            {
                var_67 = ((var_7 || (arr_59 [i_26 - 2])));

                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    var_68 = (arr_64 [i_26 - 1] [i_26 + 1] [i_26]);
                    arr_95 [i_17] [i_17] = ((((((arr_71 [i_17] [i_24] [i_17]) || (arr_71 [i_17] [i_24] [i_17])))) >= (arr_73 [i_17] [i_24] [i_17] [i_24])));
                }
                for (int i_28 = 0; i_28 < 0;i_28 += 1)
                {
                    var_69 ^= (arr_59 [i_28]);

                    for (int i_29 = 3; i_29 < 20;i_29 += 1)
                    {
                        arr_100 [i_29] [i_29] [i_17] [i_28] [i_29 - 1] [i_28] [i_24] = (arr_92 [i_26]);
                        arr_101 [i_26] [i_17] [i_26] [i_17] [i_17] = (((arr_89 [i_29] [i_28 + 1] [i_28 + 1] [i_28]) <= (arr_89 [i_17] [i_28 + 1] [i_26 + 2] [i_28])));
                        var_70 = (arr_67 [i_17] [i_28 + 1] [i_29 - 1] [i_28 + 1]);
                    }
                    for (int i_30 = 0; i_30 < 22;i_30 += 1)
                    {
                        var_71 ^= (((arr_80 [i_26] [i_24] [i_26 - 2]) & (arr_80 [i_26] [i_24] [i_26 - 4])));
                        var_72 = var_9;
                    }
                    for (int i_31 = 0; i_31 < 22;i_31 += 1)
                    {
                        var_73 = (((arr_97 [i_28 + 1] [i_28] [i_31] [i_31]) >= (arr_97 [i_28 + 1] [i_28] [i_28] [i_31])));
                        var_74 -= var_12;
                        var_75 = var_6;
                        arr_109 [i_17] [i_24] [i_26] [i_17] [i_31] = (arr_97 [i_24] [i_17] [i_24] [i_17]);
                    }
                    arr_110 [i_17] [i_17] [i_17] [i_26] [i_26] [i_28 + 1] = (arr_63 [i_28]);
                    var_76 &= (-33 + 31);
                }
                for (int i_32 = 0; i_32 < 22;i_32 += 1)
                {
                    arr_114 [i_17] [i_17] = (((((arr_90 [i_17] [i_24] [i_26] [i_32]) ^ (arr_75 [i_17] [i_24]))) ^ ((((arr_90 [i_17] [i_26] [i_17] [i_17]) ^ var_10)))));
                    var_77 = ((var_3 >= (arr_108 [i_26 - 4] [i_17] [i_26 - 3] [i_26 - 4] [i_26] [i_26])));
                    var_78 = (max(var_78, var_3));
                    var_79 = var_10;

                    for (int i_33 = 1; i_33 < 19;i_33 += 1)
                    {
                        var_80 = var_10;
                        var_81 *= var_6;
                        var_82 = (var_11 & (arr_68 [i_24] [i_26 - 4] [i_33 + 3] [i_33 + 2]));
                        var_83 = ((var_12 & (arr_115 [i_26 + 1] [i_17] [i_33 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
