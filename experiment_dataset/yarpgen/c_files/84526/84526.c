/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((((var_1 ? var_8 : var_7))))));
    var_11 = ((-(--31)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) * var_9))) ? (max(-6561179038237979539, ((41 ? 0 : 4467570830351532032)))) : -4467570830351532033));
        arr_3 [i_0] = ((min((arr_0 [i_0]), -var_5)));
    }

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_12 = arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1];
            arr_10 [i_1 - 1] [i_1] = (arr_7 [i_1 - 1] [i_2] [i_1 - 1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1 + 1] [i_2] [i_3] [i_3] [i_4] = ((~var_9) ^ (arr_11 [i_3] [i_1 + 1] [i_3]));
                        arr_16 [i_4] [i_4] [i_1] [i_1] [i_1 + 2] [i_1] = ((~(arr_14 [i_1] [i_1 + 1] [i_3] [i_1])));

                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_13 += (var_9 & var_8);
                            var_14 *= 975816206;
                            var_15 = (((~(arr_6 [i_4] [i_2]))));
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_16 = -573296302;
                            var_17 = (max(var_17, ((~(arr_14 [i_6 - 1] [i_2] [i_3] [i_4])))));
                            arr_21 [i_1 + 2] [i_2] [i_4] [i_1] [i_6 - 1] = (var_0 / 65534);
                        }
                        arr_22 [i_4] [i_1] [i_3] [i_1] [i_1 - 1] = ((-(arr_14 [i_1 + 2] [i_1 + 1] [i_3] [i_1])));
                    }
                }
            }
            arr_23 [i_1] [i_1] = (arr_7 [i_1] [i_1] [i_2]);
            arr_24 [i_2] [i_1 + 1] [i_1] = (arr_6 [i_1 + 1] [i_2]);
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_33 [i_7] [i_8] [i_1] = (min((arr_11 [i_1 + 2] [i_1 + 3] [i_1 + 2]), ((var_1 / (arr_6 [i_1 + 1] [i_1 - 1])))));
                        arr_34 [i_1 + 1] [i_1] [i_7] [i_7] [i_8] [i_1] = 56966;
                        var_18 -= 1;
                    }
                }
            }
            var_19 = ((((max((arr_8 [i_7] [i_1]), (((!(arr_14 [i_1 + 1] [i_7] [i_1 - 1] [i_1])))))))) >= (arr_20 [i_1 + 3] [i_1] [i_1 + 2] [i_7] [i_1] [i_7]));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            arr_37 [i_1] [i_10] [i_10] = (arr_18 [i_10] [i_1 + 1] [i_1]);
            var_20 = (((arr_19 [i_1] [i_10] [i_10]) & ((-7216247170522903646 ? 8570 : 8570))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                {
                    arr_46 [i_1] = (38039 | 123);
                    var_21 = ((!((((arr_32 [i_1 + 1] [i_11] [i_11] [i_12 - 2]) & ((var_3 ? (arr_38 [i_1]) : var_9)))))));
                }
            }
        }
        var_22 = (max(var_22, (max((((((arr_44 [i_1] [16] [i_1 + 1]) < (arr_20 [i_1] [6] [i_1 - 1] [i_1 + 3] [6] [i_1 + 1]))))), 0))));
    }
    for (int i_13 = 3; i_13 < 20;i_13 += 1)
    {
        var_23 = (((arr_48 [i_13 - 1] [i_13 - 2]) < (((arr_47 [i_13 - 3]) ? var_4 : (min(var_0, (arr_48 [i_13] [i_13 - 3])))))));
        var_24 = (min(var_24, ((4294967295 ? ((min((arr_49 [i_13]), -var_3))) : ((var_3 ? var_4 : (arr_47 [i_13])))))));
    }
    for (int i_14 = 4; i_14 < 22;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 23;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_56 [i_15 + 1])));
                                arr_62 [i_14] [i_15 + 1] [i_16 - 1] [i_17] [i_14] = ((~(arr_53 [i_14 + 1] [i_18] [i_14])));
                                arr_63 [i_14 - 4] [i_14] [i_16 - 1] = var_5;
                                var_26 = (min(var_26, ((min(-311213993, 0)))));
                                arr_64 [i_14] [i_18] = (((((arr_61 [i_16 - 4] [i_14] [i_16] [i_17] [i_18] [i_15 - 1] [i_17]) - (arr_61 [i_16 - 3] [i_14] [i_16 - 3] [i_17] [i_18] [i_14 - 2] [i_18]))) == (arr_61 [i_16 - 4] [i_14] [i_18] [i_17] [i_18] [i_14] [i_16])));
                            }
                        }
                    }
                    arr_65 [i_15 - 1] [i_15] [i_14] [i_15 + 1] = (arr_52 [i_15 - 1]);
                }
            }
        }
        var_27 = (min(var_27, ((((arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 4]) & ((~(arr_61 [i_14 - 4] [14] [i_14 - 3] [i_14 + 2] [i_14 - 3] [i_14 - 1] [i_14 + 2]))))))));
    }
    #pragma endscop
}
