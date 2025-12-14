/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((((1581520540 ? 0 : var_1))) ? (((min(0, 18446744073709551615)) + 7281934236303652137)) : ((((arr_1 [i_0 + 2] [i_0 - 1]) - 18446744073709551615)))));
        /* LoopNest 2 */
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
                                var_12 = (min(var_12, (((((((var_9 << (((arr_4 [i_0 + 1] [i_3]) - 404814000))))) ? 236 : (~12)))))));
                                arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((1 ? 236 : var_4)))));
                                arr_15 [i_2] [i_1] [i_1] [i_0] [i_1] = (((((((arr_0 [i_0 - 2] [i_4]) ? var_0 : (arr_3 [i_0] [i_1] [i_1]))))) ? ((~(arr_1 [i_0] [i_0 - 2]))) : 236));
                                arr_16 [i_0 - 2] [i_0] [i_0] [i_0] [i_4] = (+(min((arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4]), (max(0, 254)))));
                                var_13 = (0 + 0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] = ((0 || ((max(224, 255)))));
                                arr_24 [i_0] [i_1] [i_0] [i_0] [i_5] [i_0] = ((max(0, var_4)));
                                var_14 = 0;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0] = (((((~(min(var_2, 0))))) > ((((1 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_4)) ^ 0))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_15 = ((2531297768 << (219 - 193)));
        arr_28 [i_7] [i_7] = (((0 - 65535) / (((max(19, (arr_27 [i_7])))))));
        var_16 = (((!-var_5) ? (!0) : (((var_2 < (var_3 < 0))))));
        arr_29 [i_7] = 6160638544993605266;
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_17 = (((128 * 0) ? (((-(max(var_1, var_0))))) : ((0 ? 0 : (arr_30 [i_8])))));
        arr_33 [i_8] [i_8] = (arr_30 [i_8]);

        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            var_18 = (((((16536162354557902254 ? 0 : 1910581719151649362))) ? var_11 : (((~((var_0 << (var_2 - 3633640711))))))));
            arr_36 [i_8] = var_10;
            var_19 = var_8;
            arr_37 [i_8] [i_8] = (((((arr_31 [i_9 + 4]) >> (((-5986564939721145891 ^ 0) + 5986564939721145914)))) % (arr_35 [i_8])));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_41 [i_8] [i_10] = ((min(-67, ((18446744073709551615 ? 4 : 65535)))));
            var_20 = 0;
            var_21 = (min(var_9, (min((max(var_0, (arr_40 [i_8]))), 0))));
        }
        var_22 = 18446744073709551615;
    }
    var_23 = (min(var_3, ((0 ? 0 : 3580375093))));
    var_24 = min(18446744073709551615, 18446744073709551589);
    #pragma endscop
}
