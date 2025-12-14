/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [5] [5] [i_2] = -8915113163492843132;
                                var_13 = (max(var_13, ((min(((-5772669576186312070 ? var_4 : (arr_7 [i_0] [10]))), (-8915113163492843132 && 255))))));
                            }
                        }
                    }
                    var_14 = (max(((min((((arr_0 [i_1]) ? var_11 : 4035770831)), (arr_2 [3] [i_2])))), (min(-7962895761843271875, var_12))));

                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_16 [2] [1] [0] |= ((-(((var_1 * -21766) ? -var_9 : (var_7 / var_6)))));
                        var_15 = (((var_4 ? var_3 : var_9)));
                        arr_17 [i_0] [10] [i_1] [5] [i_2] [1] = (((((~-8915113163492843132) ? 0 : var_4)) - (arr_10 [6] [i_1] [i_1] [i_1] [i_1])));

                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [1] [i_1] [i_2] [i_5] [2] [i_6] [8] &= min(49, 61440);
                            arr_22 [3] [i_2] [i_0] [1] = ((!(arr_5 [4] [i_1] [1])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_2] = ((max(-7962895761843271887, (260 || -7962895761843271875))));
                            arr_26 [10] [5] [i_2] [5] [i_2] [1] = (min(((max(-8915113163492843116, (max(-7962895761843271887, (arr_0 [i_5])))))), (1 ^ 13)));
                        }
                        var_16 = (min(var_8, 8));
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        arr_29 [i_2] [i_1] [i_2] [i_8] = ((7962895761843271886 << (((110 | 144) - 254))));
                        var_17 *= (((((111 ? -8915113163492843089 : (arr_5 [i_0] [3] [4])))) ? var_3 : (-7962895761843271879 && 14580155986529352713)));
                        arr_30 [i_2] [i_1] [5] [i_8] = (arr_12 [i_8] [i_8 + 2] [7] [3] [0] [i_8] [8]);
                    }
                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_2] = (-var_8 * (min((max((arr_7 [i_2] [i_2]), var_7)), ((var_0 ? 3658774256 : -2107695069963613052)))));
                        var_18 = (min((~42826), ((1 ? ((min(var_5, var_11))) : (min(var_7, 4294967288))))));
                        arr_34 [i_2] = (((((max(var_2, var_4)))) ? var_0 : (arr_8 [1] [i_1] [i_2])));
                        var_19 = (((((3658774260 ? (arr_18 [4] [3] [i_2] [i_9 + 2] [i_9 - 2] [1]) : var_0))) || (arr_18 [6] [4] [i_2] [i_9 + 2] [i_9 - 2] [i_9])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            {
                arr_40 [i_11] [1] |= ((var_5 >= (min((2107695069963613030 * 0), (arr_39 [7])))));
                var_20 = (max(var_20, ((((((~(arr_38 [i_10])))) ? -var_10 : -1)))));
            }
        }
    }
    var_21 = ((!(((max(var_9, var_3))))));
    #pragma endscop
}
