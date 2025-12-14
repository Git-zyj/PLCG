/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max((arr_4 [i_1 - 1] [9]), (max(8004231110212802041, var_3)))))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1 + 3] [i_2] = (((((arr_6 [i_0]) >= var_9))));
                    var_13 = (min(var_13, ((min(((~(arr_2 [i_1 - 1]))), (!65535))))));
                    var_14 = (arr_1 [i_1]);
                    arr_9 [i_0] [i_1] [i_2] = ((!(((var_7 + (min(11083010510303105804, (arr_7 [i_1]))))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_15 = ((((max(var_11, var_10)))));
                    arr_13 [i_1] [i_0] [i_1] [i_3] = ((~((min(25122, 65522)))));
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_16 = ((var_5 + ((var_7 - (arr_6 [i_5 + 1])))));
                                var_17 = 58942;
                                var_18 = (((arr_1 [i_0]) * (arr_4 [i_0] [i_6])));
                                arr_22 [7] [i_1] [i_4] [i_5] [5] = (((arr_11 [i_6] [i_4 - 2] [i_0]) >> (120 - 118)));
                            }
                            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                var_19 = 63299;
                                var_20 = (((((max((arr_20 [i_0] [i_0] [i_4] [i_5] [i_1]), 10)))) ? (max((arr_17 [i_1] [i_4] [i_4 - 2] [i_1 + 3] [i_0] [i_1]), (max(var_3, (arr_23 [i_0] [i_0] [i_5] [i_7] [i_7]))))) : 17558196791009460031));
                                arr_25 [i_1] [i_1] [i_4] [1] [i_5] [i_1] = (min(127, (!1)));
                                arr_26 [i_0] [0] [i_1] [i_5] [i_7] = (min((((arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 1]) >> (((arr_23 [i_1] [i_1 - 1] [i_5 - 1] [8] [1]) - 4567842422122008847)))), 43670));
                                var_21 = ((!((!(arr_21 [i_0] [i_4 + 1] [i_5 - 1] [2] [8])))));
                            }
                            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                            {
                                var_22 = (min(var_22, (((((((((65525 << (4745232520256405333 - 4745232520256405328)))) ? var_5 : (arr_14 [i_0] [i_4] [i_5 - 1])))) || var_2)))));
                                arr_31 [i_5] [i_1] [i_0] [i_1] [i_8] = (((~(arr_16 [i_1 + 4] [i_1] [i_1] [i_4 + 1]))));
                                var_23 = 28;
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, -32762));
                                arr_34 [i_1] = 19068;
                                var_25 |= (((12243641620691878958 & var_1) ? var_8 : (arr_20 [i_1 - 2] [i_4 - 2] [i_5 + 1] [i_9] [i_9])));
                            }
                            var_26 = max(var_2, 65522);

                            for (int i_10 = 0; i_10 < 11;i_10 += 1)
                            {
                                arr_37 [i_0] [i_1] [3] [7] [i_1] [0] = ((945760924986601741 ? 4 : 18446744073709551615));
                                arr_38 [i_1] [i_1] [i_4] [i_4] [0] [i_5] [6] = ((~(((arr_29 [i_1] [i_1]) & (var_5 & 1609596291)))));
                                var_27 = ((+(((arr_1 [i_4 + 2]) ? (arr_1 [i_4 - 2]) : var_0))));
                                arr_39 [i_0] [i_0] [i_0] [i_1] = ((min(var_5, var_10)));
                            }
                            for (int i_11 = 0; i_11 < 11;i_11 += 1)
                            {
                                var_28 = (min(var_28, (((!(arr_35 [6] [i_1] [i_4] [5] [i_4] [4] [i_11]))))));
                                var_29 += var_3;
                            }
                            var_30 *= ((~(max((arr_23 [i_5] [i_5] [i_5] [i_4 - 2] [10]), 30))));
                            var_31 = 18446744073709551604;
                        }
                    }
                }
            }
        }
    }
    var_32 = ((((min(var_0, var_1))) ? (((((var_6 ? 23233 : var_7))) ? var_4 : (!1))) : ((min((146 || 2498502856), (max(var_5, var_6)))))));

    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_33 *= ((((((min(66, (arr_44 [4])))))) ? (((arr_40 [i_12] [i_12]) ? (~var_11) : ((var_4 >> (65535 - 65534))))) : (~var_11)));
        arr_46 [i_12] [8] = (max((min(-32767, -var_11)), var_6));
    }
    #pragma endscop
}
