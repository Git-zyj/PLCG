/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 ^= var_15;
        arr_2 [i_0] = ((((((var_11 ? var_10 : 26883))) ? ((min(1764, 23690))) : (var_7 != var_12))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_18 |= var_13;
        var_19 = (min(var_1, (min(var_9, ((26883 ? 26865 : 26883))))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_20 = ((max(var_14, (-348 - var_6))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, (((var_16 ? (!var_15) : -26869)))));
                        var_22 = 26879;
                        arr_16 [i_2] [i_3] [i_2] [10] = (-12290 / -81);
                    }
                }
            }
            var_23 = (max(var_23, (((((max(((min(var_3, var_6))), ((var_8 ? var_2 : var_16))))) ? ((var_0 ? ((var_6 ? 0 : var_6)) : (var_6 * var_10))) : (min((var_9 * 16577), var_11)))))));
            var_24 = (((((var_1 ? (-24818 != var_9) : var_2))) ? var_3 : ((max(-22521, var_2)))));
            arr_17 [i_2] [i_3] [i_3] = (max(31, var_0));
            var_25 = (((((-var_7 ? 7823 : (~31294)))) ? ((30359 ? ((-15202 ? 5383 : var_2)) : var_0)) : (1 != 12290)));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 4; i_9 < 21;i_9 += 1)
                        {
                            var_26 = (min(var_26, (((!(((~((var_13 ? 37 : var_5))))))))));
                            arr_27 [i_2] [i_6] [9] [i_8] [i_2] = (min(((max(22535, var_8))), var_11));
                        }

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            arr_30 [10] [i_6] [i_6] [i_6] [i_6] [4] &= max(((var_4 ? var_9 : 92)), ((((max(var_5, 28))) ? var_14 : (var_2 + var_14))));
                            var_27 = (((((max(92, var_11)))) ? (var_9 | var_4) : ((max(var_7, var_1)))));
                            var_28 = (((((12290 ? 22535 : -12290))) ? (((((var_12 ? var_7 : -11))) ? ((var_13 ? var_7 : 22535)) : var_1)) : var_12));
                            var_29 = (min(var_29, (min(5, 1023))));
                        }
                        /* vectorizable */
                        for (int i_11 = 4; i_11 < 21;i_11 += 1)
                        {
                            var_30 = ((var_8 ? var_11 : -8566));
                            arr_35 [i_2] [2] [i_8] [10] [i_2] = var_15;
                            var_31 = (((var_4 != 30597) != var_8));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_32 = (min(var_32, (((((min(((var_4 ? var_3 : 22535)), -1040))) != (min((3 != 14926), ((var_0 ? 3674348706292869939 : var_3)))))))));
                            var_33 &= var_13;
                        }
                    }
                }
            }

            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                var_34 = -3;
                var_35 = ((var_4 ? (max(var_3, ((-12266 ? 15 : 30590)))) : 1023));
            }
        }
    }
    var_36 *= ((((((((var_10 ? 22521 : 1))) ? (var_16 | var_9) : ((var_15 ? var_6 : var_0))))) ? ((var_3 ? var_16 : ((var_14 ? var_9 : var_13)))) : (max(var_14, (var_3 | 22534)))));
    var_37 = (min((((var_7 | var_7) ? (((max(var_2, var_14)))) : var_5)), var_14));
    #pragma endscop
}
