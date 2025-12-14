/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_3, (((var_9 ? var_1 : var_5)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 &= (min(2147483647, -38));
        var_14 = (min(((32767 ? -8867208600637069985 : 2234253518635318148)), ((((arr_1 [i_0]) ? 36 : 19196)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_9 [6] [i_2 - 2] [i_1] = (((arr_7 [i_1] [i_2]) ? ((~(arr_7 [i_1] [i_2 - 3]))) : (arr_6 [i_2])));
            arr_10 [i_1] [i_2 + 2] [i_2] = ((-((65535 ? 36 : 1))));
            arr_11 [i_1] = (var_6 ? -123 : 9895052394429669539);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_15 = var_9;

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_16 = (((arr_5 [i_1]) ? ((var_4 ? var_9 : (arr_15 [9] [i_3] [i_4]))) : (~var_7)));
                var_17 = (!18446744073709551615);

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_18 = ((var_4 ? (arr_3 [i_1] [i_1]) : ((-(arr_4 [i_4])))));
                    var_19 = (max(var_19, ((((arr_8 [i_4] [0]) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4] [16]))))));
                }

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_21 [i_1] = (((((var_7 ? var_10 : var_10))) ? -40 : var_8));
                    var_20 = var_8;
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_21 = ((!((((arr_14 [i_1] [i_3] [i_1]) ? (arr_23 [i_3]) : var_4)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_22 += -var_0;
                            var_23 = -var_3;
                            arr_31 [i_7] [i_1] = var_5;
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    arr_35 [i_1] [i_7] [8] [i_1] = ((~(arr_0 [i_7])));
                    var_24 = ((var_3 ? (!var_1) : ((-(arr_13 [i_1] [1])))));
                    var_25 = (((arr_4 [i_1]) ? (((~(arr_3 [i_1] [i_7])))) : var_7));
                }
                var_26 = ((~(~var_8)));
                var_27 = (((((2147483647 ? -36 : 36))) ? var_8 : (arr_33 [14] [i_1] [14] [i_1])));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_38 [i_1] [i_1] [i_1] [i_1] = var_2;

                for (int i_12 = 2; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_28 = var_1;

                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        var_29 = ((!((((arr_33 [i_1] [i_1] [0] [15]) ? (arr_3 [i_1] [i_1]) : var_10)))));
                        var_30 = (arr_0 [i_1]);
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_31 = (((~(arr_33 [i_14] [i_1] [i_1] [16]))));
                        var_32 = (!var_6);
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_33 = var_1;
                        var_34 = (((((var_2 ? var_11 : var_4))) ? (((arr_28 [i_1] [i_1] [i_11] [i_12] [i_11] [i_15]) ? (arr_7 [i_1] [i_12]) : var_0)) : ((((!(arr_25 [i_1])))))));
                        var_35 = ((((!(arr_2 [i_1] [i_3]))) ? (((arr_41 [i_3] [i_12] [i_11] [i_3] [4] [i_1]) ? var_9 : var_7)) : (arr_33 [i_1] [i_1] [1] [i_15])));
                        var_36 = (min(var_36, (arr_44 [i_3])));
                    }
                    var_37 = (min(var_37, (((!(((var_7 ? var_1 : (arr_12 [12] [12])))))))));
                }
                for (int i_16 = 2; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    var_38 = ((var_2 ? ((562991446893003323 ? 185 : 65528)) : 1));

                    for (int i_17 = 1; i_17 < 17;i_17 += 1) /* same iter space */
                    {
                        var_39 = (((97 ? (arr_50 [i_1] [0] [i_11] [i_3] [i_1] [i_1]) : 14)));
                        var_40 -= var_11;
                        arr_54 [i_1] = -121;
                        var_41 = (~var_9);
                    }
                    for (int i_18 = 1; i_18 < 17;i_18 += 1) /* same iter space */
                    {
                        arr_58 [i_1] [i_1] [11] [i_16 - 1] [i_1] = var_3;
                        var_42 = (((15658447791266328451 ? 37 : 1)));
                        arr_59 [i_1] [i_1] [i_1] [0] [i_18] [i_1] [i_16 + 1] = ((!(((var_1 ? var_9 : var_2)))));
                    }
                    var_43 += ((((((arr_18 [12]) ? var_1 : var_3))) ? (((arr_46 [i_1] [i_1] [i_3] [i_11] [12] [12]) ? (arr_56 [i_16] [i_16 - 1] [i_16 + 1] [16] [i_11] [i_1] [i_1]) : (arr_1 [i_16]))) : var_2));
                }
                for (int i_19 = 2; i_19 < 16;i_19 += 1)
                {
                    arr_63 [i_1] = -var_8;
                    var_44 += ((((((arr_6 [8]) ? var_3 : (arr_7 [i_19] [i_19])))) ? ((11 ? 27125 : 7898420175967893500)) : (!var_11)));
                }
                var_45 += ((((((arr_16 [i_1]) ? (arr_44 [3]) : var_4))) ? (arr_17 [i_1] [i_3] [i_3] [i_1] [i_11]) : (((arr_49 [i_1] [10]) ? var_3 : var_6))));
            }
        }
        var_46 += min(10548323897741658115, 3026605976);
    }
    var_47 = (min((((var_10 ? var_10 : var_8))), (min(9223372036854775807, 38412))));
    #pragma endscop
}
