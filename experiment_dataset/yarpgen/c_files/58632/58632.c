/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] = var_7;
            arr_8 [i_1] = min((((min(var_7, var_8)))), var_1);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_10 = (((-var_2 << (var_1 - 7755144041523801261))));
            var_11 = (-var_1 & var_2);
            arr_13 [i_0] [i_0] = (((min(97, 2541400796))));
            var_12 = (max(1, 5));
        }
        arr_14 [i_0] &= ((((!((min(var_9, var_0)))))));
        var_13 = (((((min(var_7, var_2)) == var_5)) || (-85669965 != -582174268)));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_14 = (max(var_14, var_2));
            var_15 = (!var_3);
            var_16 *= ((-var_9 == (max(((~(-32767 - 1))), (var_0 || var_0)))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                arr_23 [3] = var_4;
                var_17 = var_0;
            }

            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        arr_35 [i_8] [i_7] [i_0] [i_4] [i_0] &= ((!((!(!var_8)))));
                        var_18 = var_8;
                        var_19 = (max(var_19, (!var_7)));
                    }
                    var_20 = var_4;
                }
                var_21 = (max(var_21, (!3844739496)));
                arr_36 [i_0] [i_0] [i_6] [i_6] = (~65534);
                arr_37 [1] [i_4] [0] [i_6] = (min(((min(65534, 40312))), (((((min(var_8, var_0)) + 9223372036854775807)) << (((var_2 + 64) - 21))))));
                var_22 = var_7;
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_41 [9] [i_4] = ((min(var_1, var_8)));
                var_23 ^= var_9;
                var_24 = var_0;
                arr_42 [i_0] [i_0] [i_4] [i_9] = (max(((var_4 >> (((var_8 - var_7) - 7577888132942769512)))), (max(((min(var_2, var_5))), (max(var_0, var_2))))));
            }
            var_25 += 211;
        }
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            arr_45 [i_0] = var_9;
            var_26 = (max(var_26, (((min(-var_7, (!var_8)))))));
        }
        var_27 |= (max(((min(var_3, var_4))), var_9));
    }
    var_28 = ((+(max((~65534), (min(var_1, var_3))))));
    var_29 = (max(var_29, ((min((~var_0), var_8)))));

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_52 [i_11] [i_11] = var_6;
            arr_53 [i_12] [i_12] = var_2;
            var_30 += ((max(615215906558621421, 65534)));

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                arr_57 [i_11] [i_11] = (~-8524150543164507918);
                arr_58 [i_12] [i_13] = (--1596728555258667949);
                var_31 = (~var_4);
                var_32 *= var_6;
                var_33 *= var_1;
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    arr_64 [i_11] [i_12] [i_14] [i_15] = (min(var_4, var_0));
                    arr_65 [i_11] [i_12] [10] [i_11] [11] = var_6;
                }
                for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                {
                    arr_68 [i_11] [i_12] [i_16] [13] = (min((!-var_6), ((min(var_2, var_3)))));
                    var_34 += ((min(var_9, var_8)));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                {
                    var_35 = var_7;
                    var_36 = (max(var_36, var_7));
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                {
                    var_37 = 8524150543164507917;
                    arr_76 [i_11] [i_12] [i_14] [i_18] = (max(615215906558621437, 615215906558621431));
                    var_38 = -var_2;
                }

                /* vectorizable */
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    var_39 |= var_7;

                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        arr_84 [i_20] [20] [i_20] [i_19] [i_20] [20] [i_14] = var_1;
                        arr_85 [i_12] [12] [i_14] [i_14] [7] [i_14] [i_11] = ((1110457491 || (!var_3)));
                    }
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        var_40 &= var_8;
                        arr_89 [i_11] [i_12] [i_14] [11] [i_19] [i_21] [5] &= var_3;
                        var_41 |= var_6;
                    }
                }
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    arr_92 [i_22] [i_22] [i_11] [i_11] [i_12] [i_11] = ((((((max(var_7, var_7))) + 9223372036854775807)) >> ((((-(min(var_3, var_6)))) - 667617095))));
                    var_42 = (max(251, -1));
                }
                arr_93 [i_11] = var_1;
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                var_43 = var_4;
                var_44 &= var_2;
            }
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                var_45 = var_9;
                arr_99 [i_11] [i_12] [i_24] [1] = (((~(max(var_7, var_1)))));
                arr_100 [i_11] [i_11] [i_11] &= var_2;
                var_46 = (max(var_2, (!0)));
            }
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 24;i_25 += 1)
        {

            for (int i_26 = 1; i_26 < 1;i_26 += 1)
            {
                var_47 = (max(var_47, (((!(!var_5))))));
                var_48 = -var_7;
            }
            for (int i_27 = 0; i_27 < 24;i_27 += 1)
            {
                var_49 ^= -var_5;
                arr_107 [i_11] [i_25] [i_27] &= ((var_9 ^ (var_4 > var_0)));
                var_50 = var_5;
                var_51 = 15904;
            }

            for (int i_28 = 0; i_28 < 24;i_28 += 1)
            {

                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    var_52 = var_5;
                    arr_114 [i_11] [i_29] &= var_5;
                }
                var_53 |= (~1753566510);
            }
            for (int i_30 = 1; i_30 < 22;i_30 += 1)
            {

                for (int i_31 = 0; i_31 < 24;i_31 += 1)
                {
                    var_54 = (~var_8);
                    arr_122 [i_11] [i_11] [i_30] [i_31] |= var_5;
                }
                arr_123 [i_25] [i_25] [i_11] = var_0;
                arr_124 [i_11] [10] [19] [i_30] = ((var_8 < (var_3 | var_2)));
                var_55 = var_7;
                arr_125 [i_11] [i_25] [i_30 - 1] [i_30 + 1] = var_5;
            }
            for (int i_32 = 3; i_32 < 21;i_32 += 1)
            {
                arr_129 [i_32] [i_32] [i_32] = -var_4;
                arr_130 [i_32] = var_6;
            }
            for (int i_33 = 0; i_33 < 24;i_33 += 1)
            {
                arr_133 [13] [i_25] [i_25] = var_9;
                var_56 *= (!var_3);
            }
        }
        for (int i_34 = 1; i_34 < 23;i_34 += 1)
        {
            var_57 += (var_7 == var_8);
            arr_137 [i_34] [i_34] = ((((min((max(var_2, var_8)), 1))) != -var_4));
            arr_138 [i_34] [i_34] = ((!(~var_5)));
        }
        arr_139 [i_11] = var_3;
    }
    #pragma endscop
}
