/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max(var_7, (var_2 || var_1))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = 15702589559114978135;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_1] = (((2132 ? 31092 : 2744154514594573480)));
            var_13 = -2132;
            arr_6 [i_0] [i_1] = ((~((~((15702589559114978122 ? (arr_4 [i_0]) : (arr_1 [i_1])))))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_14 = (arr_7 [i_0]);
            arr_9 [i_0] [i_0] = (arr_4 [i_0]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = (2744154514594573485 | 4887);
            var_15 = ((var_1 % (((((arr_4 [i_0]) != 65508))))));
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_16 = ((-(!-2485365459637068279)));
            arr_21 [i_4] [i_5] [i_4] = (arr_20 [i_4] [i_4]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [12] [12] [i_5] [8] [i_7] = (((arr_24 [i_4] [i_4] [i_4] [i_4]) ? 1 : 2111));
                        arr_27 [i_4] = (arr_23 [i_4] [i_5] [i_6] [i_7]);
                        arr_28 [i_4] [i_5] [i_4] [i_5] [1] [i_7] = ((!(((arr_25 [i_4] [i_5] [i_4] [i_7]) && ((!(arr_22 [i_4] [i_5] [i_6])))))));
                    }
                }
            }
            var_17 ^= (arr_11 [i_4 - 1] [i_4] [i_4 + 1]);
        }
        var_18 = (max(var_18, -22));
        arr_29 [i_4] = (arr_1 [i_4 - 1]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        arr_32 [1] = (!-38406);

        for (int i_9 = 4; i_9 < 22;i_9 += 1)
        {
            arr_36 [i_9] [i_8 - 1] = ((arr_31 [i_9 + 1]) & (arr_31 [i_9 - 4]));
            arr_37 [i_8] [i_8] = (arr_31 [i_9 + 1]);
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            arr_41 [i_8] = ((212 << (((((arr_35 [i_8] [i_8] [i_10]) - (arr_38 [i_8]))) - 14810683526419446392))));
            arr_42 [i_8] [i_8 - 2] [i_10] = (((((arr_39 [10]) * 0)) << (!27155)));
            var_19 = ((2132 ? 247 : -4784543638186471594));
        }
    }
    #pragma endscop
}
