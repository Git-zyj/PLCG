/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((arr_1 [i_0 - 1]) ? (((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))) : (~var_7));
        var_17 = (min(var_17, (((-1952320158175814381 ? (arr_1 [i_0 + 3]) : 23023)))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 = (min((~1), ((-3521737210756698835 ? (arr_1 [i_1 + 3]) : (arr_4 [i_1 + 2])))));
        var_19 = 7820234038778356124;
        arr_5 [i_1] = (((arr_1 [i_1]) ? (arr_0 [i_1 + 2]) : (((arr_0 [i_1 + 1]) ? ((0 ? 1 : 7820234038778356124)) : -6483))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_20 = (min(-7820234038778356116, 1));
        var_21 = (((((max(var_16, (arr_1 [1])))) ? var_8 : 0)));
        var_22 = ((11 ? 11 : 65524));
    }
    var_23 -= var_11;
    var_24 = var_14;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_25 -= ((1 ? -7820234038778356129 : (arr_9 [i_3])));
            arr_14 [i_3] [i_4] [i_4] = 21283;

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_26 = var_9;
                arr_18 [i_3] [i_3] [i_3] = ((!(!28174)));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_27 = ((var_14 ? (arr_8 [i_3]) : 48693));
                            var_28 = var_9;
                            var_29 = (((arr_7 [i_3]) ? var_11 : (var_6 - var_4)));
                        }
                    }
                }
                var_30 = ((var_0 % (~var_4)));
                arr_27 [i_3] [i_3] [1] = var_5;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_31 = (~-3289);
                            var_32 = (((arr_8 [7]) ? var_16 : 55895));
                        }
                    }
                }
                var_33 ^= ((var_0 ? var_15 : (arr_16 [i_3] [i_3] [i_3] [i_6])));
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_34 = (var_10 || 45229);
                var_35 *= (arr_7 [i_11]);
            }
        }
        for (int i_12 = 4; i_12 < 11;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_36 = 1;
                            arr_46 [i_14] [4] = (-var_2 && var_4);
                            arr_47 [i_14] [i_12 + 1] [i_12] [i_13] [i_14] [i_12 + 1] [i_14] = 1;
                        }
                    }
                }
            }

            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                arr_50 [i_3] [i_12 - 4] [i_3] = (((arr_29 [i_12 + 1] [i_12] [0] [i_12 - 2]) / (arr_29 [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 3])));
                var_37 = (var_5 / var_7);

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_38 ^= ((!(arr_33 [i_3] [i_12] [i_3] [i_17])));
                    arr_53 [i_3] [i_3] [1] [5] = (arr_25 [i_3] [11] [i_3] [11] [11] [11] [i_17]);
                    var_39 = ((0 ? (((((arr_26 [i_3] [i_3]) == var_11)))) : (arr_31 [i_12 + 1] [i_16])));
                    var_40 = 7820234038778356128;
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    var_41 = ((~(arr_19 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1])));
                    arr_56 [i_3] [i_3] [i_18] [i_3] = arr_20 [i_12 + 2];
                    var_42 = (arr_49 [i_3] [i_3]);
                }
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
            {
                var_43 = (1952320158175814393 | 1);
                var_44 = 3389358207236202688;
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 11;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 11;i_22 += 1)
                    {
                        {
                            arr_66 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_44 [i_22] [i_22] [i_22] [i_22] [i_22]);
                            arr_67 [i_3] [i_12] [i_21] [i_3] = 28977;
                            var_45 += (((arr_12 [i_12 + 1] [i_12 - 3] [i_12 + 2]) ? (arr_21 [i_12 - 4] [i_12 - 1] [i_12 - 4]) : ((~(arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                        }
                    }
                }
                var_46 = (((arr_43 [i_3] [i_3] [i_20] [i_3] [i_12 - 1]) ? (arr_29 [i_12] [i_12] [i_12 - 1] [i_12 - 4]) : var_7));
            }
            var_47 = arr_63 [i_3];
            arr_68 [i_3] = (((65535 ? var_11 : (arr_20 [i_3]))));
            var_48 = (max(var_48, (arr_62 [i_12] [i_12 - 4] [i_12 - 3] [i_12 - 3])));
        }

        for (int i_23 = 3; i_23 < 12;i_23 += 1)
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 11;i_26 += 1)
                    {
                        {
                            var_49 = 1;
                            arr_80 [i_26] [i_23] [i_23] [i_23] [1] = (arr_10 [i_23 - 2]);
                            var_50 = (min(var_50, ((((-1952320158175814381 + 9223372036854775807) << (var_5 - 24352))))));
                            var_51 += var_15;
                            arr_81 [i_3] [i_26] [2] [i_3] = ((var_3 <= ((var_5 >> (45 - 33)))));
                        }
                    }
                }
            }
            var_52 = (min(var_52, ((((((45 ? 65524 : 199))) ? (arr_72 [i_23 - 3] [i_23 - 2]) : (arr_30 [i_23 - 3] [i_23 - 3] [i_23 - 1]))))));
            var_53 = (min(var_53, -var_9));
        }
        for (int i_27 = 0; i_27 < 13;i_27 += 1)
        {
            var_54 = ((17967 ? 7168 : (arr_82 [i_3] [i_3] [i_27])));
            arr_84 [i_3] [i_3] = ((-3209538290290628680 / (arr_42 [i_3] [i_3] [i_3] [i_3])));
        }
        var_55 = (!-58366);
    }
    #pragma endscop
}
