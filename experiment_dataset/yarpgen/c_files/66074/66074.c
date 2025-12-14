/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0 - 1] = var_8;
            arr_7 [17] [17] [17] = var_3;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] = var_7;
                arr_16 [i_0] [i_2] [1] [11] = ((-13009 ? 82 : 1163442993201653710));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_11 *= (((arr_13 [i_5 - 1] [i_0 - 2]) ? var_4 : (arr_13 [i_5 - 1] [i_0 - 2])));
                            var_12 = (max(var_12, (((0 ? (arr_23 [i_0] [i_0] [0] [0] [i_5] [i_2]) : -4721048617655655730)))));
                            arr_24 [i_0] [i_5] [i_5] [6] [i_5] [i_5] = var_8;
                        }
                    }
                }
                var_13 |= (arr_5 [i_0] [i_0]);
            }
            var_14 = var_2;
        }
        arr_25 [i_0 - 2] = (((arr_8 [i_0 + 1] [i_0 - 2]) ? var_7 : (arr_12 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_15 ^= var_1;
        arr_30 [11] [i_6] = (-(arr_9 [i_6]));
        var_16 = (((((var_8 ? (arr_4 [i_6] [i_6]) : var_1))) <= (((arr_8 [i_6] [i_6]) | var_5))));
        arr_31 [i_6] [i_6] = (((((var_0 * (arr_23 [i_6] [2] [i_6] [i_6] [i_6] [i_6])))) ? (arr_2 [i_6] [i_6]) : var_0));
        arr_32 [i_6] = (arr_4 [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_17 = ((~((min((arr_26 [i_7]), (arr_26 [i_7]))))));
        arr_37 [i_7] = ((var_1 != (((((var_7 << (var_2 - 16239905731473277164)))) ? (arr_36 [i_7] [13]) : (var_5 && var_2)))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_42 [i_7] [7] [i_7] = (((((var_1 ? (arr_11 [i_8 + 1]) : (arr_11 [i_8 - 1])))) ? (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : var_2));
                    arr_43 [i_7] = (((arr_0 [i_8 + 1] [i_8 - 2]) <= var_0));
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_18 = (min(var_18, ((min(var_3, ((var_2 | (arr_21 [10] [6] [10] [i_10]))))))));
            arr_48 [i_7] = (arr_34 [i_10]);
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            var_19 = (((((arr_50 [i_7] [i_7] [i_7]) ? var_4 : var_0)) > var_0));

            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                var_20 ^= -var_6;
                var_21 = (arr_49 [11] [i_7]);
            }
            for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_22 += (var_6 != (arr_22 [i_7]));

                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        arr_64 [i_7] [11] [i_7] [i_7] [i_7] = arr_19 [i_7] [i_11] [i_7] [i_15 + 3];
                        var_23 = (125 + -4721048617655655751);
                    }
                    arr_65 [i_11] [i_7] = var_2;
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        arr_73 [i_17] [i_17] [1] [i_16] [i_17] [10] [i_17] |= var_5;
                        var_24 = var_1;
                        var_25 = ((arr_17 [i_11 - 1] [i_13 + 3] [i_13 + 2] [i_13 + 3] [i_11 - 1] [i_16]) ? (arr_67 [i_7] [i_7] [i_7] [i_13 + 3] [i_13 + 3]) : (arr_17 [i_11] [i_11] [i_11 - 1] [i_13 + 3] [i_16] [i_16]));
                        var_26 = var_8;
                    }
                    arr_74 [7] [7] [i_7] [i_16] [i_11 - 1] [i_7] = var_7;
                    var_27 += ((!(arr_47 [4] [4])));
                }
                var_28 = var_6;
                var_29 += var_6;
            }
            for (int i_18 = 1; i_18 < 13;i_18 += 1) /* same iter space */
            {
                var_30 = (arr_27 [i_18 + 2]);
                var_31 = var_7;
                var_32 = (((arr_51 [i_7] [i_7]) ? var_1 : var_5));
            }
            var_33 = (125 && 65512);
            var_34 &= (!var_5);
        }
    }
    var_35 = var_4;
    #pragma endscop
}
