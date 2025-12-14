/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (!var_9);
        arr_3 [i_0] [i_0] = ((max(((2147483647 ? 2147483647 : 18446744073709551612)), 127)) == 3);
        var_19 = (max(var_19, (~65535)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] = max(9223372036854775807, 6);

        /* vectorizable */
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_20 += (arr_9 [i_2 + 1]);
                arr_14 [i_2] [i_2] [i_3] = ((var_11 ? 1 : 18446744073709551602));
                arr_15 [i_1] [i_2] [6] [i_2] = var_10;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_2] [i_2] [i_4 + 4] [i_5] = -2147483625;
                            var_21 = (min(var_21, (arr_18 [i_2] [i_2])));
                        }
                    }
                }
            }
            arr_23 [i_1] [i_2] = (18446744073709551615 ? 18446744073709551615 : (arr_21 [i_1] [i_2] [i_2] [i_2 - 1]));
            var_22 = (max(var_22, ((((arr_12 [i_1 + 1] [i_2 + 1] [i_2] [i_2]) <= var_11)))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_23 += (9223372036854775807 ? 3 : 65535);
            var_24 = (max(var_24, (var_1 && var_14)));
        }
        var_25 = (max(var_25, var_15));
        arr_26 [i_1] = (((arr_18 [i_1 + 2] [i_1 + 2]) - ((-25 ? 0 : 18446744073709551602))));
    }

    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((((var_10 * 65535) ? (arr_5 [i_7 - 1]) : ((var_1 ? var_6 : var_11)))) > (((var_5 << (var_1 - 614364156)))))))));
                        arr_38 [i_7] [i_10] [i_7] = ((2 + (~22)));
                    }
                }
            }
        }
        var_27 = (1 + 255);
    }
    #pragma endscop
}
