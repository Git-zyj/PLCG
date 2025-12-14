/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 *= (((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))) > (arr_2 [i_0 - 2] [i_0]))) ? (arr_0 [i_0]) : (((((arr_1 [i_0]) == ((-(arr_1 [i_0])))))))));
        var_17 += min((max(0, (arr_0 [i_0 - 2]))), (((41 | ((((arr_2 [i_0] [i_0]) || var_6)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 *= (min((172146950 / 53), ((-(min((arr_0 [i_1]), (arr_4 [i_1] [i_1])))))));
        var_19 &= ((!(arr_1 [i_1])));
        arr_5 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        arr_8 [i_2 - 1] [i_2 - 3] = var_9;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 = ((~(arr_9 [i_2 + 3] [i_2 + 2] [i_2 + 2])));
            var_21 = 0;

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_22 = (((arr_12 [i_2 - 4]) ? ((((arr_12 [i_2]) || (arr_13 [i_2] [i_3] [i_4])))) : (arr_11 [i_2] [i_2 - 2] [i_2 + 3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_23 ^= var_12;
                            var_24 += ((52 | (arr_2 [i_2 - 1] [i_2])));
                            var_25 = var_5;
                        }
                    }
                }
                var_26 = (arr_14 [i_2] [i_3] [i_4]);
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_27 = (((arr_11 [i_7] [i_3] [i_2]) || (((0 ? -96 : 4804)))));
                arr_23 [i_2] [i_3] &= (((arr_13 [i_2 - 4] [i_2 - 2] [i_3]) & var_11));
                var_28 = 98210532;
                arr_24 [i_7] = (-(arr_20 [i_7] [i_2 + 3] [i_2 + 3] [i_2 + 3]));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_29 += (((((arr_16 [i_8] [i_3] [i_2]) != var_12)) ? (~var_2) : var_4));
                    var_30 = (min(var_30, ((((arr_7 [i_2 - 1]) || (((arr_16 [i_2] [i_2] [i_2]) != var_11)))))));
                    var_31 = arr_0 [i_2 - 4];
                    var_32 = var_11;
                }
                for (int i_9 = 4; i_9 < 13;i_9 += 1)
                {
                    arr_30 [i_7] [i_7] [i_7] [i_7] = (arr_17 [i_2] [i_9 + 2] [i_9 + 2] [i_9]);
                    var_33 *= (arr_2 [i_2] [i_2 - 1]);
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_34 = (arr_28 [i_7] [i_2] [i_2] [i_2 - 4]);
                    var_35 = (arr_31 [i_2 + 2] [i_7] [i_3]);
                    arr_33 [i_7] = (((arr_15 [i_2 + 1]) ? (arr_22 [i_2 + 3] [i_2 + 3] [i_7]) : (arr_15 [i_2 - 4])));
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_36 = (!var_6);
                            arr_46 [i_2] [i_2] [i_11] [i_13] [i_12] [i_13] = (((arr_7 [i_2 + 2]) ? (arr_26 [i_2 - 4]) : (arr_37 [i_2 - 3])));
                            var_37 = (arr_11 [i_3] [i_11] [i_13]);
                            var_38 = ((18446744073709551615 ? -1473896612 : 19));
                        }
                    }
                }
            }
        }
        arr_47 [i_2 - 3] = ((((max((arr_16 [i_2] [i_2 - 3] [i_2]), -856933607625339525))) ? (max((((arr_38 [i_2] [i_2] [i_2 - 2] [i_2 - 3] [i_2 - 3]) - var_7)), (arr_15 [i_2]))) : (max(-3627037273212725304, (((var_14 ? (arr_13 [i_2] [i_2] [i_2]) : var_10)))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_39 = (max(var_39, 0));
                        var_40 = (((arr_6 [i_2] [i_2 - 2]) ? (arr_14 [i_2] [i_2 + 2] [i_14]) : (((!(arr_54 [i_2 + 1] [i_2 + 2] [i_15] [i_16 - 1] [i_16 - 1]))))));
                        var_41 = (min(var_41, ((min((max((arr_16 [i_2 + 1] [i_16 - 1] [i_16 - 1]), (arr_16 [i_2 - 2] [i_16 - 1] [i_16 - 1]))), ((min((arr_41 [i_2 - 1] [i_16 - 1] [i_16 - 1]), (arr_41 [i_2 + 2] [i_16 - 1] [i_16 - 1])))))))));
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_42 = (((~(arr_26 [i_15]))));
                        arr_58 [i_2] [i_2] [i_15] = (arr_39 [i_2 - 2] [i_2 + 3]);
                    }
                    var_43 *= (arr_45 [i_2 + 3] [i_2] [i_2] [i_2]);
                    var_44 *= 127;
                    var_45 = 63;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        var_46 = ((var_10 ? (arr_59 [i_18] [i_18]) : (arr_59 [i_18] [i_18])));
        var_47 = (min(var_47, ((-(arr_60 [i_18])))));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 19;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            {
                var_48 = ((max(var_3, (min((arr_60 [i_20]), (arr_60 [i_19]))))) * (var_14 + -564698554572667514));
                arr_65 [i_19] = ((-(!var_14)));
                arr_66 [i_19] [i_19] = (var_8 ? (max((((~(arr_61 [i_20])))), var_4)) : var_3);
                /* LoopNest 3 */
                for (int i_21 = 1; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 17;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 19;i_23 += 1)
                        {
                            {
                                arr_75 [i_19] [i_20] [i_21] [i_22] [i_23] = ((-96 - 0) ? var_1 : (arr_72 [i_19] [i_20] [i_21] [i_19]));
                                arr_76 [i_19] [i_20] [i_21] [i_19] [i_23] = (min(((((~var_7) != (~61)))), (arr_72 [i_19] [i_20] [i_21] [i_19])));
                            }
                        }
                    }
                }
                var_49 += 47;
            }
        }
    }
    var_50 = var_3;
    var_51 = var_5;
    #pragma endscop
}
