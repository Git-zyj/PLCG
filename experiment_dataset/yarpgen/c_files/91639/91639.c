/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_12 ? (max(((var_0 ? var_4 : var_0)), (~var_13))) : 7));
    var_21 |= (((((((max(var_1, -104))) ? var_11 : var_18))) ? var_15 : (((-98 == var_18) % -105))));
    var_22 = (max(var_22, var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_23 |= arr_1 [i_0 + 1];
        var_24 |= (arr_1 [i_0]);
        var_25 |= var_12;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [0] |= max(((((arr_6 [i_2] [2] [i_1]) == (arr_6 [i_1] [2] [i_2])))), 1046041201916051720);
            arr_8 [14] [14] [i_2] |= max(((((arr_0 [1]) >= (arr_0 [i_2])))), (((var_6 ? -26 : (arr_0 [i_2])))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_26 |= var_8;
                var_27 = (max(var_27, (((((((97 == (arr_1 [i_3]))))) >= 0)))));
                arr_13 [i_1] [i_1] [i_3 + 1] [10] |= (((arr_4 [i_1] [i_3 - 1]) % (arr_4 [i_1] [i_3 + 1])));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_17 [10] [i_2] [i_4] |= ((((~(var_4 % var_16))) == (var_10 && 12)));
                var_28 = (min(var_28, 7873389983690134740));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_29 = (max(var_29, (arr_19 [i_1] [i_1] [i_1] [i_5])));
                var_30 |= arr_4 [i_1] [i_1];
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_31 = (max(var_31, ((((arr_18 [i_1] [i_6] [i_6] [i_7]) >= (~var_18))))));
                    var_32 |= ((var_8 ? ((var_6 ? (arr_23 [i_1] [i_6] [i_6] [i_7]) : 17154343774204559327)) : ((((arr_2 [i_7] [i_2]) ? (arr_1 [5]) : (arr_1 [21]))))));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_33 = (min(var_33, (((((var_4 % (arr_12 [i_2] [i_6] [i_9]))) == 1292400299504992288)))));
                        var_34 = (min(var_34, (((((((arr_23 [i_8 + 1] [i_6] [i_8 - 1] [i_8 - 1]) % -98))) == ((-(0 % -46))))))));
                    }
                    var_35 |= (!4499201580859392);
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_36 |= ((115 % ((15 ? var_15 : var_11))));
                    arr_34 [i_1] [i_1] [i_6] [i_6] |= var_1;
                    var_37 = (min(var_37, (((((108 ? (arr_14 [i_6] [i_2] [14]) : var_8)) % (arr_1 [i_2]))))));
                }
                var_38 |= arr_22 [16];
            }
            var_39 |= (max((min(var_13, (var_17 == 1837906512903084389))), (!18014398509481968)));
            arr_35 [i_1] [0] [i_2] |= var_8;
        }
        for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                var_40 |= (((max((arr_29 [i_1] [i_11] [i_12 + 1] [i_11 - 1] [i_11 - 1] [i_12 + 3] [i_11]), (((arr_29 [i_1] [i_1] [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11] [i_12]) % 80)))) == var_0));
                var_41 |= (max((arr_14 [8] [i_12] [i_12 + 1]), (!var_11)));
            }

            /* vectorizable */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                var_42 |= ((arr_22 [i_13]) ? (((arr_9 [14] [i_11] [i_11] [14]) ? var_4 : var_11)) : ((((arr_1 [i_13]) / (arr_42 [i_13] [i_1])))));
                var_43 = (max(var_43, (-65 * var_1)));
                var_44 |= -7;
                arr_43 [12] [12] [i_11] |= (((arr_1 [i_11 - 1]) ? var_16 : (arr_1 [i_11 + 1])));
            }
        }
        for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
        {
            arr_48 [i_1] [10] |= 128849018880;
            var_45 = (min(var_45, 8662706972130005345));
            var_46 = (max(var_46, 87));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_47 |= (((((!(arr_30 [i_15] [i_1])))) == (((var_10 >= ((max(var_2, var_3))))))));

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                var_48 = (max(var_48, (arr_12 [i_16] [i_15] [i_1])));
                arr_55 [i_16] [2] [i_1] [2] |= ((!((max(((var_13 ? 127 : var_0)), ((83 ? -101 : var_16)))))));
                var_49 = (min(var_49, 0));
            }
        }

        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_50 |= (max((((arr_5 [i_17] [i_17]) % var_18)), (((-(arr_22 [i_17]))))));
            arr_58 [i_17] |= -62;
            var_51 = (min(var_51, var_0));
        }
    }
    for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
    {
        var_52 = (max(var_52, var_1));
        var_53 |= ((-(~15005249153046888715)));
        var_54 |= (max(var_16, ((((arr_5 [10] [i_18]) == (~var_11))))));
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1)
    {
        arr_64 [i_19] |= 160471933388852178;
        arr_65 [i_19] [i_19] |= (arr_63 [i_19] [13]);
    }
    var_55 = (min(var_55, (!6479070495036189968)));
    #pragma endscop
}
