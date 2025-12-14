/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 -= ((((((4294967294 / 57449) ? var_16 : var_13))) ? var_15 : ((((var_8 + var_17) / (var_5 / var_6))))));
    var_21 = 45536;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((3784 ? ((((((arr_1 [i_0]) ? var_1 : (arr_0 [i_0])))) / ((var_15 / (arr_0 [i_0]))))) : (arr_1 [i_0])));
        var_22 = 65535;
        var_23 = var_10;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_24 -= ((var_0 ? (arr_5 [i_1]) : (((~var_13) / 20000))));
        arr_6 [i_1] = (~var_14);
        arr_7 [i_1] = var_15;

        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_25 = 65535;
            arr_11 [i_1] [3] = (arr_10 [i_1] [i_2 + 1]);
            var_26 = (min(var_26, (((((arr_10 [i_2 + 1] [i_2 + 1]) / (arr_10 [i_2 + 1] [i_2 - 1])))))));
            arr_12 [i_2] [i_2] [i_1] = (~var_5);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_15 [i_1] [i_1] [i_3] [i_1] = (~(arr_1 [i_3]));
                arr_16 [i_3] = ((+(((arr_10 [i_2 - 1] [i_2 - 1]) + (arr_10 [i_2 + 1] [i_2 - 1])))));
                arr_17 [i_3] [i_3] [i_3] [i_1] = (min((arr_4 [i_1]), (arr_14 [i_3] [i_3])));
            }
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_22 [i_4 + 1] = (((((arr_3 [i_4]) ? (min(var_13, 20)) : ((2720061015 ? 4294967288 : 1364870501)))) + ((((arr_0 [i_1]) * var_12)))));

            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_27 -= (((min(65535, 11))) ? (((0 + (arr_3 [i_1])))) : ((var_18 / (arr_1 [i_7]))));
                            arr_32 [i_1] [i_5] [i_5] [5] = (((((var_15 ? (arr_14 [i_5] [i_7]) : (arr_14 [i_5] [i_5])))) ? (arr_21 [i_1]) : (((min((arr_23 [i_1] [i_4] [i_5]), (arr_20 [i_4])))))));
                            arr_33 [i_1] [i_4 + 1] [i_5 + 1] [i_5] [i_7] = (arr_29 [i_5]);
                        }
                    }
                }
                var_28 = (((((~(arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 1])))) ? (((!(arr_31 [i_5] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1])))) : (((arr_19 [i_4 + 1] [i_4 + 1] [i_4 + 1]) / (arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1])))));
            }
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                arr_37 [i_1] [i_4 + 1] = (~var_17);
                arr_38 [i_1] [i_4 - 1] [i_1] [i_4 - 1] = ((((0 ? ((((!(arr_3 [i_1]))))) : ((var_12 / (arr_30 [10] [10]))))) + (arr_19 [6] [i_1] [i_1])));
                var_29 = (max(var_29, 19999));

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_42 [i_1] [i_1] [i_4 - 1] [i_1] [i_1] &= (((min(((var_12 + (arr_31 [4] [i_4] [i_8] [4] [4]))), ((((arr_30 [10] [10]) + 0))))) / ((max(((max(var_4, 177))), (~var_2))))));
                    arr_43 [i_9] = ((var_3 ? (!65533) : (((((var_10 ? (arr_0 [i_1]) : (arr_39 [i_1] [i_4] [i_8])))) + var_7))));
                }
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    arr_46 [i_1] [i_4 + 1] [2] [i_10 - 2] = ((((((!((min((arr_28 [i_1]), 0))))))) + ((((var_17 ? (arr_10 [i_1] [i_10]) : (arr_41 [i_1]))) * -4294967286))));
                    arr_47 [i_1] [i_8 + 2] = (max(((~(~18446744073709551596))), (((!(!var_11))))));
                    arr_48 [i_1] [i_4] [i_1] [i_8] [i_10] [11] = (arr_10 [i_10 - 1] [i_4]);
                }
            }
            arr_49 [i_4 + 1] [i_1] = max(((18661 ? (arr_25 [i_4 - 1] [i_4 + 1]) : (arr_25 [i_4 - 1] [i_4 + 1]))), (((arr_34 [i_4 - 1] [i_4 - 1] [i_4 - 1]) + var_1)));
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
        {
            arr_52 [i_1] [i_11] = (((((arr_27 [i_1] [i_1] [i_1] [i_11] [i_1]) ? (0 / -8330868389745769067) : ((((arr_28 [i_1]) ? 147 : (-127 - 1)))))) / (((((!(arr_18 [i_1]))) ? ((((arr_27 [i_1] [i_1] [i_1] [i_11] [i_11]) ? var_8 : 0))) : (var_3 / var_6))))));
            var_30 = ((~(!4294967275)));
        }
    }
    #pragma endscop
}
