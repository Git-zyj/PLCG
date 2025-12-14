/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (~(arr_0 [i_1]));
            var_17 = ((var_11 ? 59 : (arr_2 [i_1] [i_0])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_18 |= (var_9 % 65535);
                var_19 = (((((1315880383010540398 < (arr_0 [i_0])))) + (5381505431952277775 || var_12)));
            }
        }
        var_20 = (max(((var_8 + (0 > -9171))), (max((arr_3 [i_0] [i_0] [i_0]), ((-(arr_6 [i_0] [i_0] [i_0 - 2])))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_21 = ((-(arr_9 [i_3])));
            var_22 = (arr_9 [i_3 + 1]);
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_21 [i_3] [6] [i_6] [6] = arr_18 [i_3] [i_5] [i_3 - 2];
                        var_23 -= var_1;
                    }
                }
            }

            for (int i_8 = 4; i_8 < 22;i_8 += 1)
            {
                arr_25 [i_3] [i_3] [i_3] = ((!(((arr_14 [i_3] [i_5] [24]) || 5590882814660174196))));
                arr_26 [i_8] [i_3] = ((103 ? (arr_13 [i_3 + 1] [i_3] [i_8]) : (arr_8 [i_3] [i_3])));

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_29 [i_9] [i_8] [i_3] [i_3] [i_3] = (53885 && var_5);
                    var_24 = (~((36 ? (arr_16 [i_3] [i_3] [i_3 + 1] [i_3]) : (arr_15 [21] [i_8 + 3] [i_5] [i_3]))));
                    var_25 = var_6;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_26 = (arr_27 [i_3 - 1] [i_3 - 2] [i_8 - 2]);
                        var_27 ^= ((-var_12 ? 103 : (arr_12 [i_3 + 1])));
                        var_28 += ((8520 ? (((arr_16 [i_10] [i_8] [i_5] [i_3]) ? 110 : var_12)) : (!0)));
                    }
                }
                for (int i_11 = 1; i_11 < 24;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_29 = ((((((arr_15 [i_3] [i_8 + 3] [i_11] [i_12]) ? (arr_32 [i_3] [i_5] [i_11] [i_11] [i_12] [i_3] [i_3]) : var_1))) / (arr_9 [i_8 - 2])));
                        var_30 = (((arr_7 [i_5] [i_3]) ? (((-(arr_32 [i_3] [i_5] [i_11] [i_11] [20] [i_11 + 1] [i_12])))) : ((var_4 << (145 - 120)))));
                    }
                    var_31 = (((arr_20 [i_3] [i_5] [i_8] [i_11]) > (arr_16 [i_8] [i_8] [i_8 + 1] [i_8 + 1])));
                }
                for (int i_13 = 1; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_32 = (arr_9 [1]);
                    arr_41 [i_3] [i_5] [i_8] [i_13] = (((arr_15 [i_13 - 1] [i_3 - 1] [i_5] [i_8 + 1]) || (arr_40 [i_13 - 1] [i_3 - 1] [i_13 - 1])));
                    var_33 = (max(var_33, (28 + 140)));
                    var_34 = (arr_27 [i_13 + 1] [i_8 + 1] [i_5]);
                }
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_35 |= (arr_20 [i_14] [i_5] [i_5] [i_14]);
                var_36 = -28;
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                arr_48 [1] [1] [i_5] [i_15] = 146;
                var_37 = arr_27 [i_3 - 2] [i_3 - 2] [i_3 - 1];
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            arr_58 [i_3] [i_18] [i_18] = (((((-5381505431952277773 & (arr_8 [i_3] [i_3])))) ? -21953 : 735566470));
                            arr_59 [20] [i_18] [i_18] = ((42001 ? (arr_45 [i_3 - 2]) : var_10));
                            var_38 += ((-(arr_22 [i_18] [i_17] [i_5] [i_3])));
                            arr_60 [i_18] [i_18] = (((((6144 ? var_2 : (arr_20 [i_3] [i_3] [i_17 - 3] [11])))) && (((1 ? (arr_51 [i_3] [i_3] [18] [i_3] [i_3 + 1]) : var_12)))));
                            arr_61 [i_18] [i_17] [i_18] [i_16] [i_18] [i_3 - 1] [i_3 - 1] = (((arr_13 [i_3 - 1] [i_5] [i_3 - 2]) ? (~var_1) : -735566459));
                        }
                    }
                }
                var_39 = (max(var_39, var_9));
            }
            var_40 = ((var_11 ? (arr_37 [i_3 + 1] [i_3] [i_3] [i_3 - 2] [i_3 - 1]) : (((arr_19 [i_5]) ^ var_8))));
        }
        var_41 = (((arr_9 [i_3 + 1]) ? var_3 : ((31 ? (arr_9 [i_3 - 2]) : var_13))));
        var_42 = (max(var_42, (((735566470 ? 1269716475 : (arr_56 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3]))))));

        for (int i_19 = 3; i_19 < 24;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                var_43 -= (var_15 | 155);
                var_44 = ((~(!72)));
                arr_67 [i_20] [i_19] [i_19] [i_3] = (-((var_15 ? var_15 : (arr_32 [i_3] [i_3] [i_19] [i_19] [i_20] [i_20] [i_20]))));
                arr_68 [6] [i_19] = ((~((var_1 ? var_4 : (arr_31 [i_3] [i_19] [i_19] [i_19] [i_20] [i_20])))));
            }
            for (int i_21 = 2; i_21 < 24;i_21 += 1)
            {
                arr_72 [i_19] = 1;
                var_45 = -var_11;
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {
                arr_77 [i_3] [i_19] [i_22] = (arr_39 [1]);
                var_46 = (arr_43 [i_3 + 1] [i_19 - 2]);
            }
            arr_78 [i_3] [i_3] [i_3] |= ((var_4 ? (arr_7 [i_3 - 1] [i_19 - 2]) : (arr_17 [i_3 - 1] [i_19 + 1])));
        }
        for (int i_23 = 0; i_23 < 25;i_23 += 1)
        {
            arr_82 [10] [i_23] = var_12;
            var_47 = (-17 & 21932);
            var_48 = arr_45 [i_3];
            var_49 = (((21947 ? 1 : (arr_31 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
            arr_83 [i_3] [i_23] = (((arr_33 [i_3] [i_3 + 1] [i_3] [i_23]) | var_8));
        }
    }
    var_50 = ((var_10 ? (~var_13) : var_9));
    var_51 = (((var_4 ? var_11 : 1)));
    #pragma endscop
}
