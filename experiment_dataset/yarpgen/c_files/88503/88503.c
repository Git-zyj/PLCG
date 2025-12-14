/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88503
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
                    var_20 = -3074436633322278275;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_21 = var_12;
                        var_22 = (((max(var_8, 0)) <= ((((((2740833197 ? -5742631368387234290 : -3074436633322278288)) <= ((var_17 ? -5742631368387234316 : var_19))))))));
                    }
                    var_23 *= ((~(max(var_7, var_16))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 |= (((((((-2147483647 - 1) ? -5742631368387234290 : (-127 - 1)))) ? 0 : ((var_14 ? 2147483647 : var_16)))));
        var_25 = var_4;

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_26 += (((((6 ? -124 : (-9223372036854775807 - 1)))) && var_7));
            arr_15 [i_4] = (((((244 ? -28872 : var_17))) ? ((max(var_15, 3074436633322278288))) : (((max(var_4, 6))))));
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_19 [i_6] = ((((((var_17 <= 1) ? var_1 : (max((-127 - 1), var_15))))) ? 0 : ((32176 ? var_8 : -9223372036854775780))));
            var_27 = ((((max(var_10, var_12))) ? ((-3761820036971511207 ? 2147483639 : 35951)) : (!49)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_26 [i_6] = 3111911884;
                        var_28 = ((~((1 ? var_13 : 0))));

                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            var_29 = (var_4 | (min(var_8, var_18)));
                            var_30 = max(9, ((max(((-75 ? 2280609017 : 2280609030)), var_1))));
                        }
                        var_31 = (min(var_31, (-2147483647 - 1)));
                    }
                }
            }
            var_32 = 3133419655990217793;
            var_33 = (-6 <= var_18);
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            {
                var_34 = var_1;

                for (int i_12 = 4; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    arr_38 [i_10] [i_10] [i_11] = ((max(-33, (min(var_0, -3133419655990217793)))));

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 17;i_13 += 1)
                    {
                        arr_42 [i_10] [i_11] [i_11] [i_10] [i_13 - 3] [i_10] &= (48969 ^ var_16);
                        var_35 = 65535;
                        var_36 ^= ((var_2 >= ((2147483644 ? 15 : var_8))));
                        var_37 = (max(var_37, (!3133419655990217793)));
                        var_38 ^= ((16567 << (((~var_6) + 48436))));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_39 = (max(var_0, (((var_12 ? 21805 : (!var_8))))));
                        arr_45 [i_11] [i_11 + 2] [i_11] [i_12 - 2] [i_12 - 4] [i_11 + 2] = ((((((-16 ? var_14 : 3133419655990217808))) ? 56311 : -5528469448253694608)));
                    }
                    var_40 = ((4294967289 ? ((-6 ? var_12 : 1983254628)) : (78 | 1)));
                }
                for (int i_15 = 4; i_15 < 19;i_15 += 1) /* same iter space */
                {
                    arr_48 [i_15] [i_15] [i_15] &= (-(~var_0));
                    var_41 = (((((-(~-101)))) ? (~var_10) : ((2197830003471152534 ? var_17 : (var_2 - -2583800231410650862)))));
                }
            }
        }
    }
    #pragma endscop
}
