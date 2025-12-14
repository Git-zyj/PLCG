/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [4] [i_2] = ((90 ? -2147483645 : -76742853));
                            var_18 = (min(var_18, (((((min((arr_11 [i_1]), (arr_11 [i_1])))) == (arr_11 [i_1]))))));
                            arr_15 [i_0] [0] [i_0] [i_0] [i_0] [i_2] = ((arr_12 [i_0] [i_2] [i_0] [2] [i_0]) >= ((((((arr_6 [i_2] [i_2] [i_2]) ? var_13 : var_4))) ? (arr_10 [i_4] [i_2] [i_2] [i_0]) : (var_17 / var_0))));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = var_14;
            arr_17 [i_1] [i_1] = (min((arr_0 [i_0]), (((arr_2 [6]) - (((var_6 ? (arr_0 [i_0]) : 558446353793941504)))))));
        }

        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_19 = (min((max((90 == 3807965716), (min(166, 5892770892853558975)))), (max((arr_20 [i_0] [i_5]), (min((arr_12 [8] [i_0] [i_5] [i_0] [i_0]), (arr_9 [i_0] [i_5] [i_0] [i_0])))))));
            var_20 = ((var_0 - (((!((min((arr_19 [i_0] [i_0]), (arr_18 [i_0] [i_5] [i_0])))))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_0] [i_0] = var_3;
            var_21 = 0;
            var_22 = ((~(arr_1 [i_0] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_23 = (arr_24 [i_8]);
                        var_24 = (max(var_24, ((max((min((arr_30 [i_0] [i_0] [i_0] [i_0]), ((min(var_4, (arr_22 [i_0])))))), (((max((arr_23 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_7] [i_8]))) & (((max(0, -7337)))))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((((73 ? (arr_28 [i_10]) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])))) ? (((!(arr_28 [i_0])))) : (arr_28 [i_9]))))));
                        arr_37 [i_0] [i_9] [i_0] [i_0] = (!3807965716);

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_9] [i_0] [i_10] [i_0] [i_11] = (((((var_15 ? var_0 : (arr_1 [i_0] [i_0])))) ? (!16) : (arr_7 [i_10] [i_0])));
                            var_26 = (arr_26 [i_6] [i_6]);
                            var_27 *= (((arr_21 [i_10] [i_10]) || (arr_21 [i_0] [i_10])));
                            arr_43 [i_0] [i_0] [5] [5] [5] = (674239259 == 90);
                        }
                        var_28 = (arr_35 [i_0] [5] [i_9] [i_6] [i_0] [i_0]);
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_0] = (((((arr_13 [i_0] [i_0]) ? ((53 % (arr_35 [i_0] [i_12] [i_12] [i_12] [i_12] [i_0]))) : (arr_19 [i_0] [i_0]))) <= var_2));
            var_29 -= (max((13983247553344618626 | 252), ((-34 ? ((0 ? 18446744073709551615 : 1)) : (arr_22 [i_0])))));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            var_30 = (((max(((max(var_12, (arr_5 [i_0] [i_0])))), 18446744073709551615)) ^ (arr_48 [i_0])));
            var_31 = (arr_40 [i_13] [2] [i_13] [2] [2]);
            arr_50 [i_0] = (var_0 ? (arr_45 [i_0] [i_0] [i_0]) : (((!207) ? (((max(183, (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (arr_12 [i_0] [i_0] [i_0] [i_13] [i_13]))));
        }
        var_32 ^= (((max(((25 ? (arr_24 [9]) : (arr_27 [i_0] [i_0]))), (((-(arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])))))) % 69));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_33 = (max(var_33, (((var_6 ? (arr_51 [i_14] [i_14 - 3]) : var_3)))));
        arr_53 [i_14] = (((arr_52 [i_14 - 2]) == (arr_51 [i_14] [i_14 - 2])));
    }
    for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = var_16;

        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            var_34 = ((-(arr_60 [i_15] [15])));
            var_35 = (min(var_35, 186));
            var_36 = (max(((max(var_16, (((arr_51 [i_15] [i_16]) ? 3572748132 : (arr_54 [i_15] [i_16])))))), (min((arr_51 [i_15 - 2] [i_16 + 1]), (arr_51 [i_15 - 2] [i_16 + 1])))));
        }
        var_37 = (arr_59 [i_15]);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                {
                    var_38 = (arr_57 [i_15 - 2] [i_15] [11]);
                    arr_67 [i_15] [i_15] [i_18] [i_15] = var_0;
                    var_39 = (((max(0, 186))) ? (((((arr_55 [i_15 - 1]) <= (arr_62 [i_15 - 3]))))) : (arr_62 [i_15 - 1]));
                    var_40 = (arr_65 [i_18] [i_18] [i_18] [i_18]);
                }
            }
        }
        arr_68 [i_15] = max(196, 186);
    }
    for (int i_19 = 3; i_19 < 18;i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                {
                    var_41 &= -743854525;
                    var_42 = (~((674239279 ? 17 : 0)));
                }
            }
        }
        arr_76 [i_19] [i_19] = (arr_59 [i_19]);
        var_43 = (~((~(~38009))));
    }
    var_44 = var_7;
    #pragma endscop
}
