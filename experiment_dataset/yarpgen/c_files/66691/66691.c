/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = ((~(1 == 147)));
                arr_4 [i_0] [i_1] [i_1] = (((((-2138813137767742494 > 24553) & 7114448510620757559)) != (1 && 21471)));
                arr_5 [i_0] [i_0] [i_1] = ((11332295563088794054 | (!0)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 = (((12034291664212883318 * 4398012956672) * 59669));
                        var_16 *= (((((109 & 4294967295) >> 29)) * (~19109)));
                    }
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        var_17 = ((!(((6986002888718237853 - -4324124396080779964) && -4324124396080779947))));
                        var_18 = ((((2305842940494217216 << (((-8986 + 9005) - 18)))) - (0 % -97)));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_5] [i_1] [4] = (11 % 105);

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_19 += (-116 + 4324124396080779937);
                            var_20 = 20620;
                            var_21 = (109 % 60);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_22 += 65535;
                            var_23 = (max(var_23, 1));
                            var_24 = 4765507187649135372;
                            var_25 = (max(var_25, (4611686017353646080 < 4294967295)));
                            var_26 = (((!4294967273) << (63 - 54)));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_1] = 51;
                            var_27 = (!4);
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_5] [i_1] = ((-(4026531840 | 109)));
                            var_28 = (max(var_28, -113));
                            var_29 = (max(var_29, 65535));
                        }
                        arr_34 [i_1] [i_1] [7] [i_5] [i_5] [i_5] = (-39 + 11332295563088794054);
                        arr_35 [i_1] [1] = (!240569127);
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                    {
                        var_30 = 4324124396080779964;
                        arr_38 [i_0] [i_0] [i_0] [i_1] [i_0] = (((--1) / 13187));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_31 = ((-(2524 / 6824)));
                                var_32 = (-25948 == 6792087386914147255);
                                arr_44 [i_1] = (((-63 != 3814563089) == 1786027512));
                                var_33 = (min(var_33, (((((62359 << (13185 - 13184))) & (~1))))));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    var_34 = (((140728898420736 * 65523) >= (1 & -3)));
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 8;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_35 += (((~-74) * (((!(30495 || 16033))))));
                                var_36 &= 12288;
                            }
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                {
                    arr_58 [i_0] [i_0] [i_16] [i_1] = 8589672448;
                    var_37 = 16384;
                    var_38 = ((-((602342092661981459 << (12186 - 12159)))));
                }
            }
        }
    }
    var_39 = 30503;
    var_40 = (min(var_40, var_6));
    var_41 = (max(var_41, var_6));
    #pragma endscop
}
