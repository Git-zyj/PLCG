/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [0] = (((arr_2 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        var_20 = (arr_1 [i_0 - 1]);
        var_21 = ((3370895716184667669 % (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 - 1] [i_1] = (arr_7 [19] [i_1]);

        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_22 = ((((min(812902208, (arr_1 [i_1 - 1])))) ? (arr_9 [i_1 - 1]) : (arr_4 [i_2 - 2] [i_1])));
            var_23 = (min(var_23, (((((((arr_7 [i_1 - 1] [i_1 - 1]) % 3482065087))) + (((((arr_7 [i_1] [i_2]) || (arr_4 [i_1] [22]))) ? (arr_4 [i_1] [1]) : (((((arr_1 [i_2]) != var_17)))))))))));
            arr_11 [i_1] [i_1] = 3601649254414997205;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_1] [1] = (((~3601649254414997205) ^ -3601649254414997205));
            var_24 = (arr_15 [i_3]);
        }
        for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_25 [i_1] [i_4 + 1] [i_5] [i_1] = var_10;
                    arr_26 [i_1] [i_4] [i_5] [i_5] [13] = var_13;
                    var_25 = (max(134213632, ((max((arr_24 [i_1] [i_1 - 1] [i_4 - 1] [i_6]), (arr_24 [i_1] [i_1 - 1] [i_4 - 1] [i_6]))))));
                    var_26 = (((((!(arr_9 [i_1 - 1])))) << (((max((((arr_24 [i_1] [i_4] [i_5] [i_6]) ? 1 : 6872750873633949127)), -26421)) - 18446744073709525190))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_29 [19] [i_1] [i_1 - 1] [i_1] [i_1] = (max((((arr_12 [i_4 - 2] [i_7] [i_7 + 3]) & (arr_23 [i_1] [i_1 - 1] [1]))), (26441 <= 1)));
                    arr_30 [i_1] [i_1] [i_7] = (max((((arr_4 [i_1 - 1] [i_1]) - 1)), var_1));
                    var_27 = (max(1, (max((arr_27 [i_1 - 1] [i_1] [i_4 + 1] [i_7 - 1]), 12))));
                }
                var_28 = 9223372036854775807;

                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_29 = (max((0 - var_5), (max(7595294141417214378, (arr_15 [i_1 - 1])))));
                    arr_33 [i_1] [i_4] [i_5] [1] [i_1] [i_5] = -3601649254414997205;
                    arr_34 [i_1] [i_4] [i_5] [i_8] = (min(((max(9223372036854775800, (arr_21 [i_1])))), var_17));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_37 [i_1] = 0;
                    var_30 = (min((max((arr_12 [i_1] [i_1] [i_4 - 2]), (arr_12 [i_4 + 1] [17] [i_4 - 2]))), (arr_28 [i_4 - 2] [i_1] [i_4 + 1])));
                }
            }
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                arr_41 [i_1] = (((((arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1]) ? (arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1]) : (arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1]))) >= (arr_31 [i_1 - 1] [i_4 - 1] [i_10 + 1])));
                arr_42 [i_1] [i_1] [4] [i_10 + 1] &= (arr_24 [i_1] [i_1] [i_1] [i_1]);
            }
            var_31 = (max(var_31, (((((min((((arr_13 [i_1 - 1]) / (arr_5 [1]))), (max((arr_5 [16]), (arr_14 [16] [12])))))) + (~18446744073709551613))))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_32 = (4294967295 ? (arr_39 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : 130);

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_33 = 1;
                        var_34 = (((arr_10 [i_11] [i_12] [i_13]) == -20069));
                    }
                    var_35 = (812902213 + 1);
                    arr_50 [i_1] [i_1] = (arr_17 [i_1 - 1]);
                    var_36 = 209;

                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_37 = ((var_12 << (-29576 + 29592)));
                        var_38 = 63725;
                        var_39 = ((var_10 ? (arr_32 [6] [i_1 - 1] [i_14 - 1] [i_14 - 1]) : (arr_32 [i_1] [i_1 - 1] [i_4] [i_14 - 1])));
                        arr_55 [i_1] [i_1] [23] [i_11] [i_11] [i_12] [i_14] = ((1 >> (arr_53 [i_1] [i_1] [i_1] [i_1 - 1] [i_14])));
                        arr_56 [i_1] = (((arr_15 [i_4 - 1]) - (arr_32 [5] [i_4 - 2] [i_14] [18])));
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_1 - 1] [i_1] = (arr_58 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [10] [i_1 - 1]);
                        var_40 -= 29;
                    }
                }
                for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                    {
                        arr_65 [18] [i_4] [18] [i_1] [i_17] = 3601649254414997205;
                        var_41 = (max(var_41, var_9));
                        arr_66 [9] [i_4] [i_1] [i_16] [i_17] = (((arr_1 [i_1 - 1]) && (((32767 ? var_7 : 9223372036854775803)))));
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {
                        arr_71 [i_1] [11] [11] [i_16] = 6264419068027799474;
                        arr_72 [i_1] [i_4 - 2] [i_4] [i_4] [i_4] = ((-(arr_36 [i_4 - 2] [i_4] [i_11] [i_1 - 1])));
                    }

                    for (int i_19 = 2; i_19 < 23;i_19 += 1)
                    {
                        var_42 = (arr_67 [i_1 - 1] [i_19 + 1]);
                        arr_75 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] = (((arr_13 [i_19 + 1]) ? (arr_14 [i_1] [i_4 + 1]) : (arr_54 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 2] [i_4])));
                        arr_76 [i_1] = (arr_13 [i_1 - 1]);
                    }
                }
                for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                {
                    arr_79 [i_1] [i_4] [i_1] [i_20] = 26714;
                    var_43 = -228;
                }
                for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
                {
                    var_44 = ((-61 - (-9223372036854775807 - 1)));
                    arr_82 [i_1] [i_1] [i_11] = ((!(arr_18 [i_1] [i_1 - 1])));
                }
                var_45 = ((-(arr_77 [i_1] [i_4 + 1] [i_11] [i_11])));
            }
            /* vectorizable */
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {
                arr_85 [i_4] [i_1] = var_0;
                arr_86 [i_1] [i_4] [i_1] [4] = ((-(arr_38 [i_1 - 1] [i_1] [i_4] [i_22])));
                arr_87 [1] |= (arr_32 [i_1] [i_4 - 1] [i_4 - 1] [i_22 - 1]);
            }
            /* vectorizable */
            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                arr_90 [i_1 - 1] [i_4 - 2] [i_23] [i_1] = (~(arr_39 [1] [i_4 - 2] [i_4] [i_23 - 1]));
                arr_91 [17] [i_4] [17] [i_1] = (1 > 1);
            }
        }
    }
    for (int i_24 = 1; i_24 < 1;i_24 += 1) /* same iter space */
    {
        arr_94 [22] &= ((max(1, (-32767 - 1))));
        arr_95 [i_24] = ((!(arr_57 [11] [i_24] [i_24 - 1] [i_24] [i_24 - 1])));
        arr_96 [i_24] [i_24] = (arr_9 [i_24]);
    }
    var_46 |= var_10;
    var_47 &= max(var_18, var_12);
    #pragma endscop
}
