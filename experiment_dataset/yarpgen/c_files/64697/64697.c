/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~(var_4 | var_6))) >> (((((((var_9 ? var_4 : 19))) ? var_4 : (max(var_7, var_5)))) - 142265594)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 = -1843860433;
        arr_2 [i_0] = (((((-16 ? var_4 : 1095369691))) && (((-1545696259 ? (arr_1 [i_0] [i_0]) : (~207))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_5 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [5] [i_2] [i_1] = 48;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_12 = (max(var_12, var_9));
                        var_13 *= (arr_7 [i_3 + 1] [i_2] [i_2]);
                    }
                }
            }
            arr_15 [i_1] [i_1] = (((arr_14 [i_1] [i_2] [i_1]) * 226));
            arr_16 [i_1] = (207 << (var_5 - 70017406));
            var_14 = (arr_0 [i_1] [i_2]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_15 = ((min(var_9, (arr_5 [i_1]))));
            arr_20 [i_1] = ((2147483647 ? (!70) : (max(10, 9142449270172191386))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_16 *= (arr_12 [i_1] [i_5]);
                var_17 *= (((12846981855171529807 << 1) - var_4));
            }
            arr_24 [i_1] [i_1] = -1505252854;
        }

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_18 += ((((min((arr_5 [i_7]), var_9))) ? 185 : (arr_12 [i_1] [i_7])));
            arr_27 [i_1] = max(199, (max((((61 ? 2113929216 : 1))), (arr_8 [i_1]))));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_19 += (((((var_2 >> (((arr_4 [i_10] [i_10]) - 15671))))) ? var_9 : (arr_33 [i_1] [i_8] [i_10])));

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_40 [i_11] [i_11] [i_10] [i_1] [i_8] [i_8] [i_1] = (min(-var_8, ((~(((var_6 == (arr_29 [i_1]))))))));
                            arr_41 [i_1] [i_8] [i_8] [i_9] [i_1] [i_10] [i_11] = 107;
                        }
                        arr_42 [i_10] [i_10] [i_8] [i_8] [i_10] [i_1] |= var_8;
                        var_20 *= (min(5599762218538021788, ((max(1956683582, (arr_21 [i_1] [i_8] [i_9] [i_10]))))));
                        arr_43 [i_10] [i_1] [i_10] [6] = (max((min((arr_28 [i_9]), 1071644672)), var_7));
                    }
                }
            }
            arr_44 [i_1] [i_1] [i_8] = ((32 != 72) + (arr_39 [i_8] [i_8] [i_8] [i_1] [i_1] [i_1]));
        }
        arr_45 [i_1] = 245;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            var_21 = (min(var_21, var_4));
            arr_50 [2] [i_13] &= (~var_0);
            arr_51 [i_12] [i_13] = ((+((((arr_13 [i_12] [i_12] [i_13] [i_13] [i_12]) || var_0)))));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((arr_34 [i_12] [i_12]) & (arr_8 [4])))));
            arr_54 [i_14] [i_14] [i_14] = 22;
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            arr_57 [i_15] = 0;
            var_23 = (~(4221713 != -215707501));
        }
        for (int i_16 = 2; i_16 < 12;i_16 += 1)
        {
            var_24 = (~var_3);

            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                arr_62 [i_17] [i_12] [i_17] = (arr_13 [i_12] [i_16] [i_17] [i_12] [i_17]);
                var_25 = (min(var_25, (((((((arr_52 [i_16] [i_16]) ? 109 : (arr_39 [i_12] [i_12] [i_12] [i_16] [i_16] [i_17])))) ? 6435909482120152906 : (arr_32 [i_16 - 1] [i_16 + 1] [i_16]))))));
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
            {
                arr_65 [i_16] [i_16] [i_16 - 2] |= (~(arr_12 [i_16 + 1] [i_16 - 1]));
                arr_66 [i_12] [i_12] [10] [i_18] = (((arr_55 [i_16 - 2] [i_18]) ? (arr_60 [i_16 + 1] [i_12] [i_18]) : 83));
            }
            for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
            {
                arr_70 [i_12] [i_12] [i_12] [i_19] = (arr_22 [i_12] [i_19]);
                var_26 = (((arr_64 [i_12] [i_12] [i_12]) ? (var_2 != 13) : (arr_22 [i_16 + 1] [i_16 - 2])));

                for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
                {
                    arr_74 [i_16] [i_19] [i_12] [i_12] [i_19] [i_12] = (((arr_1 [i_16 - 1] [i_16 - 2]) ? (~24) : (arr_67 [i_19])));
                    var_27 = (~var_8);
                    var_28 = (min(var_28, (~62)));
                    arr_75 [i_12] [i_12] [i_19] = ((-var_8 || (arr_37 [i_19] [i_16 - 1] [i_19] [i_19] [i_16] [i_16 - 2])));
                    var_29 = (arr_14 [i_19] [i_16 - 1] [i_19]);
                }
                for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                {
                    arr_80 [i_12] [i_19] [i_16] [i_19] [i_21] = (arr_10 [i_16 - 2] [i_19]);
                    var_30 = (max(var_30, 8176));
                    var_31 *= var_1;
                    var_32 = (max(var_32, ((((arr_73 [i_19] [i_16 - 2] [i_21]) ? (arr_73 [i_12] [i_16 - 1] [i_21]) : (arr_73 [i_12] [i_16] [i_19]))))));
                    arr_81 [i_19] [i_16 - 1] [i_16] [i_16] = ((-(var_1 <= 110)));
                }

                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    arr_84 [i_19] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 2] = arr_49 [i_19];
                    var_33 *= 130;
                }
                arr_85 [i_12] [i_12] [i_16] [i_19] = 1;
            }
            for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
            {
                var_34 = var_0;
                var_35 = (min(var_35, 16));
                arr_89 [i_12] [i_12] [i_12] [i_12] = (((arr_37 [i_12] [i_12] [i_12] [i_16] [i_23] [i_23]) | var_4));
            }
        }
        arr_90 [i_12] [i_12] &= 109;
        arr_91 [i_12] [i_12] = ((arr_64 [i_12] [i_12] [i_12]) ? (arr_64 [i_12] [i_12] [i_12]) : (arr_86 [i_12] [i_12] [i_12] [i_12]));
    }
    var_36 = ((var_9 ? var_0 : var_4));
    var_37 = -618548273;
    #pragma endscop
}
