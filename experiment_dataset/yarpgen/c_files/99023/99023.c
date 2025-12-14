/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 *= var_16;
        var_21 ^= (((((((min(18312, -113))) ? (((arr_1 [i_0]) + (arr_0 [i_0] [i_0]))) : 65))) ? ((((((3430 ? var_17 : var_1))) && 85))) : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((!(((var_15 ? ((max((arr_3 [4] [i_1] [4]), (arr_1 [i_0])))) : ((var_18 ? 61465 : var_13)))))));
            var_22 = (((max(30297, var_4))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_23 = (((arr_6 [i_0] [i_0]) ? ((((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_7 [i_0] [i_1] [i_2 + 2] [i_3])))) && ((var_2 != (arr_0 [i_2 + 2] [i_2 + 2]))))))) : (min(1626846445, 1))));
                        var_24 = (((((var_19 ? (((var_3 ? 54179 : 835657046))) : ((32767 ? 3300886664 : 8509353762358127833))))) ? var_5 : var_4));
                        arr_11 [i_0] [i_3] = (((var_0 + (var_2 - -36))));
                    }
                }
            }
            arr_12 [i_0] [i_0] = (((54171 ? 1 : 5449)) != (((arr_10 [i_1] [i_1]) ? (arr_2 [1] [i_1]) : var_2)));
            arr_13 [i_0] [i_1] = ((61457 ? 21014 : -112));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] = (arr_0 [6] [i_4]);
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_25 ^= (arr_19 [i_0] [i_0] [i_7]);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (18446744073709551609 * -43);
                            arr_27 [i_0] [i_4] [i_0] [1] [i_7] = ((18312 ? ((min(var_0, (arr_2 [i_0] [i_0])))) : ((((min(var_11, (-127 - 1)))) ? (((max((arr_2 [i_4] [i_6]), var_10)))) : 4610560118520545280))));
                            var_26 = var_5;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_27 += (((((min(var_18, var_6))) ? var_2 : ((0 ? (arr_3 [i_8] [i_8] [i_0]) : var_3)))));
            arr_31 [i_0] [i_0] [i_8] = ((var_0 ? ((((((arr_30 [i_8]) ? var_9 : -8))) ? (arr_15 [i_0]) : ((var_5 ? var_5 : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (43 && 24)));
        }
        arr_32 [i_0] [i_0] = (max((arr_29 [i_0] [i_0] [i_0]), ((536870912 ? 4611686018427387648 : (((27 ? (arr_7 [i_0] [i_0] [9] [i_0]) : (arr_14 [i_0] [i_0]))))))));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_28 *= -43;
        arr_35 [i_9] |= ((((var_3 ? (arr_33 [i_9] [i_9]) : 683))));
        arr_36 [i_9] = (arr_33 [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_29 = ((arr_39 [i_10]) + (arr_37 [i_10]));
        arr_41 [i_10] = (((((arr_38 [i_10]) * ((var_10 ? var_9 : (arr_39 [i_10]))))) | (arr_40 [i_10] [i_10])));
        var_30 = ((8 ? (arr_38 [i_10]) : ((-9 ? ((-32 ? var_17 : var_19)) : var_2))));

        /* vectorizable */
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            var_31 = (((arr_33 [i_10] [i_10]) ? 105 : (arr_42 [i_11 + 1])));
            arr_45 [i_10] [i_11 - 1] [i_11 - 1] = (arr_37 [i_10]);
            var_32 *= (arr_38 [i_11]);
            var_33 = ((65535 ? (!var_16) : (47 + var_2)));
            var_34 = var_2;
        }
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            var_35 = ((((!(arr_39 [6]))) || (arr_44 [i_12])));
            arr_49 [i_12] [i_10] = var_5;
        }
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        arr_52 [i_13] = ((((!(((4610560118520545280 ? -8 : 1))))) ? (((arr_39 [i_13]) ? (arr_48 [i_13] [i_13] [i_13]) : ((104 ? var_15 : -10)))) : ((((var_19 != -96) != (arr_42 [i_13]))))));
        arr_53 [i_13] = var_3;
        var_36 = var_13;

        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            var_37 = 2797;
            var_38 *= ((var_5 + (var_18 + 76)));
            var_39 = (arr_50 [i_13]);
            var_40 = ((((((var_15 - var_19) ? var_19 : ((var_15 ? 1119292538 : var_19))))) <= ((1 ? 1 : 19463166))));
        }
    }
    var_41 = (((((var_6 % var_13) ? var_5 : var_2)) * (var_18 << var_15)));
    var_42 = var_10;
    #pragma endscop
}
