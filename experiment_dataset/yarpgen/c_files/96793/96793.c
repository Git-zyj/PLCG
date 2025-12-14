/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = (max(var_14, var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 ^= ((-(((((var_3 ? (arr_12 [i_4 + 2] [i_1] [i_2] [13] [i_4] [i_0]) : 6555))) ? -6555 : (((arr_3 [i_2] [13]) ? var_5 : var_13))))));
                                arr_13 [i_0] [i_1] [1] [7] [i_4] [i_4 + 1] = -29;
                                var_16 ^= (-6555 ^ 647016199655658085);
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4 + 1] |= (!(0 * 60641));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] = var_7;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_17 += ((((((11546153064309178867 ? 0 : 28)) ? (arr_16 [i_0] [i_1] [i_5]) : (arr_12 [i_5] [i_1] [i_1] [i_0] [i_0] [1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_18 -= 25347;
                                var_19 += ((0 ? (~var_13) : var_12));
                                var_20 = (min((arr_10 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2]), var_2));
                                var_21 = arr_6 [i_0] [i_1];
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] [i_5] &= 6555;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (((var_12 ? (1 | 0) : (var_3 ^ var_8))))));
                    var_23 += ((768 > ((2147483647 ? var_13 : (arr_0 [i_0] [i_0])))));
                    var_24 = (min(var_24, (((-598952098 == 19456) > -46))));

                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_25 = var_11;
                        var_26 ^= arr_12 [i_9 - 1] [i_9 - 1] [7] [i_9 + 2] [i_9 + 1] [i_9 + 2];
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_27 = (32767 ? -6555 : ((24 ? 25749 : 72057594035830784)));
                        arr_33 [i_0] [i_1] [i_0] [i_8] [i_8] [i_10] = (arr_31 [i_8] [i_1]);
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_28 = (arr_30 [i_0] [i_1] [i_11] [i_0] [2]);
                    var_29 = ((!28) ? 1384554645083647940 : (((var_2 ? (arr_6 [i_1] [1]) : var_2))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                arr_42 [i_13] [i_11] [i_12] [i_13] = (((((var_10 ? var_9 : var_0))) ^ 11434235185624108191));
                                var_30 = (max(var_30, var_12));
                            }
                        }
                    }
                }
                arr_43 [i_0] = (min((((~(var_9 | var_9)))), (((28564 ? var_7 : 3481651208661343648)))));
                var_31 = ((!((((((arr_19 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) ? var_6 : (arr_30 [8] [8] [10] [1] [i_1])))) && ((max(-29, -5709594231437749034)))))));
            }
        }
    }
    var_32 &= (((((~((var_10 ? 707411300 : var_10))))) ? -598952098 : -var_11));
    var_33 = (((!1) != var_5));
    var_34 = var_2;
    var_35 *= var_1;
    #pragma endscop
}
