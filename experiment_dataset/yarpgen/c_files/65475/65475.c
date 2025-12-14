/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((var_13 ? 166 : var_4))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = var_1;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [18] [13] [i_1] [18] |= var_11;
                        var_18 = ((var_1 ? (arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : var_10));
                        arr_12 [1] [1] [i_2] = var_8;
                    }
                }
            }
            var_19 -= min(2713534853, (arr_6 [i_0] [i_0] [17] [18]));
        }
        var_20 += ((max(12, (arr_6 [i_0] [6] [11] [i_0]))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_21 = var_6;
        var_22 = 1;

        /* vectorizable */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_18 [i_4] [i_4] [13] = 0;
            var_23 = (arr_7 [17] [i_5] [i_5]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_21 [i_4] [i_4] [i_4] = (arr_3 [i_4 - 1] [i_4 - 2]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_24 = var_11;
                        arr_26 [i_8] [i_8] [i_8] [i_8] = var_12;
                    }
                }
            }
            arr_27 [0] [16] [5] &= var_9;
            var_25 = ((var_15 ? var_5 : ((145 ? 235 : -23401))));
            arr_28 [0] = (((arr_19 [i_6]) ? var_8 : (arr_0 [6])));
        }
    }

    for (int i_9 = 4; i_9 < 18;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_26 = var_14;
            var_27 = var_0;

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_28 = (min(var_28, ((((((max(84, 0))) ? -1834292031 : var_14))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [20] [12] [i_10] = var_6;
                            arr_44 [18] [i_10] [i_11] [i_11] [19] = (arr_38 [1] [1] [5] [i_10]);
                        }
                    }
                }
            }
            arr_45 [i_10] = (((((((arr_42 [i_9] [i_9] [i_9] [i_9] [17] [i_9] [i_9]) ? 2058491641 : var_11))) ? var_7 : var_10)));
            var_29 = ((min((((33678 ? 79 : (arr_42 [7] [4] [4] [20] [i_9 - 1] [i_9] [1])))), var_6)));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_30 = var_0;
            var_31 = var_2;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_32 = (max(((var_10 ? 3017044583 : 4294967295)), 0));
                            var_33 = (min((max((max(1508563337, 1)), var_4)), var_4));
                            arr_57 [i_9] [3] [i_16] [i_9] = -1209451747;
                            arr_58 [i_9] [i_16] [i_9] [i_9] [18] = var_1;
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
            {
                arr_65 [1] [i_18] = (arr_64 [i_9 - 1] [i_9 + 2] [i_9 + 3]);
                arr_66 [i_9] [i_9] [i_18] = var_8;
                var_34 = var_7;
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    var_35 = (max(var_35, ((((arr_51 [i_20]) ? var_3 : ((var_1 ? var_13 : (arr_36 [i_21 + 1]))))))));
                    var_36 = var_3;
                    arr_72 [i_9] [11] [18] [i_18] [5] = ((var_15 ? var_8 : (arr_41 [i_9 + 1] [i_9])));
                    arr_73 [20] [i_18] [i_18] [i_18] = var_11;

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        arr_76 [8] [20] [i_18] [7] [i_21] [i_21] = var_0;
                        arr_77 [i_18] [i_18] [1] [i_18] [i_18] [11] [i_18] = var_4;
                        arr_78 [0] [4] [i_18] [13] [16] [19] = (arr_74 [9] [i_18] [i_18] [20] [i_18] [18] [i_18]);
                    }
                }
                var_37 = var_2;
                var_38 = (arr_49 [i_9] [7] [i_9]);
            }
            arr_79 [i_18] [i_9] = (min(var_3, 79));
            arr_80 [i_18] [13] = ((((-2147483647 - 1) ? var_0 : var_2)));
            var_39 = ((max(var_2, var_1)));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                arr_88 [i_23] [1] = 0;
                var_40 = var_7;
                var_41 = var_14;
                var_42 += 72;
            }
            var_43 = var_4;
            arr_89 [i_23] = -3219;
            var_44 = (((2821623969343798533 ? 1834292031 : var_12)));
        }
        arr_90 [4] [i_9] = (((max(var_6, -26819))));
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 24;i_25 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 22;i_27 += 1)
            {
                {
                    arr_98 [i_26] [i_26] [i_27] [i_26] = var_10;
                    var_45 = var_4;
                    arr_99 [i_27] [i_26] [i_26] = (arr_95 [i_26] [6] [i_26] [i_26]);
                    var_46 += 1728296172;
                }
            }
        }
        arr_100 [i_25] = ((var_8 ? var_12 : var_8));
        arr_101 [7] [i_25] = var_15;

        for (int i_28 = 0; i_28 < 24;i_28 += 1)
        {
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 24;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 24;i_30 += 1)
                {
                    {
                        var_47 = (max(var_47, var_1));
                        var_48 = 1165528291;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 24;i_31 += 1)
            {
                for (int i_32 = 1; i_32 < 1;i_32 += 1)
                {
                    {
                        arr_119 [17] [i_25] [i_25] [20] = var_14;
                        arr_120 [i_25] [i_25] [22] [i_25] [22] [14] = (arr_114 [i_28] [3]);
                        var_49 = var_12;
                    }
                }
            }
            var_50 = var_4;
        }
        for (int i_33 = 2; i_33 < 21;i_33 += 1)
        {

            for (int i_34 = 3; i_34 < 23;i_34 += 1)
            {
                var_51 = var_3;
                /* LoopNest 2 */
                for (int i_35 = 1; i_35 < 1;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        {
                            arr_130 [6] [i_34] [i_34 - 2] [i_34] [i_34] = (arr_110 [1] [1] [i_35] [1]);
                            arr_131 [i_35] [17] = var_3;
                            var_52 = var_3;
                            arr_132 [i_25] [6] [i_25] [i_25] [i_25] [i_25] [i_25] = (((arr_91 [6] [i_35]) ? var_5 : 122));
                        }
                    }
                }
            }
            for (int i_37 = 0; i_37 < 24;i_37 += 1)
            {
                arr_136 [i_25] [22] = (((arr_92 [i_25]) ? var_5 : var_8));
                var_53 = -1834292032;
                arr_137 [1] [i_33] [i_33] [10] = var_2;
            }
            var_54 = 0;
            var_55 = (min(var_55, (arr_127 [i_25] [i_25] [i_25] [i_25])));
            arr_138 [2] [2] [15] = var_4;
        }
        arr_139 [i_25] = var_13;
    }
    for (int i_38 = 0; i_38 < 24;i_38 += 1) /* same iter space */
    {

        for (int i_39 = 0; i_39 < 24;i_39 += 1)
        {

            for (int i_40 = 0; i_40 < 1;i_40 += 1)
            {
                arr_147 [4] [1] [3] [i_38] = -var_15;
                arr_148 [i_38] [i_38] [i_38] = var_8;
            }
            for (int i_41 = 0; i_41 < 24;i_41 += 1)
            {

                for (int i_42 = 0; i_42 < 24;i_42 += 1)
                {
                    var_56 = 27081;

                    for (int i_43 = 4; i_43 < 23;i_43 += 1)
                    {
                        var_57 = 3321855542631911787;
                        var_58 += var_6;
                        arr_158 [1] [0] [i_41] [16] [3] [i_38] = 1;
                        arr_159 [23] [i_38] [i_42] [16] [23] [i_38] = 25;
                        var_59 = 2285530988;
                    }
                }
                var_60 = var_10;

                /* vectorizable */
                for (int i_44 = 0; i_44 < 24;i_44 += 1)
                {

                    for (int i_45 = 0; i_45 < 24;i_45 += 1)
                    {
                        var_61 += 2644395661;
                        var_62 = var_13;
                        var_63 = 4294967295;
                        arr_165 [1] [i_41] [21] [i_41] [i_38] = (((arr_128 [i_38] [i_38] [i_38] [i_38] [4]) ? (arr_102 [i_38]) : var_1));
                        var_64 = 226;
                    }
                    var_65 = (arr_140 [1] [13]);
                    var_66 = (min(var_66, 3321855542631911787));
                }
                for (int i_46 = 4; i_46 < 22;i_46 += 1)
                {
                    var_67 += ((-(arr_117 [i_38] [23] [21] [i_38] [23])));
                    arr_168 [i_38] [i_38] [11] [3] [i_38] [i_38] = var_11;
                    arr_169 [5] [i_38] [0] [i_46] [i_46] = (max(var_12, (arr_95 [i_38] [8] [21] [i_38])));
                }
            }
            /* LoopNest 2 */
            for (int i_47 = 2; i_47 < 20;i_47 += 1)
            {
                for (int i_48 = 0; i_48 < 1;i_48 += 1)
                {
                    {
                        arr_174 [i_38] [2] [i_38] [i_38] = (((var_14 ? 1860241952 : (~1774989724))));

                        for (int i_49 = 0; i_49 < 24;i_49 += 1)
                        {
                            var_68 = var_5;
                            arr_178 [i_38] [i_39] [i_39] = (max((((var_2 ? var_10 : (arr_142 [i_38])))), (((min(var_3, 660331165))))));
                            var_69 = var_14;
                        }
                        var_70 *= ((var_10 ? var_10 : (((!((min(var_9, 0))))))));
                    }
                }
            }
        }
        var_71 = ((max(var_8, 1774989724)));
        arr_179 [i_38] = max(var_8, ((((min(var_1, 2009436292))) ? var_9 : 15)));
    }
    var_72 = (max(var_72, var_1));
    /* LoopNest 3 */
    for (int i_50 = 0; i_50 < 11;i_50 += 1)
    {
        for (int i_51 = 0; i_51 < 11;i_51 += 1)
        {
            for (int i_52 = 0; i_52 < 11;i_52 += 1)
            {
                {
                    var_73 = 1741685948;
                    var_74 = (max(var_74, ((min((min(((var_2 ? 1834292030 : var_8)), var_15)), 1)))));
                    var_75 = (min(var_13, ((25 ? (max(13812778407188553152, 3276867163)) : (((max(107, 4100))))))));
                }
            }
        }
    }
    #pragma endscop
}
