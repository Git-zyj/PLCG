/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (max((((1 | -2806167469586670034) ? var_6 : (arr_0 [i_0 + 3]))), ((max(0, ((0 ? (arr_1 [i_0 + 2]) : var_13)))))));
        var_21 = ((max(((2147483647 ? var_15 : var_11)), ((-31520 ? (arr_2 [i_0]) : var_3)))));
        var_22 = (~(arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    var_23 = ((max(((((arr_8 [i_1]) ? var_6 : 68))), 2224089881520058015)) * ((((3 && ((max((arr_8 [i_1]), var_7))))))));
                    var_24 -= (min(((~((var_6 ? (arr_3 [i_1] [i_3]) : (arr_0 [i_1]))))), var_16));
                    arr_13 [i_1] [i_1] [14] = ((var_11 && (arr_5 [i_2 - 2])));
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_25 = (min(var_25, (((((((var_18 - var_2) ? ((((arr_8 [2]) ? var_10 : var_9))) : ((var_8 ? var_5 : var_16))))) ? (((((max(2224089881520058015, 0)) != (max(16706752751578056626, (arr_6 [i_1] [i_4]))))))) : -7283413962421051299)))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_26 = (((max((arr_17 [i_1]), (arr_17 [i_1])))) ? ((((arr_17 [i_1]) && -1454970686))) : ((max((arr_17 [i_1]), (arr_17 [i_1])))));

                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    var_27 = (max(var_27, var_13));
                    arr_20 [i_1] [i_1] = (((arr_14 [i_1] [i_1]) ? (((arr_10 [i_6] [i_5]) ? (max((arr_1 [i_4]), (arr_5 [i_1]))) : (((0 ? var_14 : var_0))))) : (min((arr_14 [i_6] [i_1]), ((((arr_3 [i_4] [1]) ? var_14 : -55992758)))))));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_28 = 5;
                    var_29 += (arr_9 [14] [14] [14]);
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_30 = (((24 ? (arr_5 [i_4]) : (arr_5 [i_5]))) != var_2);
                    var_31 = ((min(((((arr_15 [i_1] [i_1]) ? var_6 : 3113763207))), ((23934 ? var_12 : -102)))));
                    var_32 = -482401186;
                    var_33 = (((7370800329970634254 << (2147483647 - 2147483647))) - var_16);
                }
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_34 = ((((max(((0 ? 127 : 671479760)), -15166))) ? -482401189 : var_10));
                var_35 = (((arr_19 [i_1] [i_4] [0] [i_1] [0]) ^ (((max(1, 1))))));
                var_36 = (max((((min(0, 32767)))), ((((((var_6 & (arr_5 [i_4])))) && (arr_16 [i_4] [13]))))));
                var_37 = (((+-314455568) ? (((((((arr_0 [i_9]) / 2147483647))) ? 1007314338 : -var_3))) : (((arr_18 [i_9] [i_4] [i_1]) - (arr_4 [i_4])))));
                var_38 = ((((((arr_0 [i_1]) - (arr_5 [i_1])))) ? (arr_0 [i_4]) : ((-(arr_5 [i_1])))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_39 = (arr_24 [i_1] [i_4] [i_10] [i_10] [i_10]);
                var_40 ^= var_10;
                var_41 = (((((arr_0 [7]) ? var_9 : var_14)) % ((((arr_4 [i_10]) && (arr_15 [i_1] [i_1]))))));
                var_42 = var_7;
                arr_29 [i_1] [9] [i_1] = 96;
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_43 = (arr_2 [i_1]);
            var_44 = var_9;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_45 = (arr_27 [i_1]);
            var_46 = ((!3992) * var_16);
            var_47 = (((arr_18 [15] [i_12] [i_1]) == ((1 ? (arr_10 [i_1] [i_1]) : var_1))));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_48 = (max(var_48, ((((110 ? 65535 : (arr_11 [2] [2] [i_13])))))));
            var_49 = (max(var_18, (((!(arr_10 [i_1] [3]))))));

            for (int i_14 = 3; i_14 < 12;i_14 += 1)
            {
                var_50 = (arr_18 [i_1] [i_1] [i_1]);
                var_51 = (((arr_11 [i_14 + 2] [i_14 + 3] [i_1]) >> (((((arr_12 [i_14 + 1] [i_14 + 4] [i_1]) ? (arr_12 [i_14] [i_14 + 3] [i_13]) : var_16)) + 1732787747))));
                var_52 &= (arr_30 [i_14 + 4] [i_14 + 4]);
                var_53 = (arr_7 [i_1] [9] [i_14]);
            }
            for (int i_15 = 3; i_15 < 14;i_15 += 1)
            {
                arr_42 [i_1] [i_13] [i_1] = (var_18 ? (max((((var_12 ? var_17 : var_18))), (arr_28 [i_1] [i_1] [i_1] [i_1]))) : 2582);
                var_54 = (max(var_54, ((max((max((arr_11 [11] [i_15 - 2] [i_15 + 2]), 882748407)), (((arr_11 [1] [i_15 + 2] [i_15 + 2]) % (arr_11 [i_15] [i_15 + 2] [i_15 - 2]))))))));
                arr_43 [i_1] = (~var_3);
                var_55 ^= (arr_37 [6] [i_15 + 2] [i_15 - 2] [i_15 + 1]);
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_56 = (max(var_56, 88));
                var_57 = (3 * -1);
                var_58 = (((!-5955) != var_10));
            }
        }
    }
    var_59 = (min(var_3, var_18));
    var_60 = var_10;
    #pragma endscop
}
