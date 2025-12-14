/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!var_16)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (!((((arr_0 [i_0]) ? var_12 : (arr_0 [i_0])))));
        var_22 *= var_7;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1 - 1] = ((min(var_2, -29092)));
        arr_7 [i_1 + 3] = (min(-878023264, (--29113)));

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_23 ^= var_15;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_18 [i_3] [i_2] [11] [13] [9] = 220;
                        arr_19 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_3] = (min(((((max((arr_12 [i_3]), (arr_5 [i_1 - 1])))) ? var_7 : (arr_14 [i_2] [i_4]))), 30191));
                    }
                }
            }
            var_24 = (((arr_17 [i_1] [i_2] [i_2] [i_1]) ? (~47) : ((max(48, 15199960782741371906)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_22 [i_5] = (arr_13 [i_1 + 2]);
            var_25 = (min(var_25, 1));
            var_26 |= var_9;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    {
                        var_27 += (((~(-9223372036854775807 - 1))));
                        var_28 |= -var_15;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_29 = (max(var_29, (((-((1 ? 9223372036854775807 : var_11)))))));
                            arr_29 [i_1] [i_5] [1] [4] [i_8] = (38 ? 1 : 32755);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_33 [i_1] [i_5] [i_1] = -136379217;
                            var_30 = (max(var_30, (arr_4 [i_1])));
                            arr_34 [i_9] [0] [6] |= 27;
                            arr_35 [i_5] [i_5] = (((!var_5) + -2747751620204417259));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
