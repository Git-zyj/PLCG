/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [10] |= (((~var_11) ? 0 : (0 / 22)));
        var_17 |= (((0 * 33854) == (arr_1 [i_0] [16])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = 0;

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                arr_10 [i_3] = var_13;
                arr_11 [i_3] = -114225151;
            }
            arr_12 [i_1] [i_2] [i_1] &= 236;
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_19 += var_11;
            var_20 = var_10;
            arr_16 [i_4] [i_4] [2] = (((arr_7 [i_1] [i_1]) ? (arr_7 [i_1] [i_4]) : (arr_7 [i_1] [i_4])));
            var_21 = (((arr_6 [i_1]) ? 22 : -1));
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] |= 1;

        /* vectorizable */
        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_6] = (((((var_12 ? 0 : 0))) ? 0 : (((2 ? -10258 : (-127 - 1))))));
            var_22 = 164;

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_25 [i_7] [i_6] [1] = 1;
                arr_26 [i_5] = 7477468118070030649;
                var_23 += ((((-3 < (arr_8 [12] [i_7] [i_6 + 1] [12]))) ? (arr_20 [i_6 + 1] [i_6 + 2] [i_6 + 2]) : (var_11 - 90)));
                var_24 = (arr_1 [i_6 + 3] [i_6 + 1]);
                var_25 += ((((((arr_13 [i_5]) ? (arr_6 [i_7]) : 2))) ? ((var_2 ? var_14 : var_10)) : ((var_5 ? -10258 : (arr_1 [i_5] [i_6])))));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_26 = 1;
                arr_29 [i_5] [i_8] [i_8] = (1 & 1);
                arr_30 [4] [i_6] |= ((-23 ? var_4 : var_11));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_35 [1] [i_6] [i_9] = ((var_7 != (arr_1 [i_6 - 1] [i_6 - 1])));
                arr_36 [i_5] [i_6] [i_6] = ((91 ? var_3 : 1187182187));
                arr_37 [i_5] [i_5] = (((arr_3 [i_6]) ^ ((var_0 ? -54 : var_5))));
            }
            arr_38 [17] = ((~((var_6 ? (-2147483647 - 1) : var_13))));
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
            {
                var_27 ^= ((!((((((var_1 ? var_6 : 130944))) ? (((1620999289 ? var_4 : 1))) : ((22 ? 15434 : var_5)))))));
                arr_45 [i_10] [i_11 + 4] [i_10 + 3] [i_10] = (~var_0);
            }
            /* vectorizable */
            for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
            {
                var_28 += 1;
                var_29 = 700223774;
            }
            arr_49 [i_5] [16] &= -23;
            arr_50 [i_10] [i_10] [i_5] = -4377509395222439410;
            var_30 = (min(var_30, var_12));
        }
        for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
        {
            arr_53 [i_5] [i_13] = ((0 ? 0 : ((82 ? 596937516 : 3))));
            arr_54 [i_5] [i_13] = (824222561 - var_9);
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_31 = ((0 ? 4377509395222439410 : 11097));
            var_32 += var_8;

            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                arr_61 [11] [i_14 + 3] [12] [i_15] = -1112629188637820648;
                arr_62 [i_5] [i_5] [i_5] = (-11 - 65535);
            }

            for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
            {
                var_33 += (((1112629188637820656 - 1) ? 0 : 54));

                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    arr_67 [1] = ((-(-4474623546580403392 - 1)));
                    var_34 = (min(var_34, var_0));
                    var_35 = var_10;
                }

                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {

                    for (int i_19 = 1; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_36 = (2334410130 - -4474623546580403392);
                        arr_72 [13] [i_14] [i_16] [i_18] [i_19] = (var_13 < 32767);
                        var_37 += 1112629188637820687;
                        var_38 = (min(var_38, (1 + 1)));
                    }
                    for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_39 = (min(var_39, 1));
                        var_40 |= ((var_10 ? (arr_27 [i_14 - 1] [i_14 + 1] [i_14 + 2] [i_14 + 3]) : var_7));
                    }
                    var_41 = (1 / 1);
                }
            }
            for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    var_42 = -1020041860350382995;
                    var_43 = (max(var_43, (~0)));
                    var_44 = ((var_7 ? (((24703 ? 9447 : 0))) : (var_5 ^ var_9)));
                    arr_80 [i_22] [i_14 + 1] [i_21] [i_22] = ((((-29351 ? 1 : (arr_73 [i_22] [i_21] [i_21] [i_14] [i_5]))) >= 0));

                    for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
                    {
                        var_45 = ((10687 ? (arr_77 [i_22] [i_14]) : (arr_58 [i_5] [i_5] [i_5] [i_5])));
                        arr_83 [i_5] [i_14] [i_21] [i_5] [i_5] [i_22] [i_23] = ((125 ? -126 : 11419));
                        var_46 ^= var_13;
                    }
                    for (int i_24 = 0; i_24 < 19;i_24 += 1) /* same iter space */
                    {
                        var_47 -= 22;
                        arr_86 [i_22] [i_14] [i_22] [i_14] [i_24] [i_24] = (((((32767 ? var_6 : var_10))) ? (-2369905148351742602 & var_5) : 1));
                        var_48 = ((0 ? 54861 : (var_10 - var_8)));
                    }
                    for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                    {
                        var_49 |= (((((3718589125 ? 24676 : var_2))) ? (((arr_60 [i_5] [i_5] [i_21]) ? (arr_85 [i_21] [i_5] [i_21] [i_14 + 2] [i_5] [i_5] [i_21]) : var_9)) : 3718589112));
                        var_50 = (var_0 * 24687);
                        arr_90 [i_21] [i_22] [i_22] = -21;
                        var_51 = (max(var_51, ((((arr_57 [i_5] [i_14 + 2]) ? (126 == var_9) : (40860 / 65535))))));
                    }
                    for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
                    {
                        arr_94 [i_5] [i_14] [i_5] [i_22] [i_26] = (~40848);
                        arr_95 [i_5] [i_14] [i_21] [10] [i_22] = (arr_32 [i_14 + 2] [i_14 + 1] [i_14 - 1]);
                    }
                }

                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    var_52 = var_13;
                    arr_99 [i_27] = 1;
                    arr_100 [i_5] [i_5] [i_5] [i_27] = ((var_0 ? ((var_1 ? var_0 : 2199778767)) : ((1 ? var_3 : 4048164874))));
                }
                arr_101 [i_5] [i_14] [5] [i_21] = 0;
            }
        }
        var_53 = var_7;
    }
    #pragma endscop
}
