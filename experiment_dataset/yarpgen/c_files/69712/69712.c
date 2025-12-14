/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (((((max((arr_1 [i_0]), var_9))) || ((!(arr_1 [i_0]))))))));
        var_20 = (((!(~-122))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_21 = ((~((var_11 ? (var_5 >= var_18) : (~var_9)))));
            var_22 ^= (-71 / -6155017917397742869);
            arr_4 [i_1] [i_1] [i_1] = var_14;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = (min(var_23, (((+((((max((arr_3 [i_2] [1]), var_17))) ? (arr_1 [i_0]) : ((((arr_0 [i_0]) > -1278631391))))))))));
            var_24 *= (min(((((max(var_7, (arr_6 [i_0] [i_2])))) ? -42 : var_10)), (((((92 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_2])))) ? ((0 << (var_15 - 26))) : var_6))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = ((var_2 || (arr_6 [i_0] [i_3])));
            arr_9 [i_3] = (!var_14);
            arr_10 [i_0] = 180;
            arr_11 [i_0] [i_3] &= 192;
        }
        var_26 = (min(var_26, ((((var_9 / var_3) - 1)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_27 ^= -3588000689032329557;
            var_28 = (((1 <= var_7) || (1958362734 + var_10)));
            var_29 += (~var_9);
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_30 = (((((arr_17 [i_4]) ? (arr_12 [i_6]) : (arr_17 [i_4]))) ^ ((min((arr_12 [i_4]), (arr_12 [i_4]))))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                var_31 += ((((max((arr_13 [i_6]), ((max(1, var_0)))))) >> (((var_17 >= (~1))))));
                var_32 = ((((!(((var_0 ? var_18 : (arr_14 [1] [i_6])))))) ? (1 | 0) : ((var_7 ? (~1) : ((min(62, var_16)))))));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_33 = (min(var_33, (((~((1 ? 2601197117997252506 : 0)))))));
                    var_34 = (((arr_13 [i_4]) ? -var_1 : ((((-1 && (arr_20 [i_8] [i_7] [i_4] [i_4])))))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_35 *= ((var_6 ? ((((1 && var_7) < 31))) : ((var_12 ? 35 : 1))));
                        var_36 = var_15;
                        var_37 = ((((var_15 | (arr_13 [i_6]))) | ((var_13 ? var_10 : var_0))));
                        var_38 = (max(var_38, ((((((-(var_8 & 9101634777991273036)))) ? (var_6 ^ var_4) : (((((((-2147483647 - 1) ? 0 : 1))) && (((228 ? 1 : 1)))))))))));
                    }
                    arr_26 [i_4] [i_6] [i_7] [i_9] = ((arr_23 [1] [i_6] [i_6] [i_7] [1] [i_9]) ? ((max(var_7, (arr_20 [i_4] [i_6] [i_7] [i_9])))) : ((min((arr_19 [i_7]), (arr_19 [i_7])))));
                    var_39 *= ((!(((var_11 ? (~262128) : 91)))));
                    var_40 = (max(((max(var_0, var_12))), -64));
                }
                arr_27 [i_4] [i_6] = (!var_6);
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                var_41 = (arr_21 [i_4] [i_4] [i_4] [i_4] [4]);
                var_42 = var_3;
                var_43 = -126;
                var_44 = ((1 ? (arr_25 [i_11] [i_11] [i_11] [i_6] [i_4] [i_11] [i_4]) : var_9));
                var_45 = (((arr_18 [i_4] [i_6] [i_11]) ? (arr_18 [i_4] [i_6] [i_4]) : var_0));
            }
            for (int i_12 = 4; i_12 < 23;i_12 += 1)
            {
                var_46 = (min(var_46, var_9));
                var_47 = (max((((1 << (255 - 248)))), var_1));
            }
            var_48 = 7562514308190479035;
        }
        for (int i_13 = 1; i_13 < 23;i_13 += 1)
        {
            var_49 = (var_11 != 1);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 0;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_42 [i_4] [i_13] [i_14] [i_15] = (min((+-1), ((((~var_10) != var_14)))));
                        var_50 = ((min(var_13, ((max(1, var_17))))));
                        var_51 = (max(var_51, (((((arr_19 [i_4]) + ((-9101634777991273031 ? -262123 : var_1)))) <= (((~(arr_20 [i_15] [i_14] [i_4] [i_4]))))))));
                        var_52 *= var_6;
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_53 = (min(var_53, ((((min(var_9, (arr_32 [6] [i_16] [12]))) * (((var_17 ? var_16 : ((var_10 ? 118 : var_11))))))))));
            var_54 = (min(var_54, ((((arr_24 [1] [i_16] [i_16] [12] [i_16]) + (((arr_33 [i_4] [i_4] [i_16]) / (arr_33 [i_4] [i_16] [i_16]))))))));
            var_55 = (min(var_55, (arr_34 [i_4] [i_16])));
        }
        arr_45 [i_4] = (((arr_35 [i_4] [i_4]) ? ((min(((min(56, 30))), (var_13 / var_13)))) : ((((max(var_6, -9223372036854775804))) ? -6234349966187948985 : ((262138 ? (arr_21 [1] [11] [i_4] [i_4] [0]) : var_6))))));
    }
    var_56 ^= var_15;
    var_57 &= ((1 ? var_5 : var_6));
    var_58 ^= ((var_0 ? (((((var_18 ? var_11 : var_4)) > 1))) : (((((var_10 ? var_9 : 1))) ? ((7676 ? var_7 : var_2)) : (1 | var_4)))));
    #pragma endscop
}
