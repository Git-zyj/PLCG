/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = ((-(arr_3 [i_3])));

                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            var_20 = (((arr_8 [i_4] [i_4] [i_4] [i_4]) ? ((~((max((arr_1 [5]), 30495))))) : (5071514740678296447 && 12043)));
                            arr_11 [i_0] [i_4] [i_2] [i_3] [i_4] = (max((~var_1), 32448));
                            var_21 ^= (((arr_6 [i_0] [i_2] [i_3] [0]) >= 17446826777298787900));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] &= ((~((~(arr_14 [i_1] [i_0])))));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [6] = (~33088);
                            var_22 = (46462 ? 0 : -7904);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (min(var_23, var_12));
                            var_24 = ((((19067 ? (arr_14 [i_0] [i_0]) : 15030)) + 5992464695444382764));
                            var_25 += var_0;
                            arr_22 [5] [8] [i_1] [i_2] [i_1] [i_1] [i_0] = ((((((37359 ? (arr_18 [i_0] [i_3] [9] [i_1] [i_6] [6]) : var_13)))) ? (((max(46450, 12)))) : (arr_0 [3])));
                        }
                        var_26 = (((18446744073709551613 ? 19083 : 15025)));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_27 ^= ((-(((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7]) * 4618))));
                        var_28 = arr_0 [i_0];
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_30 [i_1] [i_8] = var_6;
                        arr_31 [i_0] [4] [6] [i_2] [i_8] [i_8] = ((((~-104) ? ((3918 ? (arr_20 [i_8] [5] [i_2] [9] [i_0]) : (arr_4 [4]))) : (max(18446744073709551592, var_8)))));
                    }
                    var_29 = (max(var_29, ((((((~(arr_4 [i_1])))) ? (((min(9, 3769)))) : (((arr_4 [i_0]) & (arr_9 [i_0] [i_0] [i_0] [i_0] [4]))))))));
                    arr_32 [i_0] [i_1] [5] = (arr_23 [i_1]);
                }
            }
        }
    }
    var_30 = (max(var_30, (18446744073709551605 <= 18446744073709551615)));
    #pragma endscop
}
