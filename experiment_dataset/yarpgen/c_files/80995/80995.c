/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((-((var_5 ? (((min(var_7, 1)))) : ((var_9 ? var_8 : var_4))))));

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_11 = (min(var_3, var_6));
                arr_10 [i_2] [7] [i_0] = (max(((-((min(var_1, var_3))))), var_2));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_15 [i_0] [i_0] [i_0] = (min(((min(var_9, -734044685))), (min((min(var_6, var_0)), var_2))));
                arr_16 [i_0] [i_1] [i_0] = ((var_9 ? (min(var_8, ((min(13, 131))))) : ((1 ? var_8 : 50331648))));
            }
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_12 = ((-((230 ? -32760 : var_1))));
                        var_13 = (var_6 ? -1108936821 : var_0);
                        arr_30 [i_0] [i_4] [i_5] [i_6] [i_7] = var_9;
                        arr_31 [i_7] [i_6] [i_5] [i_4] [i_0] = var_1;
                    }
                    var_14 = 200;
                    var_15 = ((var_6 ? var_5 : -4900));
                    var_16 = ((var_4 ? 230 : var_3));
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    var_17 = ((11377353504801194549 ? var_3 : var_4));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_37 [i_0] [i_4] [i_9] = ((var_6 ? var_3 : var_0));
                        var_18 = var_6;
                        var_19 = var_8;
                    }
                    arr_38 [i_0] [i_4 - 2] [i_5] = ((0 ? var_5 : 1205667827));
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_20 = ((125 ? var_0 : var_0));
                    var_21 = var_9;
                    var_22 = var_2;

                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_23 = var_4;
                        var_24 = ((0 ? 65535 : var_2));
                        arr_44 [i_4] [i_10] = -var_0;
                        arr_45 [1] [i_10] [i_5] [i_0] [i_0] = ((!(!var_8)));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_25 = (var_9 ? var_3 : var_6);
                        var_26 = ((78 ? var_1 : var_9));
                        var_27 = var_0;
                        arr_48 [i_0] [11] [i_5] [18] [i_10] [i_0] = ((2 ? var_5 : var_2));
                    }
                }

                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    arr_51 [i_0] [i_0] [i_5] [i_0] = ((-((var_0 ? 17 : 4432479959346333185))));
                    var_28 = var_1;
                }
            }
            /* vectorizable */
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                var_29 = ((56 ? var_4 : var_2));

                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    arr_60 [i_15] [i_15] = 7432;

                    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        var_30 = 1758617602;
                        var_31 = -8230765396742010416;
                        var_32 = ((var_3 ? var_3 : var_9));
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                    {
                        var_33 = (var_1 ? var_1 : 914419864);
                        arr_65 [i_0] [i_4] [i_14 - 1] [i_15] [i_15] [i_4] = var_6;
                        arr_66 [i_15] [i_4] = 10;
                        arr_67 [i_15] [i_4] [18] [i_4] = ((-(-127 - 1)));
                    }
                    for (int i_18 = 3; i_18 < 18;i_18 += 1)
                    {
                        var_34 = (var_9 ? 1931668047 : 65535);
                        arr_71 [i_15] [i_4] [i_14] [i_14 - 1] [i_15] [i_18] = var_4;
                    }
                    var_35 = 27915;
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 4; i_20 < 16;i_20 += 1)
                    {
                        arr_78 [i_19] [i_4] = var_5;
                        arr_79 [i_0] [i_0] [i_19] [0] [2] = var_0;
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        arr_83 [i_0 - 1] [i_4] [i_19] = 17329;
                        arr_84 [i_19] [i_19] [i_19] [1] [i_4] [i_19] = var_6;
                        arr_85 [1] [1] [i_19] [1] [i_21] = ((112 ? var_0 : 48207));
                    }
                    arr_86 [i_0] [i_19] [i_14 - 1] [i_19] = 118;
                }
                var_36 = (~var_8);
            }

            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                var_37 = max(-var_3, ((var_3 ? 1073741823 : 10)));
                var_38 = 55759;
                arr_90 [i_0] [i_0] [i_22] = ((-((6053 ? var_9 : (-32767 - 1)))));
                var_39 = ((-(min(47277, var_0))));
            }
            var_40 = var_5;
        }
        for (int i_23 = 2; i_23 < 16;i_23 += 1) /* same iter space */
        {
            var_41 = min(((var_8 ? 24 : var_6)), ((max(0, 100))));

            /* vectorizable */
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 19;i_26 += 1)
                    {
                        var_42 = ((1 ? var_5 : 1));
                        var_43 = 4693257928360744499;
                        arr_102 [i_0] [i_25] [i_25] [i_25] [i_0 - 1] = ((var_0 ? 27915 : var_2));
                        var_44 = var_0;
                        var_45 = -1970005607277551899;
                    }
                    for (int i_27 = 1; i_27 < 18;i_27 += 1)
                    {
                        var_46 = -var_5;
                        var_47 = var_4;
                        arr_105 [i_0] [6] [i_25] [i_0] [i_0] [i_0 + 1] = ((var_8 ? var_3 : 2));
                    }
                    var_48 = 13313644513593643932;

                    for (int i_28 = 4; i_28 < 18;i_28 += 1)
                    {
                        arr_108 [i_25] [i_23] [i_24] = -110;
                        var_49 = ((var_1 ? var_3 : 0));
                        var_50 = ((var_8 ? 15 : ((var_8 ? var_0 : var_8))));
                        arr_109 [i_25] [i_25] [i_25] [i_24] [i_25] [i_0] = ((var_1 ? (((var_6 ? 250 : 1))) : var_8));
                        var_51 = -0;
                    }

                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        var_52 = -var_7;
                        arr_112 [i_0] [i_23] [i_24] [i_25] [i_23] = 9705298;
                    }
                }
                for (int i_30 = 0; i_30 < 0;i_30 += 1)
                {
                    arr_115 [i_0] [i_23] [i_24] [i_23] = var_7;

                    for (int i_31 = 0; i_31 < 19;i_31 += 1) /* same iter space */
                    {
                        arr_119 [i_0] [i_23] [4] [i_23] [i_30] [i_31] = var_8;
                        arr_120 [i_0 + 1] [i_31] [i_24] [i_30 + 1] [i_31] [1] [i_24] = ((var_4 ? var_3 : 1460536744));
                    }
                    for (int i_32 = 0; i_32 < 19;i_32 += 1) /* same iter space */
                    {
                        arr_124 [i_0] [i_0] [i_23] [i_23] [i_24] [i_0] [i_23] = var_1;
                        arr_125 [i_32] [i_30 + 1] [6] [6] [i_0 - 2] = -var_7;
                        var_53 = var_4;
                        arr_126 [i_24] [i_30 + 1] = var_9;
                        arr_127 [i_0] [i_23] [i_23 + 2] [i_24] [i_24] [i_30] [i_32] = (~var_0);
                    }
                    for (int i_33 = 0; i_33 < 19;i_33 += 1) /* same iter space */
                    {
                        var_54 = ((var_2 ? var_0 : -1));
                        var_55 = ((var_9 ? var_9 : var_0));
                    }
                }
                var_56 = -var_9;
            }
            for (int i_34 = 0; i_34 < 1;i_34 += 1)
            {
                var_57 = 1;
                var_58 = 1;
                arr_133 [0] [i_34] [i_34] = (min(((var_6 ? var_2 : var_2)), ((max(var_1, 40596)))));

                for (int i_35 = 0; i_35 < 19;i_35 += 1)
                {
                    arr_137 [i_0 - 1] [i_23 + 2] [i_0 - 1] [i_35] [i_34] = var_8;

                    for (int i_36 = 0; i_36 < 19;i_36 += 1)
                    {
                        var_59 = 2446723970982886588;
                        var_60 = -8192;
                    }
                    for (int i_37 = 0; i_37 < 19;i_37 += 1)
                    {
                        arr_142 [i_34] [i_23] [i_34] [i_35] [i_37] = ((-((((max(var_4, 7069390568908357066))) ? 312628947 : var_6))));
                        arr_143 [i_37] [i_34] [i_23] = 2;
                    }
                }
                for (int i_38 = 4; i_38 < 18;i_38 += 1)
                {
                    var_61 = min(var_5, var_8);
                    arr_146 [7] [i_23] [i_34] [i_38] [i_38] = -536870912;
                    var_62 = ((((min(38519, var_4))) ? (min(-4693257928360744500, 26863)) : ((min(var_4, var_6)))));
                }
            }
        }
        arr_147 [i_0] [i_0] = (max((((var_4 ? var_1 : 28214))), (min(((max(var_2, var_1))), -var_0))));

        for (int i_39 = 1; i_39 < 1;i_39 += 1)
        {
            arr_152 [i_39] [i_39 - 1] [i_0] = (((((0 ? var_8 : var_9))) ? (((var_4 ? -11 : ((min(63, 1)))))) : ((var_6 ? (min(var_5, 10751696116576766497)) : (((var_2 ? var_7 : var_9)))))));
            arr_153 [i_0 - 1] [i_0 - 2] [i_39] = -1;
        }

        for (int i_40 = 0; i_40 < 19;i_40 += 1)
        {
            var_63 = ((-((14143 ? 65526 : var_5))));
            var_64 = (min(var_7, (max(50792, var_4))));
        }
    }
    #pragma endscop
}
