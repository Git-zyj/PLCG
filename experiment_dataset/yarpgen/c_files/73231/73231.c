/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    var_14 = 16383;
    var_15 = ((-32924 > ((((min(1281949387, var_4))) ? var_6 : (((-784 ? 0 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [9] [i_0] = ((((max((arr_1 [i_1] [i_0]), (((!(arr_5 [3] [i_1]))))))) ? ((max(66, 1))) : 32901));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 |= min(32595, (((max((arr_8 [i_3] [i_2] [8] [i_0]), 1)) | (54772 <= 1))));
                            var_17 = (((((min(61, 1)))) & (((arr_7 [i_0] [i_1]) ? -29 : -16383))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [10] [9] [i_0] [i_0] [i_0] = (((arr_20 [i_6] [i_5] [i_0] [i_1] [i_0]) ? (max(1, (32901 << 1))) : (arr_15 [i_4 - 1] [8] [i_5 - 1] [6] [i_5 - 2] [i_5])));
                                var_18 = min(((1 ? 18446744073709551606 : 1)), (2721619866 % 10772));
                                arr_24 [i_0] [i_1] [i_0] [i_5] [i_6] = (((~-16369) < (9361095450287486799 > 0)));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_19 = (min(63, 36417));
                    var_20 = (min(var_20, (((((((min(5319908597802861422, 2366199730469764461)) & (((10770 ? 1 : 6)))))) ? (((10943480710402619767 > (arr_18 [9] [7] [7] [5] [i_7] [i_7])))) : 1505148870)))));
                    arr_28 [3] = (max(((((min((arr_15 [i_0] [8] [8] [i_1] [i_7] [i_7]), 3919594961)) != (((((arr_12 [2] [8] [i_7]) < 192))))))), (min((((!(arr_10 [i_7] [i_1] [i_0] [i_0])))), -727552453))));
                    var_21 = 9223372036854775792;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    arr_32 [i_8] [i_1] [i_8] = (~-76);
                    arr_33 [i_8] [i_1] [i_8] = (arr_3 [3] [i_0]);
                    arr_34 [i_8] [i_8] [i_8] [i_0] = (!85);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_22 = 9096184392122508028;
                                var_23 *= 16406;
                                var_24 = -14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
