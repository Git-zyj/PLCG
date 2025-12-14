/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 463524691));
    var_20 = var_14;
    var_21 = var_13;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_22 = (arr_1 [i_0] [i_0 + 1]);
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 = (max((((var_10 % var_16) ? 18446744073709551613 : var_13)), ((((((arr_3 [i_1]) ? var_14 : var_2))) ? (min(0, var_8)) : var_8))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_25 = (~var_5);
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_26 = ((((~(arr_12 [i_1] [i_2] [i_3 + 3] [i_2])))) ? (((arr_7 [i_3] [i_3]) ? var_0 : (arr_12 [i_1] [i_2] [i_2] [i_4 + 2]))) : (arr_13 [i_4 - 2] [i_4 - 2] [i_3] [i_4 - 2] [i_3]));
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_1] = (-(arr_14 [i_3] [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2] [i_3]));
                            arr_16 [i_3] [i_5] [i_4] [i_3 - 1] [i_3] [i_2] [i_3] = var_12;
                            var_27 = ((~(((arr_8 [i_2] [i_2] [i_5]) ? var_3 : var_14))));
                        }
                    }
                }
            }
            arr_17 [i_2] = ((!(((var_11 ? var_0 : var_8)))));
            arr_18 [i_2] = 11371937720640615750;
            var_28 = (arr_11 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]);
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_29 += ((-(min((arr_7 [i_6] [i_1]), var_16))));
            arr_21 [i_1] [i_1] [i_1] = var_13;
            var_30 += ((-(((arr_4 [i_6] [i_1]) ? var_18 : var_9))));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_31 = (max(var_31, (((arr_7 [i_1] [i_6]) ? (arr_8 [i_1] [i_6] [i_7]) : ((~(~11371937720640615764)))))));
                var_32 = ((+(((((var_7 ? (arr_2 [i_7]) : (arr_20 [i_7] [i_6] [i_1])))) ? (arr_22 [i_1]) : var_1))));

                /* vectorizable */
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_33 = (var_11 ? (arr_4 [i_1] [i_1]) : ((var_17 ? var_13 : 17602412961207669018)));
                    var_34 &= (arr_23 [i_8 + 1] [i_7] [i_1]);
                    var_35 = (min(var_35, ((var_4 ? var_0 : ((7074806353068935866 ? 7074806353068935884 : -988519550))))));
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_36 = ((((((arr_14 [i_9] [i_6] [i_9] [i_9] [i_9] [i_6]) ? var_17 : var_2))) ? var_15 : (arr_24 [i_9])));
                arr_28 [i_1] = (((arr_26 [i_1]) ^ var_13));
                arr_29 [i_9] [i_9] [i_6] [i_1] = (324490184852376758 ? var_1 : 7074806353068935884);
                var_37 = (((arr_4 [i_1] [i_9]) ? var_17 : var_11));
            }
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                var_38 = (max(var_38, (~var_16)));
                arr_33 [i_10] [i_6] = var_4;
                var_39 = ((-((7074806353068935884 ? (arr_25 [i_10 - 1] [i_10 + 1]) : var_3))));
            }
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                arr_36 [i_11] = (((max((max(var_6, var_4)), (~var_17)))) ? ((var_8 ? var_5 : ((var_14 ? var_1 : (arr_13 [i_1] [i_6] [i_6] [i_11] [i_11]))))) : var_7);

                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    arr_39 [i_1] [i_6] = max((((((min(var_0, var_1))) && ((min(var_6, var_2)))))), ((var_7 ? var_16 : (arr_1 [i_1] [i_6]))));
                    var_40 |= (min((min((var_11 % var_1), (!var_10))), (max((max(var_10, var_9)), (min(11371937720640615753, 7074806353068935884))))));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    arr_42 [i_1] [i_6] [i_11 - 1] [i_6] [i_13] = -8826542367946453566;
                    arr_43 [i_13] [i_11] [i_6] = (min(-var_5, (((arr_30 [i_13] [i_11 - 1] [i_11 - 1]) ? (arr_40 [i_6] [i_6] [i_11] [i_11 - 1]) : var_7))));
                }
                var_41 = max(((((var_8 ? 7680 : var_13)))), (max((max((arr_37 [i_1] [i_1] [i_11 + 1] [i_1]), var_2)), 7074806353068935871)));
            }
        }
        var_42 = (max(var_42, (((((max((min(var_5, (arr_2 [i_1]))), var_9))) ? (max(((min(63, var_17))), (~var_5))) : ((((9528088343953692151 ? var_14 : var_15)))))))));
        var_43 &= (((arr_22 [i_1]) ? ((var_12 ? var_15 : var_14)) : ((var_6 >> (var_6 - 9454)))));
    }
    #pragma endscop
}
