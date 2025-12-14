/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_0 [i_0 - 1]) < (arr_0 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = arr_4 [1] [7] [i_0 - 1];
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_20 = (!(-16 <= var_5));
                            var_21 += (arr_7 [i_2 + 1] [i_2] [i_2 - 2]);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_0 - 1] [i_0 - 1] [4] [9] = -12879;
                arr_17 [i_0 - 1] &= ((!(arr_15 [i_1])));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((122 ? (arr_0 [i_0 - 1]) : var_17))));
                            var_23 = (min(var_23, (arr_3 [i_0 - 1])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_24 = (max(var_24, -4));
                var_25 *= var_10;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_26 ^= (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_27 = (min(var_27, (((var_17 <= (arr_19 [i_0] [i_0 - 1] [2] [i_0]))))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_21 [i_0] [11] [i_0 - 1] [i_10] [i_10]) > var_14));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, var_9));
                        var_29 += 1;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = ((arr_5 [i_0 - 1] [i_1] [i_9]) > (arr_15 [i_0 - 1]));
                        arr_40 [i_13] [i_1] [i_9] [i_11] [3] = var_1;
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, (arr_34 [i_0] [i_0 - 1] [i_9] [i_11] [i_14] [i_0 - 1])));
                        var_32 = arr_31 [i_0] [i_0] [i_0 - 1] [5] [i_0 - 1];
                        var_33 += 9223372036854775807;
                    }
                    arr_43 [i_11] [i_11] [i_11] [i_11] = ((~(arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                    var_34 += (((arr_18 [7] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                }
            }
            arr_44 [i_0] = ((~(arr_23 [12] [4] [i_1])));
        }
        var_35 = (((~4) & ((~(arr_18 [i_0] [14] [14] [i_0] [i_0] [i_0])))));

        for (int i_15 = 3; i_15 < 16;i_15 += 1)
        {
            arr_47 [i_0 - 1] [i_0 - 1] = (arr_38 [2] [i_15] [i_15] [i_15 + 2] [2]);
            var_36 = (min(var_36, var_17));
        }
        for (int i_16 = 2; i_16 < 17;i_16 += 1)
        {
            arr_51 [i_16] = ((251 << (((arr_7 [i_0 - 1] [i_0] [i_16 - 1]) + 3946512133656640327))));
            var_37 = (max(var_37, (((-(var_2 && 1))))));
            arr_52 [i_16] = (arr_46 [i_0 - 1] [i_0 - 1]);
        }
    }
    for (int i_17 = 3; i_17 < 12;i_17 += 1)
    {
        var_38 = (max(((+((max((arr_37 [i_17] [i_17] [i_17] [i_17 - 3] [i_17]), var_5))))), var_17));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 9;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_39 = (arr_1 [i_17 - 2]);
                        var_40 = (arr_35 [i_18] [0]);
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        var_41 = (~((((arr_42 [i_17 - 1]) || 0))));
                        var_42 |= ((var_5 ? (arr_39 [6] [6] [i_18] [i_19 - 1] [i_19]) : (arr_39 [i_17 + 1] [1] [i_19] [i_19 + 4] [i_21])));
                        arr_65 [i_17] [i_17] [i_19] = ((-(arr_61 [i_17] [i_18] [i_19 + 1] [i_21])));
                        var_43 *= (!var_14);
                    }
                    var_44 |= ((!((min((arr_0 [i_19 - 1]), ((min(var_9, var_13))))))));
                    var_45 = (max(var_45, (((((max(2, -21815))) >> (((min(var_17, (arr_8 [i_17 - 3] [i_19 + 3]))) + 3780386236473725722)))))));
                }
            }
        }

        for (int i_22 = 0; i_22 < 0;i_22 += 1)
        {
            arr_70 [i_17 + 1] [i_22] = (arr_14 [i_17] [i_17] [i_17] [i_17]);
            var_46 = (max(((((arr_38 [12] [i_22 + 1] [i_22 + 1] [i_22] [i_22 + 1]) != (arr_62 [i_17 + 1])))), (((arr_23 [i_17 - 3] [i_17] [i_22 + 1]) ^ (arr_23 [i_17 - 2] [i_22 + 1] [i_22 + 1])))));
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    {
                        var_47 = (max(var_47, ((max((arr_24 [i_17 - 3]), var_14)))));
                        var_48 = 1125899873288192;
                        var_49 = (((((var_15 ? (arr_19 [i_17] [i_22 + 1] [i_22] [i_23]) : (arr_19 [i_22] [i_22 + 1] [i_24] [i_24])))) ? (((arr_19 [i_17] [i_22 + 1] [i_23] [i_23 - 1]) | (arr_19 [i_22 + 1] [i_22 + 1] [i_24] [i_24]))) : ((max(1, (arr_19 [i_17] [i_22 + 1] [i_23 - 1] [7]))))));
                    }
                }
            }

            for (int i_25 = 0; i_25 < 13;i_25 += 1)
            {
                var_50 += 21757;

                /* vectorizable */
                for (int i_26 = 1; i_26 < 11;i_26 += 1)
                {
                    var_51 ^= (arr_34 [i_26 - 1] [i_26 - 1] [i_26] [i_26] [i_26 + 2] [i_26 + 2]);
                    var_52 = (((arr_58 [0]) > (9223372036854775807 != var_7)));
                }
                var_53 = (max(var_53, (arr_55 [11] [i_22 + 1] [i_25])));

                for (int i_27 = 1; i_27 < 11;i_27 += 1)
                {
                    arr_83 [4] = ((-((var_4 ? (((max(253, (arr_71 [i_22]))))) : -3279377262679003102))));
                    arr_84 [1] = ((((max(((min((arr_1 [i_25]), (arr_46 [9] [i_27])))), ((-(arr_38 [i_25] [6] [12] [i_27 + 1] [i_27 + 1])))))) ? (arr_66 [12] [12] [12]) : (max((arr_5 [i_17 - 3] [i_22 + 1] [i_22 + 1]), 65518))));
                }
            }
            var_54 = 43624;
        }
    }
    var_55 = 2012813088;

    for (int i_28 = 0; i_28 < 21;i_28 += 1)
    {
        var_56 = ((((min(0, (arr_86 [i_28])))) == (((arr_86 [i_28]) ? var_5 : (arr_86 [i_28])))));

        /* vectorizable */
        for (int i_29 = 3; i_29 < 20;i_29 += 1)
        {
            arr_93 [i_28] [i_29] = -var_18;
            var_57 = (min(var_57, var_13));
            arr_94 [i_28] [i_28] [i_28] &= (((arr_86 [i_28]) << (var_4 - 7865315239779471293)));
        }
        for (int i_30 = 1; i_30 < 20;i_30 += 1)
        {
            var_58 = (~8074418746665784691);
            var_59 = var_15;
        }
        arr_98 [i_28] |= (arr_89 [i_28] [i_28] [i_28]);
    }
    for (int i_31 = 0; i_31 < 22;i_31 += 1)
    {
        var_60 = (max(var_60, (((-(((arr_99 [i_31] [i_31]) & var_15)))))));
        var_61 = (min(var_61, ((min((((((var_2 ? var_10 : (arr_101 [8] [i_31])))) ? var_16 : (min(1, (arr_101 [20] [20]))))), -var_15)))));
    }
    #pragma endscop
}
