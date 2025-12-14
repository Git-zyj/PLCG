/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(-8, 1));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_22 = arr_8 [i_0] [i_2];
                    arr_9 [i_0] [17] [2] [i_0] = ((var_0 ? var_9 : (arr_7 [i_1] [i_1] [i_1] [i_2 - 1])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_23 = 45;
                    var_24 = var_5;
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        var_25 |= ((((~(arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1]))) == ((((arr_15 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 + 1]) > var_8)))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] = ((((6135980070475035542 / (max(var_1, var_14)))) | (var_8 - var_6)));
                            var_26 = (((!var_3) / (((((var_5 ? 288230376151710720 : var_1))) ? ((1456624404379712014 ? var_3 : var_1)) : -45))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_27 = (((((~((var_1 ? (arr_3 [i_0] [i_0]) : -34))))) ? (((((var_12 >> (((((-2147483647 - 1) - -2147483632)) + 22))))) ? ((var_8 ? var_3 : 4)) : (((-2147483647 - 1) ? 2147483647 : (arr_11 [i_0] [i_4] [i_4] [i_5]))))) : (max(((var_3 ? (arr_20 [i_0] [i_0]) : var_19)), ((-90 ? var_13 : var_15))))));
                            var_28 = 21;
                            var_29 = (var_9 | var_12);
                            var_30 = var_14;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_31 = (((((arr_24 [21] [i_0] [i_4] [i_0] [i_0]) ? 48 : var_5))) ? ((var_18 ? var_7 : (arr_24 [i_0] [i_1] [i_4] [i_0] [i_8]))) : (var_3 != var_16));
                            var_32 = (var_16 < -108);
                            var_33 |= var_11;
                            var_34 = (min(var_34, ((var_6 ? (var_10 != var_8) : (((arr_6 [i_8] [i_1]) >> (var_14 - 6118158124651926563)))))));
                        }
                        var_35 = (max(var_35, ((((((var_2 ? (((-2147483647 - 1) ? var_7 : var_10)) : 3407891055946201183))) ? (-1444875483 != 17612022536613406314) : ((-var_14 ? (arr_26 [i_4] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [16] [i_5 + 1]) : (var_2 > 3407891055946201183))))))));
                        var_36 &= (arr_0 [i_0]);
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_37 *= 834721537096145302;
                        var_38 = ((3407891055946201183 ? 15 : (arr_1 [i_0])));
                        var_39 = (var_4 + (arr_7 [i_9] [i_4] [i_1] [i_0]));
                        arr_32 [i_0] [i_4] [i_0] [i_0] = ((+((((arr_3 [i_4] [i_0]) == -2147483635)))));
                        arr_33 [i_0] [i_1] [i_1] [i_1] = ((((((var_7 ? (arr_3 [i_1] [i_0]) : 15038853017763350432))) ? var_1 : (45 | 3407891055946201156))));
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        var_40 = ((((((arr_10 [i_4] [i_0] [i_10 + 1] [i_10 + 2]) != var_0))) | 9));
                        var_41 = (((arr_24 [i_0] [i_1] [14] [i_10 + 2] [i_10 + 2]) ? ((22 ? var_9 : (arr_11 [i_0] [i_1] [10] [i_10 + 2]))) : ((var_17 ? 162 : var_4))));
                        var_42 = ((((var_9 ? (~var_10) : ((102 ? var_17 : var_4)))) >= -var_7));
                    }
                }
            }
        }
    }
    var_43 = ((-86 ? (((-23 + 2147483647) >> (45 - 16))) : var_19));
    var_44 = (((((17612022536613406308 ? -1893717903 : var_14))) < (((var_2 ? 92 : var_10)))));
    #pragma endscop
}
