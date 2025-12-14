/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, var_9));
                    var_14 ^= (max(((103 ? (-32767 - 1) : 18446744073709551615)), ((min((~var_3), (((arr_1 [i_0] [i_1]) ? (arr_8 [i_2] [i_0] [i_1] [i_0]) : var_1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (arr_8 [i_0] [i_1] [i_2] [1])));
                                var_16 = (max((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_4]), ((-(arr_1 [i_0 - 2] [i_0 + 1])))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_17 -= (min(0, (((((-10 ? 94 : -27513))) ? ((6988938111649667245 >> (-94 + 127))) : 0))));
                        var_18 = (min(var_18, ((((arr_9 [i_2 + 1] [i_0 - 3] [i_0 + 3] [i_0]) ? ((((416377455 < 0) == -var_12))) : (~1))))));
                    }
                }
            }
        }
    }
    var_19 = (0 * 6988938111649667235);
    var_20 = ((!(((var_1 ? var_2 : var_5)))));

    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_21 = -14;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_22 = -7714362787313558474;
            var_23 = 11;
            var_24 -= (((arr_21 [i_6]) ? var_2 : 170));
            arr_24 [2] [i_7] = (((arr_23 [i_6 - 2] [i_6 - 2] [13]) + ((var_1 ? 0 : (arr_22 [i_6])))));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_27 [i_6 + 1] [i_8] = ((((-11 ? 657867492555914229 : 7)) == var_12));
            arr_28 [i_6 + 1] [i_8] [i_8] = ((~(~65535)));
            var_25 = (max(var_25, (((((var_0 ? var_12 : var_4)) >= var_12)))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_31 [i_6] [i_6] = ((!(7401 % 12475)));
            var_26 *= -19390;
            var_27 = (max(((+(((arr_23 [i_6 + 1] [i_6 + 1] [i_9]) * 1643738799)))), (((((arr_25 [i_6] [i_9]) ? (arr_22 [i_6]) : var_8))))));
        }
        arr_32 [i_6] = (arr_22 [i_6]);
    }
    #pragma endscop
}
