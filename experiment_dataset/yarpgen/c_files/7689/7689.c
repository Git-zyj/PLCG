/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(32767 ^ 33285996544)));
    var_19 = (((((127 & (-6107 >= -32753)))) ? var_2 : (min(var_11, var_12))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 *= -1;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (1854754223728487688 ? 0 : (arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = 109;
                                arr_14 [5] [5] [i_2] [9] [i_1] = (-509650520 != 32767);
                                arr_15 [7] [7] [i_2] [i_3] [i_1] = (((((509650520 ? var_7 : (arr_1 [i_4 + 2])))) ? (((arr_6 [i_1]) % (arr_7 [13] [i_1] [i_2] [i_3 + 2] [i_4 - 1]))) : (arr_8 [i_1])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = ((((((arr_0 [i_3 - 1]) - (arr_0 [i_3 + 1])))) <= ((var_12 ? (arr_1 [i_2]) : (arr_1 [i_1 + 1])))));
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4 + 2] [i_4] [8] = 57389;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [i_0] [i_2] [i_1] = (~509650520);
                            var_23 = -32767;
                            var_24 = (min(var_24, (((var_7 ? (((!(arr_8 [i_5])))) : ((744 ? var_9 : var_11)))))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_27 [i_1] [i_2] [i_1] = (~-468690075);
                            var_25 = 0;
                            var_26 *= ((~((-744 ? -2132917046 : 4590591358391468934))));
                        }
                        arr_28 [i_1] = ((arr_2 [i_1 + 1] [i_1 + 1]) - (((arr_2 [i_1 - 1] [i_1 + 1]) / 32767)));
                        arr_29 [i_1] = var_2;
                        arr_30 [i_1] [i_1] [i_2] [i_5] = 45844;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_27 = (min((arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]), ((-32767 ^ (-969410253 % 744)))));
                        arr_33 [i_0] [i_1] [i_1] [i_8] = ((1752408835 ? -106 : (arr_2 [i_1 + 1] [i_1 - 1])));
                        var_28 = 15000;
                        arr_34 [i_1] [i_1] = (((((1 ? (((arr_1 [i_0]) ? (-127 - 1) : 0)) : 57389))) ? -1229517389 : -1960403831));
                        arr_35 [i_1] [i_1] [i_2] [i_0] = ((+(((var_0 % 509650505) ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_9))));
                    }
                    var_29 = (max(var_29, (((~(min(1, (max(var_16, 18446744073709551615)))))))));
                }
            }
        }
    }
    #pragma endscop
}
