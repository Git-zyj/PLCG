/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(var_12, var_8));
        var_13 = (-2147483647 - 1);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = -1407706988;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = var_1;
            var_16 = var_10;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                arr_13 [i_1] [i_1] = var_1;
                var_17 += var_4;
                var_18 -= var_10;
                var_19 = (max(var_19, 3529759168350639499));
            }
            var_20 -= 1;
            var_21 ^= var_6;

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_22 [i_1] [i_3] [i_5] [i_5] [i_7] = var_0;
                            var_22 = (max(var_22, var_8));
                            arr_23 [i_3] [i_3] [i_5] [i_3] [i_1] = 9223372036854775680;
                        }
                    }
                }
                var_23 = var_10;
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_28 [i_1] [i_3] |= var_9;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_24 = var_8;
                            arr_35 [i_1] [i_3] [i_8] [i_8] [i_9] [i_10] = var_3;
                            var_25 -= var_4;
                        }
                    }
                }
                var_26 *= 0;
                var_27 = (max(var_27, 117544836));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_28 = var_7;
                var_29 = var_1;
                var_30 = 2001385040;
                var_31 *= var_7;
            }
        }
        for (int i_12 = 4; i_12 < 17;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_32 = (max(var_32, var_4));
                            var_33 *= var_9;
                            arr_49 [i_15] [i_15] [i_1] = 524287;
                        }
                    }
                }
            }
            arr_50 [i_1] = 18446744073709551615;
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 19;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        {
                            arr_57 [i_1] = 0;
                            var_34 = 805306368;
                        }
                    }
                }
            }
            var_35 = var_8;
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 18;i_20 += 1)
                {
                    {
                        var_36 = var_6;
                        var_37 = var_7;
                        var_38 = (max(var_38, 0));
                    }
                }
            }
        }
        for (int i_21 = 2; i_21 < 18;i_21 += 1)
        {
            var_39 = -2001385041;

            /* vectorizable */
            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                var_40 &= var_9;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        {
                            var_41 = (max(var_41, var_3));
                            var_42 += -23105;
                        }
                    }
                }
                var_43 = var_7;
                var_44 = (max(var_44, 0));
            }
            /* vectorizable */
            for (int i_25 = 2; i_25 < 17;i_25 += 1)
            {
                arr_77 [i_1] [i_21] [i_25 + 1] = 15656790311689996426;
                var_45 = 0;
                var_46 = var_4;
                var_47 = 39;
                arr_78 [i_1] [i_21] [i_1] = 0;
            }
            for (int i_26 = 0; i_26 < 19;i_26 += 1)
            {
                var_48 = var_9;
                var_49 = 18446744073709551615;
            }
            var_50 = var_6;
        }
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 19;i_27 += 1)
        {
            for (int i_28 = 1; i_28 < 1;i_28 += 1)
            {
                {
                    arr_85 [i_1] [i_27] [i_28] = (-32767 - 1);
                    var_51 |= var_9;
                    var_52 = 1;
                    var_53 &= var_7;
                }
            }
        }
        var_54 = var_9;
        var_55 = (min(var_55, var_1));
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {
        var_56 *= 1975672098;

        for (int i_30 = 2; i_30 < 15;i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_31 = 3; i_31 < 15;i_31 += 1)
            {
                for (int i_32 = 1; i_32 < 16;i_32 += 1)
                {
                    {
                        var_57 *= 0;
                        var_58 = 1;
                        var_59 = (min(var_59, var_1));
                    }
                }
            }
            var_60 = var_3;
        }
        for (int i_33 = 2; i_33 < 15;i_33 += 1) /* same iter space */
        {
            var_61 &= var_2;
            var_62 = 2305842871774740480;

            for (int i_34 = 0; i_34 < 18;i_34 += 1)
            {
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 1;i_35 += 1)
                {
                    for (int i_36 = 2; i_36 < 14;i_36 += 1)
                    {
                        {
                            var_63 = (min(var_63, var_9));
                            var_64 -= var_10;
                        }
                    }
                }
                var_65 = 1;
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 18;i_37 += 1)
                {
                    for (int i_38 = 2; i_38 < 16;i_38 += 1)
                    {
                        {
                            var_66 = 2001385041;
                            var_67 -= var_4;
                            var_68 = 32;
                            var_69 = 7114482631624785954;
                            var_70 = var_1;
                        }
                    }
                }
                var_71 = 134216704;
            }
            for (int i_39 = 3; i_39 < 15;i_39 += 1)
            {
                arr_113 [i_39] [i_33 - 2] [i_39] [i_33 + 2] = 59;
                var_72 = (-32767 - 1);
                var_73 = var_6;
            }
            for (int i_40 = 1; i_40 < 16;i_40 += 1)
            {
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 18;i_41 += 1)
                {
                    for (int i_42 = 0; i_42 < 18;i_42 += 1)
                    {
                        {
                            arr_121 [i_29] [i_33] [i_40] [i_41] [i_42] [i_40] = 32767;
                            var_74 = 0;
                        }
                    }
                }

                for (int i_43 = 0; i_43 < 18;i_43 += 1)
                {
                    arr_124 [i_29] [i_29] [i_40 - 1] [i_43] &= var_1;
                    arr_125 [i_43] [i_40] [i_40] [i_43] = -8192;
                }
                for (int i_44 = 0; i_44 < 18;i_44 += 1)
                {
                    var_75 = var_10;
                    var_76 = 220;
                    var_77 *= var_5;
                }
                for (int i_45 = 0; i_45 < 18;i_45 += 1)
                {
                    var_78 -= var_1;
                    var_79 = var_0;

                    for (int i_46 = 0; i_46 < 1;i_46 += 1)
                    {
                        var_80 = (min(var_80, 123));
                        var_81 = var_4;
                    }
                    for (int i_47 = 0; i_47 < 18;i_47 += 1)
                    {
                        arr_137 [i_29] [i_33] [i_33] [i_29] [i_40] [i_45] [i_45] = var_3;
                        arr_138 [i_40] [i_40] [i_47] = 0;
                        var_82 += 128;
                    }

                    for (int i_48 = 0; i_48 < 18;i_48 += 1)
                    {
                        var_83 = (min(var_83, -1));
                        var_84 += (-32767 - 1);
                    }
                    for (int i_49 = 0; i_49 < 1;i_49 += 1)
                    {
                        arr_144 [i_29] [i_40 - 1] [i_40] [i_29] [i_49] [i_33 + 1] [i_29] = var_1;
                        var_85 = var_9;
                        arr_145 [i_49] [i_40] [i_40] [i_29] = var_4;
                    }
                    for (int i_50 = 0; i_50 < 1;i_50 += 1)
                    {
                        var_86 = (max(var_86, var_6));
                        var_87 = 2578113088139558385;
                    }
                    for (int i_51 = 0; i_51 < 1;i_51 += 1)
                    {
                        var_88 = 7114482631624785954;
                        var_89 -= var_2;
                    }
                }
            }
        }
    }
    var_90 = 11420547879925745616;
    #pragma endscop
}
