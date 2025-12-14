/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, ((((~((6981400398667516737 ? var_10 : var_9))))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_12 = ((var_7 ? 6981400398667516737 : var_7));
                            var_13 = (((arr_4 [i_0] [i_1]) % -71));
                            var_14 -= (var_3 != var_3);
                        }
                        var_15 = (max(var_15, 246));
                        var_16 ^= ((+(((~var_8) ? 4680590222663104706 : ((var_5 ? (-2147483647 - 1) : 18446744073709551603))))));
                    }
                }
            }
        }
        var_17 = var_6;
        var_18 = var_9;
        var_19 = (((((max(-6981400398667516739, var_1) < (var_3 && var_10))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_20 = var_3;
        var_21 = (12066111316670696821 | var_6);

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            arr_17 [i_5] = 279741950;

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_22 = (!-158459211);
                var_23 = -205;
            }
        }
    }
    var_24 = 1;
    #pragma endscop
}
