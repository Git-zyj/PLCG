/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 += var_5;
    var_17 = var_0;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(((7 ? 0 : -10345)), 77))) + (((((var_3 ? 15806 : var_3))) / ((var_8 ? 0 : var_5))))));
        var_18 -= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (!var_9)));
                    var_20 += 7001860902034510805;
                }
            }
        }
        var_21 = (((-96 == 42157) ? (((((95 ? 24 : 2000830779))) - (var_6 / 9223372036854775807))) : (((-(1402 || 64132))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_22 = ((((min((min(var_6, 4)), 1))) ? var_6 : (12786 != 7)));
                        arr_21 [8] [i_3] = 1;
                        var_23 -= (((((18446744073709551615 ? 31 : var_9))) ? (((15254 ^ var_2) ? 1 : ((-5382752874267502968 ? var_0 : 2915766145)))) : 47215));
                    }
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        var_24 = var_6;
                        arr_26 [i_3] [i_3] [i_4] [12] [i_3] |= -52;
                    }
                    var_25 = (min(var_25, (((((4 > (119 >> 1))))))));
                    arr_27 [i_3] [i_4] [i_4] = (((31 ? 35024 : 0)));
                    var_26 &= (min(-2122998962, -93));
                }
            }
        }
        arr_28 [i_3] = (((1 - -12787) ? (var_10 - 0) : (((var_2 ? 524287 : var_11)))));
        var_27 = ((var_3 ^ var_9) ? ((((~221) ? (var_2 ^ 686567446) : (((-22767 ? var_0 : -108)))))) : var_7);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_28 = (max(var_28, (((((((var_7 == var_2) | 12787))) ? 6196 : var_11)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_38 [i_3] [i_3] [i_9] [i_10] [i_11] = (((((1 ? var_9 : 5332))) ? 235 : 4294967286));
                                var_29 = (min(var_29, (((((((2147483645 - 12786) / 59203))) ? 18446744073709551600 : (((var_4 * (var_11 * var_1)))))))));
                                var_30 = (((((-((22766 ? 6692664038056742948 : 6100))))) ? ((1996788091 - ((var_11 ? 50 : 0)))) : -var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = ((((1 ? var_2 : (((-107 ? var_4 : 8))))) / -100));
        var_31 = ((203 ? (~36028728299487232) : 18446744073709551600));
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
    {
        var_32 *= (((((2671 ? 12774 : 32767))) ? -23 : (((-6204731917650769346 + 9223372036854775807) << (125 - 125)))));
        var_33 = -var_5;
        var_34 = (-93 <= -var_0);
        var_35 = 192;
    }
    #pragma endscop
}
