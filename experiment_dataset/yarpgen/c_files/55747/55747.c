/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [1] [1] &= var_14;
        var_18 = var_5;
        var_19 = var_13;
    }

    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_12 [9] [9] [i_1] [i_3] = (((!var_5) ? var_6 : (1483880558 == var_12)));
                var_20 *= var_1;
            }
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_2] [i_2] [i_4] &= var_2;
                var_21 = (-44 == 21705);
                arr_16 [i_4 + 1] [i_2] [i_2] [i_1] = (((((var_4 ? var_17 : 37))) || var_17));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_22 = ((29922 ? 45 : 4454));
                    arr_20 [i_1] [i_1] [i_1] [i_1 - 4] = var_11;

                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_6] = var_4;
                        var_23 += -6392;
                    }
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_5] [i_2] [3] = (((var_10 < var_5) * var_0));
                        var_24 ^= (21705 * 80);
                        arr_28 [i_5] [i_1] [i_1] = ((~(~4440)));
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 |= var_7;
                        var_26 = (25381 * 1620770479);
                    }
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        var_27 = (min(var_27, (((var_17 ? var_10 : 24291)))));
                        var_28 = (((11803 || 146) || var_15));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 = (var_3 || var_0);
                        arr_38 [i_10] [i_5] [i_4 + 2] [0] [i_10] = 63271;
                        var_30 = var_12;
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_31 = var_4;
                        arr_41 [i_1] [i_1] [i_2] [0] [i_2] [i_2] [i_11] = var_12;
                    }
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_32 = ((var_9 ? var_6 : 6442399988556428829));
                    var_33 = (((var_12 <= var_11) * var_10));
                }
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_34 = var_3;
                            var_35 = ((var_5 ? var_17 : var_10));
                            var_36 = 191;
                        }
                    }
                }
                arr_51 [i_13] = (var_8 > var_16);

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_56 [i_13] [i_13] [i_13] [i_13] [i_16] = (var_16 + 25);

                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        var_37 = (18121215424778603758 || 22499);
                        var_38 = var_1;
                    }
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {
                        var_39 = ((var_2 ? (12004344085153122787 - var_3) : var_15));
                        arr_61 [i_1 - 2] [i_13] [i_13] [1] [i_18] [i_16] = var_16;
                        arr_62 [i_1] [i_1] [i_13] [i_1] [i_1] = 24380;
                        var_40 = (min(var_40, var_10));
                        var_41 ^= ((var_17 + (24291 + var_13)));
                    }
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        var_42 = (((var_13 + 2147483647) >> (var_3 + 14975)));
                        var_43 = (max(var_43, (~var_14)));
                        arr_66 [i_13] [i_2] [i_19 + 1] = (!0);
                        var_44 = (15745544216142926439 != 1620770479);
                        arr_67 [i_16] [i_16] [i_16] [i_13] [i_2] [i_1] [i_16] &= (!var_11);
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        var_45 = (((41245 ? 11771 : var_1)) % (27798 || 221));
                        var_46 = ((~((var_7 ? var_8 : var_7))));
                        var_47 = (min(var_47, var_8));
                    }
                }

                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {
                    var_48 = (((!var_13) ? (!var_5) : var_16));
                    var_49 = var_11;
                }
                for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                {
                    var_50 += var_9;
                    var_51 = (max(var_51, var_4));
                }
            }
            arr_76 [i_1] [i_1] = ((var_4 ? var_11 : var_4));

            for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
            {

                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    var_52 = (var_1 + var_11);
                    var_53 = (var_17 & 6651);
                    var_54 = var_4;
                }
                for (int i_25 = 0; i_25 < 18;i_25 += 1)
                {
                    var_55 = (min(var_55, var_17));

                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        var_56 += (((~87) ? var_10 : var_17));
                        arr_87 [i_1] [3] [i_25] = (((!var_1) && (((var_15 ? var_7 : var_16)))));
                    }
                }
                for (int i_27 = 1; i_27 < 17;i_27 += 1)
                {
                    var_57 = (min(var_57, (2674196828 == -32751)));
                    var_58 = (((25816 / var_14) >> (var_5 + 138)));

                    for (int i_28 = 0; i_28 < 18;i_28 += 1)
                    {
                        var_59 = (16519 || var_5);
                        arr_95 [i_28] [i_27 - 1] [i_27] [i_2] [i_1] = (~var_2);
                    }
                    for (int i_29 = 0; i_29 < 18;i_29 += 1)
                    {
                        arr_100 [i_27] [i_27] [7] = (((var_15 || var_4) > var_11));
                        arr_101 [i_27] [12] = var_17;
                        var_60 |= 602719943;
                    }
                }
                for (int i_30 = 0; i_30 < 18;i_30 += 1)
                {
                    var_61 = -var_12;
                    var_62 = (((!16756) ^ ((var_7 ? var_11 : var_5))));

                    for (int i_31 = 0; i_31 < 18;i_31 += 1)
                    {
                        var_63 = (18423 >> (var_10 - 27516));
                        var_64 = -4454;
                    }
                }
                var_65 = (((((6442399988556428829 << (var_7 - 20905)))) ? ((var_17 ? var_4 : var_14)) : (var_8 + -31029)));
                arr_108 [i_1] [i_2] [i_23] [i_1] = -var_4;
            }
            for (int i_32 = 0; i_32 < 18;i_32 += 1) /* same iter space */
            {
                arr_111 [2] [15] [i_32] [1] = var_4;

                for (int i_33 = 0; i_33 < 18;i_33 += 1)
                {
                    arr_114 [i_32] = -var_2;
                    arr_115 [i_32] [i_32] = (!-4285789806730586781);

                    for (int i_34 = 0; i_34 < 18;i_34 += 1)
                    {
                        var_66 += ((!var_5) != (!4454));
                        var_67 *= var_17;
                        arr_119 [i_32] [i_32] = -var_0;
                    }
                    for (int i_35 = 1; i_35 < 15;i_35 += 1)
                    {
                        var_68 = var_0;
                        var_69 = var_17;
                    }
                    var_70 = (~47112);
                    var_71 = ((1461976768 ? ((var_8 ? var_17 : var_5)) : var_7));
                }
            }
            var_72 = (~((var_16 ? -3334 : var_10)));
            var_73 -= (~254);
        }
        for (int i_36 = 0; i_36 < 18;i_36 += 1)
        {
            var_74 = var_4;
            /* LoopNest 2 */
            for (int i_37 = 2; i_37 < 17;i_37 += 1)
            {
                for (int i_38 = 1; i_38 < 14;i_38 += 1)
                {
                    {
                        var_75 = (min(var_75, (~13516)));
                        var_76 = (!(191 % var_0));
                        arr_134 [i_38 - 1] [i_36] [i_36] [i_1] = (((var_12 ^ var_4) != var_5));
                        var_77 |= 37981;
                    }
                }
            }
        }
        arr_135 [i_1] = (((~191) == -497988967));
    }
    var_78 = var_17;
    #pragma endscop
}
