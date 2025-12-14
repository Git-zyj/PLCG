/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_16 *= (((((~(arr_4 [i_0])))) || ((max(766444898, (arr_4 [i_4]))))));
                                var_17 = (((1 ? (arr_2 [i_1]) : (arr_5 [i_0] [i_2] [i_4]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_18 &= ((32757 ? var_7 : 8));
                                var_19 = 2300055671;
                            }
                            arr_18 [13] [i_3] [i_0] [i_0] [i_0] [i_0] = 1119024942;
                            var_20 = (~-9223372036854775803);
                            var_21 *= (((arr_8 [i_3] [i_3]) >> (((max((arr_5 [i_1] [i_2] [i_3]), 4294967289)) - 4294967266))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_6] [i_7] [i_0] = -52;
                                var_22 &= var_13;
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_11 [i_0] [i_1] [i_7] [i_0]), (((arr_19 [i_0] [i_0] [i_0]) ^ var_6))));
                            }
                        }
                    }
                    arr_30 [i_0] = var_2;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 = ((min(862829795, (arr_21 [16]))));
                        var_24 = ((-110 ? (~59) : (max(var_4, (arr_33 [i_0] [i_9] [i_6] [i_6] [1])))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_38 [i_10] [8] [8] [i_0] |= (((((arr_34 [13] [1] [i_6] [i_0] [i_0] [i_0]) || 1)) ? (((var_8 || var_12) ? 114 : ((var_2 ? 249 : (arr_1 [1]))))) : (arr_27 [i_10] [i_1] [i_1] [i_0])));
                            var_25 = var_0;
                        }
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_26 = (min(var_26, ((min(-32765, 615)))));
                        arr_42 [i_0] [5] [i_0] [i_1] [i_0] [i_0] = (((((var_0 ^ (arr_8 [i_1] [i_0])))) || (((~(!203))))));
                    }
                    var_27 = ((((((arr_13 [1] [i_0] [1] [i_0] [1]) ? (arr_13 [i_6] [i_6] [i_6] [i_0] [i_6]) : var_8))) || -1));
                    var_28 = (((((-(arr_2 [i_1])))) ? (((arr_33 [i_0] [i_0] [16] [1] [i_6]) ? var_12 : -7365343386523925114)) : ((min(-var_11, -var_9)))));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_52 [i_13] [i_1] [4] [6] [6] [i_1] &= 1;
                                arr_53 [3] [3] [i_0] [i_13] [i_13] = (max((!8), (arr_50 [i_0] [i_13])));
                            }
                        }
                    }
                    arr_54 [i_0] [i_1] = (((arr_43 [i_0] [i_0] [i_12]) ? ((max(var_11, var_2))) : ((-(arr_0 [i_0])))));
                }
                arr_55 [i_0] [i_0] [i_0] = (~var_3);
                var_29 = (min(var_29, (((+((max((arr_2 [i_1]), 1))))))));
                arr_56 [i_0] [i_1] [i_0] = (max((max(-6626082381431939728, 1)), ((((arr_36 [i_0] [i_1]) || (arr_43 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
