/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_17 = (min(var_17, var_0));
                            arr_15 [i_3] = (arr_3 [i_0]);
                            var_18 = (max(var_18, ((((arr_6 [i_4] [i_1] [i_0]) ? 38 : var_11)))));
                        }
                        arr_16 [i_3] [i_3] [i_2] [i_3] [i_3] = (((arr_4 [i_0] [i_3]) && (arr_14 [12] [i_1] [i_1] [i_1] [11] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, ((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) || var_11)))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_23 [0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_1] = (8091695 + var_13);
                            arr_24 [i_5] [i_1] [i_5] [1] [i_2] = ((-471637256731471457 ? -12406 : 3));
                            arr_25 [i_1] [i_5] [i_1] [i_5] [i_1] [i_1] [13] = (((arr_21 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0]) && 55990));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_5] = var_11;
                            arr_30 [14] [i_1] [i_5] [9] [i_5] [i_7] = 0;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_20 += (((arr_13 [i_5] [i_1] [i_2] [i_2] [i_8]) != (65535 < var_14)));
                            var_21 += (var_5 >= 8091695);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_37 [i_9] [i_1] [i_2] [i_0] [i_9] [i_5] [i_5] = (arr_10 [i_9] [i_5] [i_2] [3] [i_0]);
                            var_22 = (max(var_22, (((65523 ? -1042 : 28324)))));
                            var_23 = 6375787745240496877;
                            arr_38 [i_5] [i_5] [i_2] [i_5] = var_5;
                        }
                        var_24 = -1446829066;
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_41 [i_0] = (min((max(((82 ? (arr_9 [i_1] [i_1]) : 65519)), ((min(28324, var_12))))), (((arr_9 [i_1] [i_1]) * (arr_9 [i_0] [i_2])))));
                        var_25 ^= ((~(((arr_19 [i_0] [10] [i_1] [10] [i_10]) ? 65535 : var_13))));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_1] [i_1] [i_2] [i_11] = (min((arr_8 [i_0] [i_1] [10] [i_1] [i_1]), (min((arr_10 [i_0] [i_0] [i_2] [i_0] [i_0]), (min(37212, (arr_39 [i_11] [i_0] [i_2] [i_0] [i_0] [i_0])))))));
                        arr_45 [i_0] [i_0] [i_2] [i_1] [i_2] [i_1] = var_13;
                    }
                    arr_46 [i_1] [i_2] [16] = ((max((max((arr_27 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] [i_1]), var_5)), (~28327))));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_26 = (max(var_26, (((((max((arr_14 [i_0] [2] [2] [i_0] [i_0] [i_0]), (((0 ? -10220 : 51579)))))) ? (((arr_27 [i_0] [i_0] [i_1] [14] [i_2] [i_12] [i_13]) ? -1 : 3645927762171277378)) : (((min(1, 28324)))))))));
                            arr_52 [i_0] [i_0] [i_1] [i_0] [i_12] [i_13] = (min((arr_28 [i_0] [i_13]), 8264));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_27 += -1867308251;
                            var_28 = (-37231 ? (var_14 == 65535) : ((3960243739 ? (arr_56 [i_0] [13] [i_0] [i_12] [i_0]) : -32754)));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            arr_59 [i_0] [i_2] [i_0] [i_2] [i_0] [i_1] = 1501887043;
                            arr_60 [i_0] = 8091695;
                            var_29 &= var_8;
                        }

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            arr_63 [i_0] [i_1] [3] = (((-(arr_1 [i_1] [i_2]))));
                            arr_64 [i_0] = (arr_57 [i_2] [i_1] [i_2]);
                        }
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        arr_67 [i_0] [i_0] [i_0] [i_17] [i_2] = (arr_19 [i_0] [i_0] [1] [i_2] [i_17]);
                        var_30 = (max(var_30, (max(-5716, ((min(-82, 100)))))));
                    }
                }
            }
        }
    }
    var_31 = ((+(((!-790171161) & ((0 ? 18446744073709551614 : var_11))))));
    var_32 = var_1;
    #pragma endscop
}
