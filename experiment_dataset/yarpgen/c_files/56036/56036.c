/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (arr_6 [i_0]);
                    var_11 = (max(var_11, ((((arr_7 [i_0] [i_1] [i_2]) > ((((((max(0, -79))) <= (1 != 1))))))))));
                }
            }
        }
        var_12 = (min((max(var_0, ((min(220, var_1))))), 1));
        var_13 = var_5;
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 - 1] [i_3 - 1] = (((~var_5) ? (~0) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
        arr_13 [i_3] [i_3] = var_3;
        var_14 = (min(var_14, var_5));
        var_15 = 168;
        arr_14 [i_3] &= (((arr_11 [i_3] [i_3 - 1]) ? (arr_11 [1] [i_3 - 1]) : (arr_11 [i_3] [i_3 - 1])));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_16 = ((min((1 * 1), (min(-20412722, 225)))));
        var_17 = ((((max((-90 / var_8), (min(var_1, (arr_8 [i_4] [i_4] [i_4])))))) / (min((((arr_3 [i_4]) ? (arr_4 [i_4]) : var_0)), 3887263183879608707))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_18 = (((arr_9 [i_5] [i_5 - 1] [i_5 - 1]) ? (~var_1) : (arr_9 [i_5] [i_5 - 1] [i_5 - 1])));
        var_19 = ((((min(10801, 34))) ? (arr_9 [i_5] [i_5 - 1] [i_5]) : (arr_9 [i_5] [i_5 - 1] [i_5 - 1])));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    {
                        var_20 = (((((max((arr_6 [i_5 - 1]), (arr_6 [i_5 - 1]))))) < (max((arr_16 [i_5] [i_7]), (var_4 * 1700943290)))));
                        var_21 = ((!(!-13184)));
                        arr_31 [i_5] [i_5] [i_6] &= var_7;
                        var_22 = (max(var_22, (!-10305)));
                        var_23 = (max(var_23, (!212)));
                    }
                }
            }
            var_24 = var_9;

            /* vectorizable */
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                arr_34 [i_5] [i_6] [8] = -13184;
                var_25 = (max(var_25, (((~(~var_7))))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_26 &= ((~((max(-27117, (max(var_7, 105)))))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_27 = ((~(var_6 || var_0)));
                            arr_42 [i_5] [i_11] [i_10] [i_11] [1] [i_12] [i_10] = var_6;
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            arr_52 [i_5 - 1] [i_6] [i_13] [i_15] [i_15] = (arr_48 [i_15] [i_14] [i_14 + 1] [i_13] [i_6] [i_5]);
                            var_28 = (max(var_28, ((max(((((arr_39 [i_5 - 1] [i_5 - 1] [i_5 - 1]) & (arr_32 [i_15] [i_14 + 1] [i_5 - 1] [i_14])))), (min(var_0, (arr_32 [i_15] [i_14 + 1] [i_5 - 1] [i_14 + 1]))))))));
                        }
                    }
                }
                var_29 = (((arr_19 [i_5 - 1]) - (min(1, (max((arr_3 [i_6]), var_8))))));
            }
        }
        var_30 = (min(((((var_2 != var_0) ? (((0 > (arr_0 [i_5])))) : (arr_8 [i_5] [i_5 - 1] [i_5])))), (arr_32 [i_5 - 1] [i_5] [i_5] [i_5])));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    var_31 = (max(var_31, (arr_54 [i_16])));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 12;i_20 += 1)
                        {
                            {
                                var_32 = ((20588 ? ((~(min((arr_1 [i_16]), 8516541337595721266)))) : 10801));
                                var_33 &= ((var_4 ? (min(((var_4 ? (arr_22 [i_16]) : var_0)), ((max(var_7, var_8))))) : ((-var_2 ? (((arr_11 [i_16] [i_16]) ? var_0 : (arr_50 [i_16] [i_17] [i_16] [i_19] [i_19]))) : (((arr_21 [i_16]) ? 12767982583930406442 : (arr_58 [i_16])))))));
                                var_34 = (max(var_34, ((max((((var_7 != (((arr_11 [i_18] [i_18]) ? (arr_29 [i_20] [i_17] [i_18] [i_17] [i_16]) : var_5))))), ((+((min((arr_20 [i_16]), 78))))))))));
                                var_35 = (min(var_35, 12767982583930406442));
                            }
                        }
                    }
                    arr_67 [i_16] [i_17] [7] = (((((24619 ? (arr_60 [i_16] [0]) : (!738104176314736085)))) ? 62016 : ((~(arr_27 [i_18] [i_17] [i_16])))));
                    var_36 &= -var_4;
                }
            }
        }
        var_37 = (min(var_37, (((min(1, (arr_51 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        arr_68 [i_16] = (1 ? (((((min(-3559857082635281137, 10037)) + 9223372036854775807)) << (67 - 67))) : 0);
    }
    var_38 *= ((~(min(var_0, (!23)))));
    #pragma endscop
}
