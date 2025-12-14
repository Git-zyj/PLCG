/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_18 = (((1 ? (((var_15 ? 1 : var_8))) : ((56220 ? (arr_1 [i_0]) : 0)))));
        var_19 = var_3;

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 &= (-117 <= 126);
                        var_21 ^= (((arr_3 [i_0] [i_0]) ? var_3 : ((-(!var_11)))));
                        var_22 = ((((max(1, 1895398298))) ? ((min(328820765, 127))) : (54 > 1)));
                        var_23 ^= ((0 > ((((arr_6 [i_1] [i_1] [i_1] [i_1 + 1]) != var_1)))));
                        arr_10 [i_0] [i_0] [i_3] [5] = (((min((arr_2 [i_0 + 2] [i_1 - 2]), var_13)) % 98));
                    }
                }
            }
            var_24 &= ((((-6811950855788940872 ? ((max(var_17, -4))) : (max(var_3, var_9)))) << ((((((-((16 ? var_10 : (arr_1 [3]))))) + 109)) - 49))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_25 = (arr_4 [i_4]);
            var_26 = (0 ? (arr_8 [0] [i_4] [i_0 - 3] [i_4]) : var_1);
        }
    }
    var_27 = -var_17;
    var_28 = -606495999;
    var_29 ^= var_0;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_17 [i_5] = (((((-(arr_14 [i_5])))) ? (((arr_16 [i_5]) ? -24231 : (arr_15 [i_5] [i_5]))) : var_2));
        arr_18 [i_5] = (max(((!((max(var_12, var_14))))), var_2));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_30 &= ((((min(var_14, var_15))) ? var_14 : (min((arr_14 [12]), (arr_14 [i_5])))));

                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_31 = (min((((max(1, 0)) % ((((arr_27 [i_5] [i_6] [i_5] [i_5] [i_5]) || 5))))), (arr_25 [5] [5] [i_8])));
                        var_32 = (min(var_32, var_12));
                    }
                    var_33 = ((arr_21 [i_5] [i_5] [i_5] [9]) || ((((126 | var_7) ? (max((arr_20 [i_6]), -5)) : (!-5267037558263683828)))));
                    var_34 ^= (max((((125 % (arr_25 [i_5] [i_5] [i_5])))), (((arr_15 [i_5] [1]) ? (max(var_5, (arr_22 [i_6] [i_6] [i_5]))) : var_8))));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_35 = (arr_20 [i_6]);

                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            var_36 *= (max(var_11, (((~(arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 3]))))));
                            var_37 = (max(var_37, ((((arr_27 [i_10 - 2] [i_9] [i_7] [i_9] [i_5]) ? var_14 : (((268435440 + (((var_14 <= (arr_19 [i_5] [i_5] [i_5]))))))))))));
                            var_38 = (((((arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10 + 2]) ? (arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10]) : (arr_32 [i_10 + 2] [i_10] [i_6] [i_10 + 4] [i_10])))) ? ((max((arr_31 [i_10 + 4] [i_6] [i_10 + 1] [i_10 + 1] [i_10 + 3] [i_10 - 2]), (arr_27 [i_10 + 1] [i_6] [i_10 - 1] [i_10 - 1] [i_10 + 3])))) : (arr_32 [i_10] [i_10] [i_6] [i_10 + 1] [i_10]));
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_39 = (1 % var_5);
                            var_40 *= (((arr_32 [i_11 - 1] [i_11 - 1] [i_9] [i_11 - 1] [12]) | (arr_32 [2] [i_11 - 1] [i_5] [i_11 - 1] [i_11 - 1])));
                            arr_35 [i_5] [12] [i_6] [i_6] [i_6] [i_11] [i_6] = (arr_31 [i_5] [i_6] [7] [i_6] [i_9] [7]);
                            var_41 = var_8;
                        }
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            var_42 = ((((max((-9223372036854775807 - 1), 1))) ? (arr_14 [i_12 + 2]) : (((~(arr_14 [i_12 + 1]))))));
                            var_43 = (max(var_43, (((!(!-5))))));
                            var_44 += 99;
                        }
                        var_45 = (min((var_17 ^ 1403477389801255694), ((max(-14239, 1108433820)))));
                    }
                }
            }
        }
        var_46 = var_6;
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_41 [i_13] = (((arr_40 [i_13]) ? (max((arr_39 [i_13]), -var_2)) : (max((arr_39 [i_13]), (arr_40 [i_13])))));
        var_47 = (max(var_47, var_2));
        var_48 = (min(var_48, 118));
    }
    #pragma endscop
}
