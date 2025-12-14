/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_13 ? 2 : (min(561577403673429706, -2)))) / var_11));
    var_20 += var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (min(((var_13 ? 7251899749470190678 : var_18)), (((-859672810 ? -1578467942 : -23)))));
                        arr_11 [i_1] = ((!(((var_10 ? 1089051858 : var_14)))));
                        arr_12 [i_1] = 168;
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_1] = ((!((((459794359 ? var_5 : var_8))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_22 |= ((0 ? 0 : var_3));
                            arr_19 [i_0] [1] [i_1] [i_4] [i_5] = (!var_12);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_4] [i_1] [i_1] [i_1] [i_0] [i_0] = (var_1 ^ ((var_10 ? -23 : var_0)));
                            arr_23 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] [i_6] = ((((max((var_3 | 38), -8))) ? var_2 : (var_9 / var_11)));
                            arr_24 [i_1] [i_1] [i_1] [i_1] = ((((((var_12 / var_7) / ((114 ? 1450937641 : var_5))))) ? (((var_10 || -26073) - (!0))) : (!1)));
                            var_23 ^= -var_9;
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_24 -= var_1;
                            arr_28 [i_0] [i_1] [i_1] = (!-24214);
                            var_25 |= 1578467941;
                        }
                    }
                    arr_29 [i_0] |= ((15575154212418468164 ? (((((var_7 ? var_3 : var_16))) ? ((var_8 ? 3 : 2791025967308511786)) : var_14)) : (((!var_12) ? -var_6 : 7))));
                }
            }
        }
        var_26 += ((~((((((-637298344 + 2147483647) << (1578467922 - 1578467922)))) ? 0 : (!-23)))));
        var_27 = (((((~(min(var_13, var_8))))) | ((var_14 << (var_2 - 93071669)))));
    }
    #pragma endscop
}
