/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (((((var_13 ? ((var_7 ? (arr_0 [i_0] [i_0]) : (arr_0 [11] [i_0]))) : (4991905565570753022 || 4991905565570753049)))) ? (arr_0 [i_0] [i_0]) : (((((2147483647 ? 119 : 83)))))));
        var_21 = (((max((arr_0 [i_0] [i_0]), var_3)) << (((((((arr_0 [i_0] [11]) * var_17)) * ((min((arr_1 [i_0]), 25131))))) - 7556947837837210591))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_22 = (arr_5 [i_1 + 1]);
            var_23 = ((~((25131 ? 40416 : 25143))));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_24 *= (((arr_4 [i_3 + 2] [i_3 + 2]) & (arr_4 [i_3] [i_3 + 2])));
            arr_11 [i_1] [i_1] = (arr_3 [i_3 + 2]);
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_23 [i_1 + 2] [i_4 - 2] [i_5] [i_5] [i_5] &= arr_15 [i_7 + 2] [i_6] [4] [i_1];
                            arr_24 [i_4] = ((!(arr_14 [i_1])));
                            var_25 = ((((var_13 & (arr_5 [i_1]))) ^ (arr_2 [i_7] [i_4])));
                        }

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [5] [i_4] = (((arr_12 [i_4 - 2]) ? (arr_7 [i_4 - 2] [i_1 - 2]) : (arr_12 [i_4 - 2])));
                            var_26 = (~var_5);
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_27 = (((arr_1 [i_9]) & (max((arr_14 [i_9 - 2]), -2))));
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_28 *= (((((((((arr_27 [i_9] [i_9] [i_9] [1] [i_11] [i_11] [i_11]) + var_8))) - (((arr_37 [i_10] [i_9 - 1]) + (arr_0 [i_11] [i_12])))))) ? (arr_31 [i_10 + 1] [i_9 + 2]) : 32767));

                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_29 = (((arr_18 [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_10 + 1] [i_13 + 1]) - 0));
                            arr_48 [i_10] [i_11] [i_11] = (min((arr_31 [i_9] [4]), (((((~(arr_35 [6])))) ? (max(var_10, var_1)) : ((((arr_17 [i_11] [i_10] [i_10 + 1]) ? (arr_42 [i_9 - 1] [i_9 - 1] [13] [i_12]) : (arr_13 [i_9] [i_11]))))))));
                            var_30 = (arr_13 [i_10] [i_11]);
                        }
                        var_31 &= (max((((65535 & 1901677894) / (~105))), (((((((arr_9 [i_11] [i_12]) + (arr_14 [i_9 - 1])))) || ((min(var_9, var_8))))))));
                        var_32 -= ((((min(var_2, (arr_43 [i_9 + 1] [i_9] [i_9 - 1] [2])))) ? ((((arr_43 [12] [14] [i_11] [6]) ? (arr_39 [i_10] [i_11] [13]) : ((95 ^ (arr_32 [i_10])))))) : ((((max((arr_8 [i_10 + 1] [i_10 + 1] [i_11]), -4991905565570753019))) ? ((20232 ? 1385181869500407504 : 65535)) : ((((arr_13 [1] [1]) ? var_8 : 125)))))));
                    }
                }
            }
        }
        var_33 = (min((arr_38 [i_9] [10] [10] [i_9]), (((-(arr_8 [i_9 - 1] [i_9] [i_9 - 1]))))));
        arr_49 [12] [i_9] = (arr_38 [4] [4] [4] [i_9]);

        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_34 = (min(var_34, var_13));
            var_35 = var_1;
        }
    }
    for (int i_15 = 2; i_15 < 16;i_15 += 1) /* same iter space */
    {
        var_36 = var_12;
        var_37 *= var_10;
    }
    var_38 = (max(((-9 ? var_9 : var_8)), ((var_4 ? (((min(var_4, var_6)))) : var_7))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_39 = var_9;
                var_40 = var_4;
                arr_60 [i_16] [i_16] [i_16] = 0;
            }
        }
    }
    var_41 = ((((max(var_14, ((var_6 ? var_1 : var_7))))) ? (min(var_7, var_0)) : ((var_1 | (!var_4)))));
    #pragma endscop
}
