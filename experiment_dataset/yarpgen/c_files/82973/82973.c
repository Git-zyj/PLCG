/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 |= ((!((((var_13 ? 10709 : (arr_4 [i_1] [10])))))));
            var_22 = ((-(arr_2 [i_1] [16] [i_0])));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_23 = 3747565000;

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_11 [i_2] = (((arr_2 [17] [17] [i_1]) - (min((((arr_10 [i_0] [i_2] [i_2]) / (arr_6 [i_1] [i_2] [i_3]))), var_15))));
                    var_24 -= var_4;
                    var_25 = arr_1 [i_1];
                    var_26 = 117;
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_16 [19] [i_2] = 169;
                    arr_17 [i_0] [i_2] [i_0] = 108;
                    var_27 = (min(var_10, (((-((((arr_15 [i_0]) != 3785406317))))))));
                    var_28 ^= max(((var_15 ? ((var_18 ? 1 : var_3)) : (arr_13 [i_2] [i_4]))), ((max((arr_0 [9]), var_16))));
                }
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_29 += 33554430;
                var_30 = (min(((22811 ? ((((arr_13 [i_0] [i_0]) > (arr_19 [i_5] [i_1])))) : ((var_3 ? (arr_4 [i_0] [i_0]) : var_17)))), (arr_4 [2] [i_1])));
                var_31 = -18446744073709551615;
                var_32 = (((((((var_1 ? (arr_7 [i_0] [i_0] [i_5]) : -812))) ? (((arr_18 [i_1] [i_5] [i_5]) | var_19)) : (arr_13 [i_1] [i_0])))) ? (((arr_2 [i_0] [i_1] [i_5]) ? ((1 ? var_7 : 1895644041)) : (((arr_10 [i_0] [i_5] [i_5]) ? (arr_19 [i_5] [14]) : (arr_18 [i_5] [i_5] [6]))))) : ((511 ? var_8 : (min((arr_19 [i_5] [i_1]), 50)))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_33 = (arr_7 [i_7] [17] [17]);
                        var_34 = arr_1 [i_0];
                    }
                }
            }
        }
        var_35 = (((((-((max(-16864, 30)))))) && (arr_5 [i_0])));
        var_36 = 18446744073709551104;
        var_37 = (arr_19 [0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = (~10356858623043113712);
        arr_29 [i_8] = (min(((((((182 ? 63 : (arr_15 [i_8])))) ? (40 <= 1) : (((0 == (arr_7 [i_8] [1] [i_8]))))))), ((((max(-960, (arr_5 [i_8])))) ? (arr_3 [i_8] [i_8] [i_8]) : var_15))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            var_38 ^= ((0 ? (((-(min(var_15, (arr_26 [15] [15])))))) : 0));
            var_39 = var_4;
            arr_35 [i_9] = (((((28 < (arr_20 [i_9] [i_9] [14] [i_9])))) == ((max(1, 15610)))));
        }
        var_40 = (((1 & var_1) ? (!var_3) : (arr_21 [i_9] [i_9])));
    }
    var_41 -= ((var_8 ? (((-((var_13 ? var_9 : var_16))))) : (((((2662968692616089883 ? 6362332105997705907 : 14157))) ? 511 : var_12))));
    var_42 = 1;

    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_43 |= (var_9 ? ((((var_18 != (arr_1 [i_11]))) ? (arr_18 [i_11] [i_11] [i_11]) : (!24))) : (((((0 ? var_12 : var_5))) ? (arr_26 [0] [i_11]) : var_19)));
        var_44 &= var_3;
        var_45 = (min(((-23322 ? 40 : (arr_1 [i_11]))), var_7));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {
        var_46 = (var_10 % (max((arr_10 [18] [i_12] [i_12]), (arr_23 [12] [i_12]))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_47 &= (-734 ? (((!(arr_42 [i_12])))) : (-127 - 1));
            arr_44 [i_12] [i_13] = (((arr_9 [i_12] [i_13] [8]) ? (min(var_18, (arr_30 [11]))) : ((-var_16 ? (arr_38 [i_12]) : -31112))));
        }
        var_48 &= var_12;
        var_49 = (((((((min(-106, -22695))) ? 214 : (arr_5 [i_12])))) && (((((-(arr_42 [i_12]))) - ((18446744073709551599 ? var_17 : (arr_6 [i_12] [i_12] [i_12]))))))));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_50 = (arr_36 [i_14]);
        var_51 = var_4;
        var_52 = -74;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
    {
        var_53 = (((arr_39 [i_15]) - 0));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                {
                    var_54 = ((63 ? ((9828504889698459905 / (arr_20 [i_15] [i_16] [i_15] [i_15]))) : ((((arr_40 [11]) ? var_4 : var_8)))));
                    arr_54 [i_15] [i_16] [i_15] [i_17] = ((((-1798953558 >= (arr_27 [i_15] [i_16]))) ? ((((arr_27 [i_17] [i_15]) % (arr_33 [i_16])))) : (arr_5 [i_17 - 1])));
                    var_55 = (arr_3 [i_15] [i_16] [i_17 + 2]);
                    var_56 = ((var_2 ^ (arr_12 [i_17 - 1] [i_17 - 2] [i_17 - 2] [i_17 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
