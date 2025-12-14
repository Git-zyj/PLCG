/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = var_4;
        var_14 *= (var_10 || var_1);
        var_15 |= (((arr_1 [i_0 + 3] [i_0 + 3]) ? (arr_2 [i_0 + 1]) : ((-1 ? 29 : -3))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_16 = var_7;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_12 [15] [15] [i_2] [6] [12] [i_3] [9] |= (arr_5 [i_3] [i_0] [i_0]);
                            var_17 = var_11;
                        }
                    }
                }
            }
            var_18 = -1;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_19 = (!var_5);

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = (max(var_20, var_12));
                var_21 = var_4;
                var_22 = (((arr_0 [i_0] [i_5]) ? 33 : (arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                arr_19 [i_6] [i_6] = ((-(arr_10 [i_0 - 2] [i_0 + 2] [i_0] [i_0] [i_0 - 2])));
            }
        }
        var_23 |= ((var_8 == (arr_0 [i_0 + 3] [i_0 + 3])));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_24 *= -8;

            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_25 = (min(var_25, (!var_10)));
                var_26 = (min(var_26, (((var_1 == (arr_4 [i_7] [i_8] [5]))))));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_27 |= (((arr_25 [i_7] [i_7]) << ((((var_5 ? var_1 : var_2)) - 11382))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_28 = ((var_6 ? (arr_11 [i_12 + 1] [1] [i_10] [i_8] [i_7]) : (arr_11 [i_7] [i_8] [i_10] [8] [i_12])));
                            arr_37 [i_7] [i_10] [i_7] = (arr_34 [i_12] [i_12 - 2] [7] [i_12] [7] [i_12] [7]);
                            var_29 = (min(var_29, (!317897602)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_42 [i_7] [i_8] [i_14] [i_13] [i_14] |= var_5;
                            var_30 = (arr_0 [i_7] [i_8]);
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                var_31 = (((arr_34 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) << (((arr_34 [i_15] [i_15] [i_8] [i_7 - 1] [i_7 - 1] [i_7 - 1] [1]) - 26269))));
                var_32 = (arr_29 [i_7] [i_8] [i_7] [i_15]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_33 = (max(var_33, (arr_10 [i_17] [i_16] [i_15] [i_8] [i_7])));
                            var_34 ^= (arr_41 [i_8] [i_17 + 2] [i_17 + 2] [i_16] [i_8]);
                        }
                    }
                }
            }
        }

        for (int i_18 = 2; i_18 < 14;i_18 += 1)
        {

            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                var_35 = (-14 <= 22189);
                arr_56 [16] = 73;

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_36 = var_9;
                    arr_59 [7] [9] [9] = (var_3 || (arr_0 [i_19] [i_20]));
                }
            }
            for (int i_21 = 3; i_21 < 15;i_21 += 1)
            {
                arr_62 [i_7] = ((53142 ? 27225 : (arr_24 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                var_37 |= 3977069694;

                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    var_38 = (((arr_28 [i_21 + 2] [i_18 + 2] [i_7 - 1]) ? var_12 : var_5));
                    var_39 = (arr_8 [i_7 - 1] [i_18 + 2]);
                }
                for (int i_23 = 1; i_23 < 14;i_23 += 1)
                {
                    var_40 = -var_7;

                    for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                    {
                        var_41 = var_0;
                        arr_74 [i_24] [i_7 - 1] [i_21] [i_18 + 3] [i_7 - 1] [i_7] |= (arr_50 [i_18] [i_18] [i_21] [i_23] [i_23] [i_23 + 1] [15]);
                        arr_75 [i_7 - 1] [i_7] [8] [i_23] = ((var_7 ? (arr_20 [1] [i_21 + 2]) : var_3));
                        var_42 += -1681275145768883035;
                        var_43 |= var_6;
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                    {
                        var_44 &= (!(arr_64 [i_7 - 1] [i_18 - 2] [i_21 - 1] [i_23 + 1] [i_25]));
                        var_45 = var_6;
                        arr_78 [i_25] [i_21] [i_23] [i_21] [i_21 - 1] [i_7 - 1] [i_7 - 1] = (arr_41 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_23] [16]);
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
                    {
                        arr_81 [i_26] [i_18] [i_18] = ((var_6 ? (arr_33 [i_21] [i_21] [i_21] [i_21] [2] [i_21 + 1]) : var_4));
                        arr_82 [i_7] [i_18 + 2] [i_26] [i_23] [i_26] [i_26] = (arr_29 [i_7] [i_18 + 1] [i_21] [i_26]);
                    }
                    for (int i_27 = 0; i_27 < 17;i_27 += 1)
                    {
                        arr_85 [10] [i_23] [i_23] = (var_10 <= 33);
                        var_46 = ((((195 != (arr_45 [10] [10] [6]))) ? (10 | 33) : (arr_35 [i_7] [10] [i_18] [i_21] [2] [i_27] [i_27])));
                        arr_86 [i_21] [i_21] [i_21] [5] [i_27] [i_18] [i_21] = (arr_36 [1]);
                    }
                }
                var_47 = (1 == 26);
            }

            for (int i_28 = 3; i_28 < 13;i_28 += 1)
            {
                var_48 = (((1154179300016319854 == 1) ? 1 : var_9));
                var_49 = (var_4 >= var_4);
            }
            for (int i_29 = 2; i_29 < 15;i_29 += 1)
            {
                arr_94 [i_7] [i_7 - 1] [i_7] &= 576460752303423487;

                for (int i_30 = 0; i_30 < 17;i_30 += 1)
                {
                    var_50 = (max(var_50, ((((arr_89 [i_7 - 1] [i_29 - 1] [i_30]) ? 52 : (((arr_23 [3]) ? (arr_11 [i_7] [i_18] [i_29] [1] [i_30]) : 20180)))))));
                    var_51 = (arr_25 [i_18] [i_29]);
                    var_52 ^= (arr_80 [i_29] [i_30] [6] [i_30] [i_29]);
                }
                arr_97 [i_7] [i_7] = (((arr_9 [i_18 + 3] [i_18 - 2] [i_29 - 1] [i_29 - 1]) * (arr_6 [i_7] [i_18] [i_29])));
            }
            var_53 = (min(var_53, var_8));
        }
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 18;i_31 += 1)
    {
        arr_100 [i_31] [i_31] = 23;
        var_54 = 22;
    }
    var_55 = (min(var_55, (!var_5)));
    var_56 = (max(var_0, ((max((!var_8), (var_5 || var_6))))));
    var_57 += ((var_1 ? var_2 : ((var_12 ? ((var_7 ? var_4 : var_8)) : ((max(var_2, var_7)))))));
    var_58 = ((((!(var_6 > var_6))) ? ((var_12 * (0 & var_2))) : ((((var_5 == (-9223372036854775807 - 1)))))));
    #pragma endscop
}
