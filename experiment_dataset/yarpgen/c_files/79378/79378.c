/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = var_2;

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                arr_9 [i_2 + 1] [i_1] [i_0] &= ((var_9 ? var_3 : var_9));
                var_10 = (min(var_10, (((~var_4) ? var_4 : ((var_5 ? var_2 : var_1))))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_11 = (((var_2 > var_7) ? ((var_0 ? var_8 : var_4)) : var_8));
                            var_12 |= (!var_5);
                        }
                    }
                }
                arr_17 [i_0] |= var_6;

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_20 [4] [i_3] [i_6] = (((((var_3 ? var_6 : var_2))) ? var_7 : var_5));
                    var_13 = (((!var_0) ? var_8 : var_1));
                }
                var_14 -= (var_7 ? var_0 : var_2);
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_15 = (((!var_4) ? -var_5 : ((var_7 ? var_7 : var_7))));
                var_16 = ((var_2 ? var_4 : var_4));
                var_17 &= (((((var_8 ? var_7 : var_0))) ? (!var_3) : var_0));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_18 = ((var_5 < ((var_8 ? var_2 : var_5))));
                arr_26 [i_1] [i_0] [i_0] [i_1] &= (-var_2 ^ var_0);
                var_19 = (~var_5);
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_20 |= (var_4 < var_0);

            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_21 = var_3;
                var_22 = (min(var_22, (var_2 < var_6)));

                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    arr_36 [i_11] [i_0] [i_0] [i_0] = ((var_0 ? var_6 : var_2));
                    var_23 = (max(var_23, (~var_2)));

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_24 -= (((((var_9 ? var_0 : var_9))) ? var_6 : (~var_0)));
                        var_25 = (max(var_25, -var_4));
                        var_26 -= var_5;
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_27 *= var_1;
                        var_28 = ((var_4 ? var_3 : var_6));
                    }
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_29 = ((var_6 ? var_1 : var_3));
                arr_43 [i_9] [i_9] = -var_2;
                arr_44 [i_0] [i_9] [i_0] [10] = (~var_4);
                var_30 = ((var_0 ? var_3 : var_6));
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_31 -= ((var_2 ? var_5 : var_3));
            arr_48 [i_0] [i_15] = (((~var_7) ? -var_9 : var_6));
            var_32 = (max(var_32, var_7));
            var_33 -= ((var_6 ? var_7 : var_0));
        }
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            arr_59 [i_19] [i_18] [2] [i_18] [i_0] = var_7;
                            var_34 -= ((var_0 ? var_9 : var_7));
                        }
                    }
                }
            }
            arr_60 [i_0] [i_16] [i_16] &= ((var_7 ? var_8 : var_6));
            arr_61 [i_0] = (((!var_3) ? var_9 : (((var_6 ? var_5 : var_5)))));
        }
        arr_62 [i_0] = ((var_4 ? var_6 : var_7));
        var_35 ^= var_0;
        var_36 = (min(var_36, ((((!var_4) ? (~var_5) : var_7)))));
    }

    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        arr_66 [i_20] &= ((((min(var_0, var_2))) ? (((max(var_5, var_4)))) : ((var_8 ? var_1 : var_9))));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                {
                    var_37 = (max(var_37, ((max(((((min(var_7, var_1))) ? var_9 : var_4)), var_0)))));
                    arr_73 [i_20] [i_21] [i_21] = ((!(((var_1 ? var_3 : (min(var_0, var_5)))))));
                    var_38 -= (max(((var_0 ? var_0 : var_4)), var_4));
                    arr_74 [i_22] [i_20] [i_21] [i_20] = ((((((var_3 * var_0) & (min(var_2, var_4))))) ? ((max(var_8, var_2))) : (max(((var_3 ? var_2 : var_0)), (((var_2 ? var_5 : var_8)))))));
                    var_39 = var_6;
                }
            }
        }
        arr_75 [i_20] [i_20] &= (((((max(var_2, var_7)) ? var_2 : (min(var_2, var_3))))));

        for (int i_23 = 0; i_23 < 23;i_23 += 1)
        {
            var_40 = var_2;
            var_41 = (min(var_41, var_3));

            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                var_42 -= ((!((!((min(var_3, var_2)))))));

                for (int i_25 = 1; i_25 < 22;i_25 += 1)
                {
                    var_43 = var_8;
                    var_44 -= ((var_9 ? (((-(!var_0)))) : ((-var_1 ? -var_9 : var_7))));
                    var_45 = ((!((min(var_8, var_1)))));
                    var_46 &= ((((max(var_2, var_0))) ? (~var_9) : ((((((var_3 ? var_3 : var_2))) ? var_5 : ((var_3 ? var_5 : var_8)))))));
                    arr_85 [i_23] [i_23] [i_23] [i_25] = ((((((var_0 ? var_4 : var_5)))) || ((min(((var_5 ? var_0 : var_6)), var_1)))));
                }
                /* vectorizable */
                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    var_47 = ((var_9 ? -var_3 : var_6));
                    arr_89 [i_20] [22] |= ((-var_6 * (!var_2)));
                    arr_90 [i_23] = ((var_5 ? (((var_7 + 2147483647) << (var_4 - 23994))) : -var_4));
                    var_48 = ((var_5 ? var_5 : var_0));
                }
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    var_49 = ((~(~var_7)));
                    arr_95 [i_23] [i_23] = (((((-(!var_0)))) ? (((var_0 / var_7) ? ((var_7 ? var_9 : var_7)) : var_1)) : ((var_5 ? (!var_4) : (min(var_9, var_0))))));
                }
            }
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                var_50 = ((!((min((((var_1 ? var_1 : var_1))), (min(var_0, var_1)))))));
                var_51 = (((!var_1) ? (((var_7 ? var_1 : var_7))) : ((var_1 ? var_9 : var_9))));
                var_52 += ((var_6 ? var_0 : (max(var_2, (((var_3 ? var_1 : var_9)))))));
            }
            for (int i_29 = 4; i_29 < 22;i_29 += 1)
            {
                var_53 = ((((min(((var_5 ? var_9 : var_1)), var_9))) ? var_3 : ((var_7 ? var_6 : var_5))));
                arr_100 [i_20] [i_23] = ((((var_4 ? var_0 : (~var_4))) & ((min(((var_7 ? var_4 : var_3)), var_5)))));
                var_54 = ((!var_8) ? (min(-var_0, (((var_8 ? var_5 : var_3))))) : var_4);
            }
        }
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 16;i_30 += 1)
    {
        var_55 ^= ((var_8 ? var_3 : var_3));
        var_56 &= (var_0 || var_3);
        var_57 = var_1;
        arr_103 [i_30] = (((var_0 > var_4) ^ var_8));
    }

    for (int i_31 = 0; i_31 < 14;i_31 += 1)
    {
        var_58 ^= ((-(((((var_7 ? var_5 : var_2))) ? var_8 : (max(var_3, var_0))))));
        var_59 = ((~((-var_8 ? ((max(var_1, var_7))) : var_1))));
    }
    var_60 = var_8;
    #pragma endscop
}
