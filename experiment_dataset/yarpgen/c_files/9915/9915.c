/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -20059;
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (((max(-30915, (arr_0 [i_0] [i_0]))))) : ((((max((arr_0 [i_0] [i_0]), 26207))) ? (max(-100, (arr_1 [i_0]))) : (((max(var_15, -30928))))))));
        var_21 = (((arr_1 [i_0]) - (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = 0;
            var_22 = 18446744073709551615;
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_23 = (min((((30512 && ((min(var_17, (arr_5 [i_0] [i_0]))))))), ((+(((arr_1 [i_0]) ? 1 : -100))))));
            var_24 = 4682;
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            var_25 = ((1 ? (((arr_9 [i_3 - 4] [i_3 - 4] [i_0]) ? (arr_1 [i_0]) : var_1)) : (arr_7 [i_0] [i_3])));
            arr_11 [i_0] = (((0 / (arr_10 [i_0] [i_3]))));

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                arr_15 [i_3] [i_0] = (arr_9 [i_0] [i_3 + 2] [i_0]);
                var_26 = -32765;
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_27 ^= 16384;
                            arr_25 [i_0] [i_6] [i_6] [i_0] [i_7] [i_7] [i_7] = 1;
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_28 = 3013612169;
                    arr_28 [i_8 + 2] [i_0] [i_3 + 2] [i_0] [i_0] = -1;
                    var_29 = (arr_21 [i_0] [i_3 - 3] [i_3 - 3] [i_8 + 2] [i_5]);
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_3 - 1] = arr_2 [i_3 - 4];
                    var_30 *= ((arr_5 [i_5] [i_3 + 2]) == 6938204769505342975);
                    arr_32 [i_3 + 1] [i_0] [i_0] [i_0] [i_5] = ((arr_13 [i_0] [i_0] [i_0] [i_9]) == (((var_16 ? 49164 : var_10))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] [i_10] [i_10] = (arr_10 [i_0] [i_3 - 4]);
                    var_31 -= (((arr_30 [i_5] [i_3 - 3] [i_3 - 3] [i_10] [i_5]) == -1457916287));
                    var_32 += (((((var_4 ? (arr_27 [i_10] [i_0] [i_3 - 3] [i_0]) : (arr_19 [i_0] [i_3 + 2] [i_3] [i_5] [i_10])))) ? (arr_30 [i_0] [i_0] [i_5] [i_0] [i_10]) : (((arr_16 [i_5] [i_3 - 1] [i_3 - 1] [i_0]) ? (arr_12 [i_0] [i_3] [i_5]) : -32764))));
                }
                var_33 = 2032796412;
                arr_37 [i_0] = (arr_24 [i_0] [i_5] [i_0] [i_3 + 2] [i_3 + 2] [i_3 - 4]);
                arr_38 [i_0] [i_3] [i_0] [i_0] = (((arr_4 [i_0] [i_3 - 1]) / var_9));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_34 -= var_10;
                var_35 = (((arr_18 [i_3 + 1] [i_3] [i_3 + 1] [i_11]) ? (arr_18 [i_3] [i_3] [i_3] [i_11]) : (arr_18 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_11])));
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_36 = ((~((3010357442006125296 ? 1 : var_18))));
        arr_43 [i_12] [i_12] = 4212677888;
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            arr_49 [i_13] [i_14] = 1;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_37 = ((~(arr_19 [i_14] [i_14] [i_16 - 1] [i_17 + 2] [i_16 - 2])));
                            arr_60 [i_13] [i_13] [i_17 + 1] [i_15] [i_13] [i_14] [i_13] = (!((18446744073709551615 > (arr_57 [i_17] [i_14] [i_14] [i_14] [i_14]))));
                            var_38 = (1 - (arr_34 [i_13] [i_13] [i_15] [i_16]));
                            var_39 += 1;
                        }
                    }
                }
            }
            var_40 = (0 >> var_3);
            var_41 |= ((-(arr_34 [i_13] [i_13] [i_13] [i_14])));
        }
        for (int i_18 = 3; i_18 < 23;i_18 += 1) /* same iter space */
        {
            var_42 ^= -1457916287;
            var_43 = (max(var_43, ((max((arr_53 [i_13] [1] [i_18 - 3] [i_13] [i_13] [i_13]), ((-(arr_17 [i_18] [i_18 - 2] [14]))))))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_44 ^= var_15;
                        arr_68 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (min(((max((arr_51 [i_13]), (arr_54 [i_13] [i_18] [i_19] [i_19] [i_20] [i_20])))), (((var_12 ? (arr_53 [i_18] [i_13] [i_18] [i_18 - 3] [i_13] [i_18]) : ((var_5 ? 1 : var_1)))))));

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            var_45 |= (!var_7);
                            var_46 += ((4028728917 ? (arr_69 [i_18 + 1] [i_18 - 3] [i_21] [i_18 - 3] [i_21]) : 1467466812));
                            arr_72 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = var_3;
                        }
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_47 = (((((arr_34 [i_13] [i_18 - 1] [i_19] [i_19]) ? 276976199 : -2032796417))) ? (max(var_2, 0)) : var_2);
                            arr_75 [i_13] [i_18 - 3] [i_19] [i_13] [i_22] [i_22] [i_13] = (max((((arr_42 [i_22]) ? -1413770961320924303 : (-9223372036854775807 - 1))), (min(65535, (max((arr_16 [i_13] [i_18 - 1] [i_13] [i_20]), (arr_20 [i_22] [i_18 - 2] [i_22] [i_20] [i_18 - 2])))))));
                            arr_76 [i_13] [i_13] [i_13] [i_20] [i_22] [i_19] [i_13] = (arr_14 [i_13] [i_13] [i_22]);
                        }

                        for (int i_23 = 2; i_23 < 23;i_23 += 1) /* same iter space */
                        {
                            arr_81 [i_13] [i_19] [i_20] [i_20] = var_2;
                            arr_82 [16] [i_18] [i_19] [i_19] [i_20] |= ((((1 ? (arr_8 [i_13] [i_18 - 3] [i_19]) : ((min((arr_45 [i_20]), var_15))))) | 31084));
                        }
                        /* vectorizable */
                        for (int i_24 = 2; i_24 < 23;i_24 += 1) /* same iter space */
                        {
                            var_48 ^= (arr_17 [i_24 - 1] [i_13] [4]);
                            arr_86 [i_13] [i_19] [i_18 - 1] [i_13] = -266238391;
                        }
                    }
                }
            }
        }
        for (int i_25 = 3; i_25 < 23;i_25 += 1) /* same iter space */
        {
            var_49 |= (-9223372036854775807 - 1);
            var_50 = (min(var_50, var_3));
            var_51 = (max(var_51, var_5));
        }
        arr_90 [i_13] = ((!((!(arr_5 [i_13] [i_13])))));
        var_52 = (min(var_52, 0));
        arr_91 [i_13] = 5;
        arr_92 [i_13] [6] |= ((((min((((22022 ? var_4 : 288230376151711744))), ((var_7 ? var_7 : var_18))))) ? (arr_16 [4] [i_13] [i_13] [i_13]) : (max((~var_4), (var_2 | 1)))));
    }
    #pragma endscop
}
