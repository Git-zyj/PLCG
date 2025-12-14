/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_2);
    var_16 += (((0 <= var_1) ? (max(var_13, (max(1754454029755252005, 4304007012100011959)))) : (((min((min(var_7, var_11)), (var_4 || var_8)))))));
    var_17 |= (var_9 | -1900016325177763341);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] = (arr_0 [i_2]);
                        arr_11 [i_0] [11] [i_1] [i_3] [1] [1] = ((-6462689884871162755 ? 16692290043954299610 : 0));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_18 = (((((0 ? 13458 : var_3))) ? var_9 : -var_11));
                        arr_14 [i_1] [12] [i_1] [12] [i_1] = (!52077);

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] = -3537;
                            arr_18 [i_1] [i_1] [3] [3] [i_1] = 3536;
                            arr_19 [i_0] [10] [10] [i_2] [i_2] [i_1] [i_1] = (arr_0 [i_1]);
                            arr_20 [i_0] [i_5] [0] [i_4] [0] |= (((arr_7 [i_5]) ? (arr_6 [i_0] [i_0] [i_0] [i_1 - 2]) : (((arr_6 [i_5] [i_1] [i_2] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_4]) : var_8))));
                            var_19 = -3537;
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            arr_23 [4] [4] [i_1] [i_4] [4] = -var_1;
                            arr_24 [i_1] [i_1] [1] [i_4] [4] = -479188291;
                            arr_25 [i_0] [i_1] [i_2] [1] [1] = ((-(arr_7 [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_29 [i_4] [i_1] [9] [9] [9] [i_1] [i_4] = (arr_8 [1] [i_1] [i_4] [i_7]);
                            arr_30 [i_0] [i_1] [i_4] [i_0] = (!18446744073709551615);
                            arr_31 [i_0] [i_1] [i_0] [i_0] = ((3536 ? 46993 : 0));
                            arr_32 [1] [1] [i_1] = 3519771543;
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_20 = (min(var_20, (arr_1 [i_0])));
                            arr_36 [i_0] [i_1] [i_1] [i_0] [i_0] [3] [i_0] = ((2040125751 != (56651 == 0)));
                        }
                        var_21 = ((((((arr_0 [i_2]) * var_1))) ? (arr_21 [i_0]) : (arr_26 [i_4])));
                    }
                    arr_37 [i_0] [i_1] = (arr_6 [i_1] [i_1 + 2] [i_1] [i_1 + 2]);

                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_22 |= ((((max((var_11 + 0), (((arr_1 [i_2]) ? var_7 : (arr_5 [i_1] [7])))))) ? ((~((var_4 ? (arr_28 [i_0] [i_1] [i_0] [i_0] [i_9] [i_0]) : -3537)))) : ((-(arr_8 [i_0] [i_0] [i_2] [1])))));
                        arr_40 [i_9] [i_1] [i_2] [i_2] = arr_33 [i_0] [1] [i_0] [1] [i_2];
                        arr_41 [i_0] |= (-((+(((arr_1 [i_0]) ? 103 : 2102438045173865829)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_44 [5] [5] [i_1] [i_1] = (1118877886 & 1);

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_47 [i_1] [i_2] = ((~(arr_12 [i_1 - 1] [i_1])));
                            var_23 = ((-(arr_42 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10])));
                            arr_48 [i_0] [i_1] [i_2] [i_0] [i_11] [i_11] = (0 * -0);
                            var_24 = (((arr_4 [i_1] [i_1 - 2]) & (arr_4 [i_1] [i_1 - 2])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_53 [11] [11] [i_2] [i_1] [i_1] = (((arr_6 [i_1] [i_1] [12] [12]) ? (((max(var_2, 19403)) >> (min((arr_5 [i_0] [i_0]), (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]))))) : ((((((13523553711787794997 ^ (arr_0 [i_13])))) ? (arr_38 [0] [i_13 - 1] [i_1] [i_12]) : ((~(arr_49 [i_1] [i_0] [i_1] [11] [i_1] [i_1]))))))));
                                arr_54 [i_12] [i_0] [12] [i_12] [i_0] |= (-(max(((((arr_43 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))), ((var_0 ? 18089952361844850767 : var_4)))));
                            }
                        }
                    }
                    arr_55 [9] [i_1] = ((~(~15996)));
                }
            }
        }
        arr_56 [i_0] = 58656;
    }
    #pragma endscop
}
