/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((var_12 ? ((min(1, 10))) : 57344)), ((((max(var_8, 1809))) - 1808)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = var_5;
        var_18 = ((~((~(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (!1971585046);
        var_20 = 63727;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 *= var_3;
        var_22 = (max(var_22, ((((((((((arr_6 [i_2]) ? (arr_6 [2]) : var_12))) ? (1971585046 + 0) : ((var_1 ? 63726 : 1808))))) ? (63727 == -1971585071) : ((((min(var_8, var_1))) ? ((2378680655225408693 ? 1806 : 201)) : 1809)))))));
        arr_8 [i_2] = (max((min((var_1 % 57), (arr_6 [0]))), (1809 != 1971585046)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = 4946;
        arr_12 [i_3] [i_3] = var_5;
        arr_13 [i_3] = var_0;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_4] = (arr_4 [21]);
            arr_19 [i_4] [i_4] = (min(((((14093 ? (arr_14 [i_4]) : var_7)))), ((~(!1)))));
            arr_20 [i_5] &= min(var_5, 1805);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            arr_23 [i_6] [i_4] [i_4] = (min((((arr_5 [i_4] [i_6]) ? 1809 : (arr_5 [i_4] [i_6]))), ((((arr_5 [i_4] [i_6]) == -1971585071)))));
            var_23 = ((var_15 ? (max((arr_4 [i_4]), 63714)) : (((arr_4 [i_6]) ^ (arr_4 [i_4])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_26 [i_4] [i_4] = (arr_14 [i_4]);
            arr_27 [i_4] = (arr_22 [i_7] [i_4]);
        }
        arr_28 [i_4] [i_4] = (((((~(~11804)))) ? ((max(63721, (arr_16 [1] [i_4] [i_4])))) : ((var_1 ? (((arr_5 [i_4] [12]) ? var_1 : 93)) : var_5))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_33 [i_4] [i_4] [i_4] [i_4] = (arr_30 [i_4]);
                    var_24 &= (((var_11 ? -1971585071 : ((min(1809, 117))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_41 [i_4] [i_8] [6] [i_4] [i_11] [i_9] [i_8] = ((((163 || (arr_25 [3] [i_8]))) && (arr_30 [i_4])));
                                var_25 = 130;
                                var_26 = (((((-((1653562986332788505 >> (var_9 - 37056)))))) ? (((((16793181087376763120 ? -24 : 24966))) ? ((min((arr_14 [i_9]), (arr_32 [i_4] [i_4] [i_10] [14])))) : ((2451042144540833709 ? (arr_34 [i_4] [i_8] [i_8] [i_9] [i_10] [i_11]) : var_15)))) : ((1809 * ((min(176, var_8)))))));
                            }
                        }
                    }
                    arr_42 [i_4] = 11163;
                    var_27 = ((((((arr_7 [i_4] [9]) ^ 252))) ? var_10 : (min(var_11, var_13))));
                }
            }
        }
        arr_43 [i_4] [8] |= -37;
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    {
                        var_28 = ((var_1 ? 10110 : 11163));
                        var_29 = (min(var_29, 11174));
                        arr_57 [0] [i_13] [i_13] [i_13] = ((((((arr_4 [i_13]) ^ (arr_4 [i_12])))) ? (((arr_21 [i_13] [i_13]) ? ((var_9 ? var_3 : var_12)) : (((~(arr_55 [i_12] [8] [i_14] [i_15] [i_13])))))) : (-121 == 1653562986332788504)));
                        arr_58 [i_13] [i_13] [i_13] [1] [1] [1] = ((max(var_8, (arr_15 [i_13] [i_13]))));
                        var_30 = ((var_7 ? (((arr_46 [i_12] [i_12]) ? (-1971585046 | var_2) : (arr_39 [2] [i_14] [i_14] [i_13] [i_12] [i_12] [i_12]))) : ((((!((min(var_12, var_15)))))))));
                    }
                }
            }
        }
        var_31 *= 28;
        var_32 = (min((((((16793181087376763111 ? var_10 : 1653562986332788495)) == var_13))), (max((arr_55 [4] [i_12] [i_12] [i_12] [i_12]), (min(1971585083, 1653562986332788476))))));
        var_33 = 4;
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        var_34 = (min((min((max(-53, var_4)), 1)), (((1971585083 ? var_11 : (((arr_62 [6] [i_16]) ? var_5 : (arr_7 [i_16] [i_16]))))))));
        var_35 = arr_62 [i_16] [i_16];
        var_36 = (max(var_36, (arr_6 [i_16])));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        arr_67 [i_17] = var_15;
        var_37 = (min(var_37, (((!(arr_66 [i_17]))))));
        arr_68 [i_17] &= var_15;
        arr_69 [i_17] &= (((arr_61 [i_17]) ? (arr_63 [i_17]) : (arr_5 [i_17] [i_17])));
    }
    #pragma endscop
}
