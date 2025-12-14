/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = min((arr_1 [i_0] [i_0]), var_0);
        var_15 = (((((~((~(arr_0 [1])))))) ? ((min(var_0, (arr_0 [i_0])))) : (arr_0 [i_0])));
        var_16 = (arr_0 [i_0]);
    }
    var_17 = (min(var_17, (~var_8)));

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 -= (arr_3 [i_1]);

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_19 *= ((var_10 ? (arr_6 [i_2] [i_1 - 1] [i_1 - 1]) : 1));

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_20 = var_4;
                    var_21 = (max(var_21, var_0));
                    var_22 = ((var_4 ? 144115188075823104 : (((arr_13 [i_2] [i_2 + 2] [i_3]) ? 6751171992458308393 : var_7))));
                }
                var_23 = var_7;
                var_24 = (arr_2 [i_1 - 1]);
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_25 = (((arr_20 [i_7] [i_6] [i_5] [i_2] [i_1 - 1]) << 1));
                        var_26 -= 1;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_27 ^= ((~((0 ? var_8 : 0))));
                        var_28 = var_0;
                    }
                    var_29 = -2094;

                    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_30 ^= (((arr_6 [i_5] [i_2 + 1] [i_1]) ? (((~(arr_6 [i_1] [i_2 + 1] [i_1])))) : var_8));
                        var_31 = (11 + var_1);
                        var_32 = (!(arr_25 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_9] [i_9]));
                        var_33 = (max(var_33, (((((var_3 ? -5727 : var_7))) && (((1 ? 1 : 1)))))));
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_34 |= -0;
                        var_35 -= ((1 ? 1 : 0));
                    }
                }
                var_36 = -1;
            }

            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_37 = var_8;
                    var_38 = arr_5 [i_1] [i_2];
                    var_39 |= 0;
                    var_40 = (((arr_30 [i_1] [i_2] [i_2] [i_1 - 1] [i_2 + 2]) ? 20629 : -6296097466833267496));

                    for (int i_13 = 2; i_13 < 24;i_13 += 1)
                    {
                        var_41 = (arr_15 [i_1 - 1] [i_2] [i_12] [i_13 - 1]);
                        var_42 &= ((1 >> (3090 <= 2434)));
                    }
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_43 = var_11;
                    var_44 = ((1 ? (arr_14 [i_2 + 1] [i_11] [i_2 + 1]) : var_5));
                    var_45 = var_10;
                    var_46 = (((((var_9 ? var_5 : 9007199254478848))) ? 68451041280 : var_9));
                }
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    var_47 = ((!((((arr_5 [i_1] [i_1]) + var_0)))));

                    for (int i_16 = 0; i_16 < 0;i_16 += 1)
                    {
                        var_48 &= (((arr_10 [i_1 - 1] [i_1] [i_2] [i_11] [i_15] [i_16]) ? (~var_1) : var_5));
                        var_49 = ((!(arr_18 [i_1 - 1] [i_2 + 4] [i_11])));
                        var_50 = (min(var_50, var_0));
                        var_51 += (~var_2);
                        var_52 = (arr_18 [i_1] [i_2 + 2] [i_2 + 2]);
                    }
                    var_53 += 1;
                }

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_54 = (((-(arr_28 [i_1] [i_1] [i_11] [i_17]))));
                    var_55 = ((var_7 ? (arr_13 [i_11 - 2] [i_2 + 4] [1]) : (arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }
                for (int i_18 = 2; i_18 < 24;i_18 += 1)
                {
                    var_56 ^= -0;
                    var_57 = 1;
                    var_58 = (arr_41 [i_1 - 1] [i_1 - 1] [i_11 + 1] [i_18 - 2]);
                    var_59 = (max(var_59, ((!((((arr_2 [i_1 - 1]) ? (arr_9 [i_1]) : -15153)))))));
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_60 -= arr_29 [i_1] [i_11] [i_1 - 1] [i_1] [i_1 - 1];
                    var_61 |= ((68451041289 ? 1 : 10853550675858219875));
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        {
                            var_62 -= (0 >= var_10);
                            var_63 = 3637615829419491396;
                        }
                    }
                }
                var_64 = ((!(((var_0 ? (arr_14 [i_1] [i_1] [i_20]) : (arr_59 [i_1] [i_1] [i_20] [i_20] [i_1]))))));
                var_65 ^= ((arr_18 [i_2 + 4] [i_2 + 1] [i_2 - 1]) || 1);
                var_66 = 18367;
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_67 = (1 ? (arr_32 [i_23] [i_23] [i_23] [i_23]) : -var_7);
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 16;i_25 += 1)
            {
                {
                    var_68 = ((var_7 ? 22499 : var_8));
                    var_69 = ((((var_4 << (((arr_67 [i_23] [i_25]) - 9635191886680146651)))) << ((var_4 ? 1 : 18355))));
                }
            }
        }
        var_70 += (((arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]) ? (arr_5 [i_23] [i_23]) : var_2));
    }

    /* vectorizable */
    for (int i_26 = 0; i_26 < 14;i_26 += 1)
    {
        var_71 = 2147210025567689472;
        var_72 -= (((arr_30 [i_26] [i_26] [i_26] [i_26] [i_26]) ? var_8 : var_7));
        var_73 -= -18368;
        var_74 = (1 ? var_10 : (arr_37 [i_26] [i_26] [i_26] [i_26]));
        var_75 = ((1 ? (arr_71 [i_26]) : var_11));
    }
    for (int i_27 = 0; i_27 < 12;i_27 += 1)
    {
        var_76 = (!-6);
        var_77 += ((!(((((((arr_24 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) ? 1 : -22518))) ? var_3 : 1)))));
    }
    #pragma endscop
}
