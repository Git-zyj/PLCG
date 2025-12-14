/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((!(((32 ? 3970923393867800878 : 6004))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 *= (28623 >= 32);
        arr_2 [i_0] = (arr_1 [i_0 + 3]);
        var_22 = (73 ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 3]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_23 = ((((13835058055282163712 ? var_4 : var_13)) <= (arr_3 [i_1])));
        var_24 ^= (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (((((3523676705625210895 ? 7652076118714089376 : 14923067368084340721))) ? 1960151983 : (max(14258184154535360633, (32 ^ 24174)))));
        arr_8 [i_2] = (min(((-(arr_0 [i_2]))), ((var_11 ? (((max(0, var_5)))) : var_10))));
        var_25 = (((14923067368084340702 ^ (((min(1, 44794)))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_26 = (max(var_26, (arr_3 [i_3])));
            arr_13 [i_4] [i_3] = ((((~(arr_0 [i_4])))) ? ((((arr_1 [i_3]) & -24))) : (arr_4 [i_3] [i_3]));
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            arr_17 [i_3] = ((((((3422250194998512240 && (arr_9 [i_5] [i_5]))) ? (arr_16 [i_3] [i_3] [i_3]) : (min(var_12, (arr_16 [i_3] [1] [i_5])))))) ? ((-(arr_9 [i_5] [i_3]))) : var_12);
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_28 [i_6] [i_5] [i_5] [9] [i_5] [i_5] [i_5] = ((((min(124, 0))) ? (arr_27 [i_3] [i_3] [i_3] [i_6] [i_3]) : ((((min(59531, 6016))) ? (((arr_24 [i_6]) | (arr_15 [i_3]))) : (((var_2 ? (arr_22 [i_8] [i_7] [i_6]) : 4294967295)))))));
                            var_27 = (min(var_27, (((var_10 >= ((var_15 ? var_8 : (((((arr_22 [i_3] [i_5] [i_6]) != 141)))))))))));
                            arr_29 [i_3] [i_8] [i_6 + 4] [i_7] [i_7] [i_6 + 4] |= ((14087 + ((1429164579 & (arr_26 [i_5] [i_6 + 2] [i_6 - 3] [i_8] [i_6] [i_7 - 1])))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_28 = -59531;
                arr_34 [i_10] [i_3] = (arr_3 [i_3]);

                for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    var_29 |= ((((arr_1 [i_3]) ? 2865802743 : var_13)));
                    var_30 = (min(var_30, ((((arr_23 [i_11] [i_11 + 1] [i_11 + 2] [i_11]) ? (arr_36 [i_11 - 1] [i_11 + 4] [i_11 - 2] [i_11 - 1]) : -2059979295212845130)))));
                }
                for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_40 [i_12 - 1] = (((arr_4 [i_10] [i_12]) < (arr_4 [i_3] [i_3])));
                    var_31 = (-(13581068133986828467 * 0));
                }
                var_32 = (((arr_35 [i_10] [i_3]) ? (arr_18 [i_3] [i_9] [i_10]) : (arr_21 [i_3] [i_9] [0])));
            }
            arr_41 [i_9] [i_9] [i_9] |= (min((65528 - -6073621837243684550), (min(var_15, (((~(arr_27 [i_9] [0] [2] [0] [i_3]))))))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_33 = (+-18446744073709551615);
            arr_45 [i_3] |= (arr_25 [i_3]);
            var_34 *= (max((arr_0 [i_3]), -20));
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_35 += (((((arr_32 [i_3] [4] [i_3] [i_14]) >> (var_3 - 100))) & (arr_16 [i_3] [i_14] [i_14])));
            arr_49 [3] [i_14] = (((var_16 ^ var_6) | ((min(326642726, var_4)))));
            arr_50 [i_14] [i_14] = (arr_31 [i_3] [i_14] [i_3]);
            arr_51 [i_14] = (3812214435 ? 139 : 3289078861107409914);

            for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_36 *= 34083;
                var_37 = (max(var_37, 3144));
                var_38 |= var_0;
                arr_54 [i_14] [i_14] [i_14] [0] = var_11;
                arr_55 [i_14] [i_15] [i_14] [i_14] = ((-((-(arr_18 [i_15] [i_14] [i_3])))));
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
            {
                arr_58 [i_3] [i_3] [i_3] [i_14] = min((max(1960151989, (arr_11 [i_3] [i_14] [i_16]))), 2906287645198029734);
                arr_59 [i_14] [i_16] [i_16] = var_17;
                arr_60 [i_14] = (((min((arr_19 [i_3] [i_14] [i_16]), (arr_19 [i_3] [i_3] [9])))) ? 0 : (arr_12 [i_3] [i_3] [i_3]));
            }
            for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
            {
                arr_64 [i_14] [i_14] [10] [i_3] = (arr_15 [i_14]);
                arr_65 [i_14] [i_14] [i_3] [i_14] = 1960151983;
            }
        }
    }
    #pragma endscop
}
