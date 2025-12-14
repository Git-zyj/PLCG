/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_4 ? (min((-32767 - 1), var_8)) : 84)), ((((1849384051 ? 32767 : var_8))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((((((var_5 ? 32767 : var_1))) ? 20031 : var_5)));
        var_12 ^= (min((((!(-32767 - 1)))), (min(-32764, var_4))));
        arr_4 [i_0] [i_0] = ((((min(8, (~45)))) ? ((((max(var_6, var_8))))) : var_3));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 += (min(var_9, var_5));
            arr_8 [i_0] [i_0] [i_0] = (((((var_1 ? var_0 : var_0))) ? (((9087813570127895301 ? var_3 : 63))) : ((var_9 ? 3 : var_6))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_2] = 1244466113;

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_14 ^= (((666389760225114370 ? 1 : -32754)));
                var_15 = ((var_8 ? 43 : var_2));
            }
            arr_14 [i_0] [i_2] [i_2] = (!var_8);
            var_16 = (min(var_16, ((248 ? 69 : 20696))));
            arr_15 [i_0] &= -30699;
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_17 = ((var_9 ? -var_5 : (((var_8 ? var_9 : 76)))));
                    arr_25 [i_4] [i_4] [i_6] [i_4] = (~1);
                    var_18 = (min(var_18, ((((((var_4 ? var_5 : 9271813688536179337))) ? ((((~var_6) ? -414224901 : var_9))) : (max(var_0, -1244466094)))))));

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            var_19 ^= var_0;
                            var_20 = 247;
                        }
                        var_21 = (min(var_21, ((-15 ? -var_0 : (((((551810044 ? 0 : 8463667705699974882))) ? 15 : (min(-6653128663260468004, var_8))))))));
                    }
                    arr_31 [i_6] = (min(((-1 ? var_9 : ((var_1 ? var_7 : 20)))), 4489757186229930270));
                }
            }
        }
        arr_32 [i_4] = (((((18298694264555683966 ? 88 : var_6))) ? 1 : var_9));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                {
                    arr_37 [i_4] [i_10] [i_9 - 3] [8] |= var_1;
                    var_22 = (min((((var_9 ? ((var_0 ? var_4 : var_8)) : (!0)))), (((((var_6 ? var_5 : var_9))) ? ((var_5 ? var_0 : 12392870325823688352)) : 1))));
                }
            }
        }
    }

    for (int i_11 = 3; i_11 < 14;i_11 += 1)
    {
        var_23 = ((244 ? 18446744073709551615 : 16577967221757436132));
        arr_40 [i_11] = (((((max(var_8, 65535)))) ? ((((max(var_2, -6476248100438862817))) ? ((min(0, 237521087))) : (((-9223372036854775807 - 1) ? -56699444 : var_2)))) : ((1689383711413651218 ? 962130737 : 6150120871155250945))));
        arr_41 [i_11] = (((56699432 ? (min(241, -4489757186229930277) : -23157))));
        var_24 = (((((max(-4489757186229930277, var_4)))) ? ((((-1190171118 ? var_2 : var_1)))) : 249));
    }
    var_25 += ((max((((549755813880 ? var_0 : 1))), var_2)));
    #pragma endscop
}
