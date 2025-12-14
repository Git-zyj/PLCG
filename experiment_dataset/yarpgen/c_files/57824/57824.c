/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [12] [12] = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_12 [2] [i_4 + 1] [13] [1] [1]) + (arr_12 [i_0] [i_4 + 2] [19] [i_0] [i_4 - 1])));
                                var_16 = -var_1;
                                arr_14 [i_4] = (arr_5 [i_0] [i_2] [i_4]);
                                var_17 = (max(var_17, var_3));
                            }
                        }
                    }
                    var_18 = (max(var_18, (((35165 ? (-2147483647 - 1) : 1806206209)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_19 ^= var_9;
                        var_20 = -var_6;
                        var_21 = (min(var_21, ((((arr_16 [i_0]) ? (arr_16 [i_5]) : 26395)))));
                        arr_23 [2] [i_5] [i_5] [i_5] = (arr_21 [i_0] [i_5] [i_6] [1]);
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_36 [i_0] [i_8] = ((26395 ? 0 : -3144));
                            arr_37 [i_0] [i_0] = (~var_5);
                            var_22 ^= (-73 ? (arr_35 [i_0] [i_8] [i_9] [10] [i_11] [18]) : var_10);
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_23 = var_0;
                            var_24 = (arr_25 [i_0] [i_12]);
                            var_25 = (((arr_18 [i_0] [i_8] [11]) ? (arr_18 [i_12] [i_8] [i_9]) : 2655176839));
                            var_26 = ((-3144 + 2147483647) >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 32134)));
                            arr_40 [i_10] &= (arr_24 [6] [i_10]);
                        }
                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            arr_43 [i_13] [i_8] [19] = (arr_4 [i_13 + 2] [i_13 + 1]);
                            var_27 = ((4294967295 ? var_12 : ((-55 * (arr_15 [6] [6])))));
                        }
                        var_28 = 2956986044142084433;
                        var_29 = ((var_2 ? (arr_33 [i_9]) : (arr_41 [i_10])));
                        var_30 = (max(var_30, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
            var_31 -= ((((arr_24 [i_8] [i_8]) + var_10)));
            var_32 = 0;
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {
                        {
                            arr_55 [4] [i_14] [i_17 - 1] [i_16] [i_17 - 2] [i_14] = (((((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_4 [i_14] [i_15])))) ? (arr_17 [2] [i_14] [i_14]) : (arr_52 [i_0] [i_14] [i_15]));
                            arr_56 [i_0] [i_14] [i_14] [i_17] [i_17] |= 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_33 = (((arr_51 [i_0]) ? (arr_0 [i_14] [i_14]) : -402042482));
                            var_34 = (max(var_34, (((var_6 ? ((~(arr_29 [1] [i_14] [i_14] [i_14] [i_19] [i_0]))) : ((((arr_48 [i_0] [i_0] [i_15]) * (arr_60 [i_0] [i_14] [i_0])))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 17;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    {
                        var_35 = (arr_48 [11] [4] [i_20 + 3]);
                        var_36 = ((((9863612470688465090 | (arr_47 [i_21] [i_20] [1] [i_0])))) ? (((-3144 + 2147483647) << (var_10 - 1546688689))) : -26395);
                        var_37 = (arr_59 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 + 3] [i_20 + 1]);
                    }
                }
            }
            var_38 = var_4;

            for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            var_39 = ((((((arr_66 [i_0] [i_14] [i_23] [i_24]) ? var_11 : (arr_26 [i_0] [i_14])))) ? var_4 : (0 || var_5)));
                            var_40 = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 20;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 20;i_26 += 1)
                    {
                        {
                            var_41 = (((arr_72 [i_0] [i_14] [i_22]) == ((57344 ? -4544193899456791901 : 3143))));
                            var_42 = ((~(arr_30 [1] [19] [i_22])));
                        }
                    }
                }
            }
            for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
            {
                arr_83 [i_0] [i_14] [18] &= ((-26395 ? var_1 : (arr_19 [i_0] [i_14] [i_27])));

                for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
                {
                    var_43 = ((var_10 ? 105 : (arr_78 [i_0] [6] [i_27])));
                    var_44 *= var_9;
                    arr_87 [i_0] [i_14] [i_27] [i_28] = (((((arr_18 [i_0] [19] [i_27]) > 26395)) ? 240 : (((arr_78 [1] [1] [1]) >> (((arr_77 [6] [i_0] [6] [i_14] [i_27] [i_27] [i_28]) + 6441477273792467923))))));
                    var_45 = (max(var_45, ((((arr_75 [i_0] [3] [i_27] [i_28]) ? 0 : (arr_29 [i_0] [i_0] [i_0] [0] [i_27] [i_28]))))));
                }
                for (int i_29 = 0; i_29 < 20;i_29 += 1) /* same iter space */
                {
                    var_46 = var_2;
                    arr_92 [i_27] &= (arr_58 [i_0] [i_0] [i_14] [8] [i_29] [i_29]);
                }
            }
        }
    }
    var_47 = var_7;
    /* LoopNest 2 */
    for (int i_30 = 0; i_30 < 18;i_30 += 1)
    {
        for (int i_31 = 3; i_31 < 15;i_31 += 1)
        {
            {
                var_48 = (min((min(65535, (min(1, -1944871948)))), -1213275971));
                var_49 = var_0;
                arr_100 [6] [i_30] = ((((max((arr_59 [i_30] [5] [i_31 - 2] [i_31 + 2] [i_31 - 3] [i_31] [i_31]), (max(16499845377183023091, var_8))))) ? ((var_11 ? ((max(1, 57344))) : (((!(arr_71 [i_30] [i_31 - 3] [i_31] [2])))))) : ((min(100, 0)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_32 = 0; i_32 < 20;i_32 += 1)
    {
        for (int i_33 = 0; i_33 < 20;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 1;i_34 += 1)
            {
                {
                    var_50 = (min((~388028320951278933), (~178)));
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 20;i_35 += 1)
                    {
                        for (int i_36 = 0; i_36 < 20;i_36 += 1)
                        {
                            {
                                var_51 = (max(var_51, (!var_6)));
                                var_52 = (min(6212673425601234079, -15195));
                            }
                        }
                    }
                    var_53 = 127;
                    arr_119 [i_32] [i_33] [i_34] = ((1 ? (arr_19 [i_32] [i_33] [i_34]) : (((min((max(57344, -26395)), (arr_103 [i_32])))))));
                }
            }
        }
    }
    #pragma endscop
}
