/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_4, (~-24787)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = 1;
                var_20 = (max(var_20, ((((~1) == (arr_4 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2] [i_0] = (((min(var_4, var_15))));

                            for (int i_4 = 2; i_4 < 19;i_4 += 1)
                            {
                                var_21 = ((~(((-15359 < (min((arr_5 [i_0] [i_1] [i_2]), (arr_8 [i_0] [i_2] [i_2]))))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = (~var_11);
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_22 = (min(var_15, (((arr_8 [i_2 + 1] [i_2 + 1] [i_3]) & var_3))));
                                var_23 = (max(10, (max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 1])))));
                                arr_15 [4] [i_2] [i_2] [4] = (arr_8 [i_0] [i_2] [i_3]);
                            }
                            var_24 = (min(var_24, 1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_25 += ((var_8 && (arr_2 [i_6 + 2] [i_1])));

                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_26 = var_3;
                            arr_24 [i_6] [17] [i_1] [i_6] [3] [i_8] = arr_10 [i_0] [i_1] [i_6] [i_7] [13];
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_28 [i_0] [i_0] [17] [i_6] [i_0] [i_0] = (((~-938633588) ? ((~(arr_5 [i_0] [i_0] [i_6]))) : ((var_6 ? 1 : 1))));
                            arr_29 [i_6] [i_7] = ((~((var_7 ? 15948217455584931879 : (arr_17 [i_0])))));
                            arr_30 [i_0] [4] [i_0] [i_9] &= (arr_16 [i_7]);
                            var_27 = (((((var_15 ? var_8 : var_4))) ? (((arr_3 [i_0]) / (arr_16 [i_6]))) : (arr_11 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [13] [i_6 + 1] [19])));
                            var_28 = (~var_2);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_29 = ((((((arr_5 [i_0] [i_0] [i_6]) % var_1))) ? (arr_13 [i_6 + 1] [i_6] [i_10] [i_10]) : ((var_9 ? (arr_21 [i_6]) : 87))));
                            var_30 = ((((var_0 || (arr_8 [i_6] [i_6] [i_6]))) ? (arr_32 [i_6] [i_6 + 1] [12] [i_6 + 1] [i_6]) : 249));
                            var_31 = (305301044300726259 >> (4155203934 - 4155203887));
                            arr_34 [i_0] [i_0] [i_0] [i_0] [14] [i_6] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && (((~(arr_16 [i_6]))))));
                            arr_35 [i_0] [i_1] [i_10] [i_7] [i_6] = 11123719016559142597;
                        }
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_32 = (min(var_32, ((((arr_6 [i_0] [i_1] [i_11]) + (arr_8 [i_6 - 1] [i_6 - 1] [i_6]))))));
                        var_33 = ((~(arr_10 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1])));
                    }
                    var_34 = (min(var_34, (arr_16 [i_1])));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    var_35 = (((((arr_26 [i_0] [i_0] [i_0] [i_0]) == (arr_20 [i_0] [i_1] [i_12]))) ? ((-122 | (arr_37 [i_0] [i_0]))) : 86));
                    arr_40 [i_0] [i_1] [i_12] [i_12] = (((arr_0 [i_12 - 1]) | (arr_16 [i_1])));
                }

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_36 += (((arr_16 [i_1]) | (arr_16 [i_1])));
                    var_37 = (min(var_37, (((!(arr_13 [i_0] [i_1] [i_1] [i_13]))))));
                    var_38 = (min(var_38, ((max((((arr_11 [i_0] [i_0] [16] [i_0] [i_1] [i_1] [i_13]) / (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [1]))), (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_13] [i_13]) / (arr_11 [i_0] [5] [i_0] [15] [i_1] [i_1] [i_13]))))))));
                    var_39 = (min(var_39, ((((((((arr_14 [i_0] [i_1] [i_13]) | var_2)) << (((arr_25 [i_1] [i_13]) - 40239)))) >= (~15359))))));
                }
            }
        }
    }
    #pragma endscop
}
