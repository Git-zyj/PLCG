/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (((((((min(var_3, 205))) / -53))) ? ((min(-49, -49))) : (17212 & 2756)));
                var_11 |= ((!((!(arr_4 [i_0] [2])))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = 25642;
                                var_13 = (((!((min(var_7, 39888))))));
                            }
                        }
                    }
                    arr_11 [i_1] [i_1] [i_2] = (!var_9);
                    arr_12 [i_1] = -7230;
                }
            }
        }
    }
    var_14 |= var_7;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_15 = (max(-2147483637, (arr_5 [i_5])));
        arr_16 [i_5] = (-870302656 ? (1467521209 & 141) : ((var_0 ? ((-120 ? -70 : 25629)) : ((66 ? var_2 : 83)))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_20 [i_5] [6] [i_5] = -var_0;
            arr_21 [3] [i_5] [i_6] = (-124 < var_7);
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_30 [i_9] [i_5] [0] [i_5] [i_5] = (max(((min((min((arr_13 [i_5]), var_4)), -19))), ((var_8 ? var_2 : (arr_17 [i_5])))));
                        var_16 = (min(((-(arr_8 [i_8] [i_8 - 1] [i_8 - 2] [i_5]))), ((min(var_7, var_5)))));
                    }
                }
            }
            var_17 = ((!((max(var_8, var_5)))));
        }
        arr_31 [i_5] = (arr_17 [i_5]);
    }
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        var_18 = (min((!11), (min((~65525), -83))));
        var_19 = (min((min(var_2, -43)), ((2732 ^ ((max(22, var_7)))))));

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        var_20 -= 57194;
                        var_21 = -6;
                        var_22 = (min(((!(arr_32 [i_10] [i_10 - 2]))), ((-7 > (arr_32 [i_10 + 1] [i_10 - 1])))));

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_23 = ((min(127, (arr_38 [i_10 - 2]))));
                            var_24 = (((!-2846) > (min((arr_34 [i_10 - 1] [i_14]), var_2))));
                            var_25 = (max(var_25, (!250)));
                        }
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            var_26 = 32748;
                            arr_48 [15] [i_13] [i_13] [i_15] [i_11] [i_11] [i_10] = (min(8368, 2099417407));
                            var_27 &= 63;
                            arr_49 [11] [i_15] [i_12] [i_13] [i_15] [14] [i_15] = (min((var_4 ^ 71), (arr_46 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1])));
                        }
                    }
                }
            }
            var_28 = (((-32742 ^ 198) ? 211 : (24 & 2850)));
            var_29 = var_5;
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_30 = ((-((min(var_5, 65524)))));
            arr_52 [i_10] [i_10] [i_16] = var_3;
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            arr_55 [i_10] [i_10] = var_1;
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    {
                        arr_63 [i_10] [i_10] [i_10] = 169;
                        var_31 = ((-11 ? (min(((min(var_6, var_4))), ((-32 ? 3 : (arr_41 [19] [11] [11] [i_18] [16]))))) : (((!(45 | 113))))));
                    }
                }
            }
            var_32 *= (((((var_9 >= (var_9 == var_7)))) << (((min(-var_3, (!var_7))) + 9739))));
            var_33 = (max((!var_0), (max(65514, (arr_41 [i_10 - 2] [9] [6] [5] [6])))));
        }
    }
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        arr_66 [i_20] [i_20] = 32750;
        var_34 = var_8;
    }
    /* vectorizable */
    for (int i_21 = 3; i_21 < 18;i_21 += 1)
    {
        var_35 = (((arr_54 [i_21 - 3] [i_21] [i_21]) == (arr_54 [i_21 + 1] [i_21 - 1] [i_21])));
        arr_70 [i_21 - 3] = (-2147483635 > 38464);
    }
    var_36 = 224;
    #pragma endscop
}
