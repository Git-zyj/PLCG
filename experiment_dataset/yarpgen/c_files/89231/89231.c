/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? 65118 : (max(1031827813036299417, (~18446744073709551602)))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (((var_9 ? ((var_5 ? 4156578368082305111 : var_8) : var_9))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [16] = (min(0, 0));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_15 -= (((arr_10 [i_1] [i_1] [i_3] [i_3 - 1]) ? ((var_6 ? (min((arr_8 [i_2] [i_4] [i_4]), 18446744073709551602)) : var_10)) : (max(((((arr_4 [i_3 - 1]) ? 0 : 29227))), 18446744073709551615))));

                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_1] = (var_0 ? (min(((max(var_9, var_2))), var_11)) : 57074);
                            var_16 = (max(var_16, (arr_11 [i_1] [i_2] [i_2])));
                            var_17 = 6755;
                            var_18 = (((arr_9 [3] [i_3] [i_5]) || (((((max(2137, var_1))) ? -18281 : 0)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_19 = 18446744073709551611;
                            var_20 = (arr_0 [i_3] [i_4]);
                        }
                        arr_20 [i_1 - 1] [2] [i_1 - 1] = -12;
                    }
                }
            }
        }
        arr_21 [i_1] = ((var_2 ? (((!((max(3732601147031384903, (arr_0 [i_1 + 1] [i_1 + 1]))))))) : ((min(var_5, 113)))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_21 = (max(var_21, ((max((((arr_18 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) ? (((min((arr_9 [i_7] [i_7] [i_7 - 1]), (arr_1 [i_7]))))) : 9223372036854775807)), (arr_4 [i_7]))))));
        arr_24 [i_7] [i_7] = 13;
        var_22 *= (arr_15 [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]);
    }
    var_23 = ((var_5 > (max(99, (~var_8)))));
    var_24 = var_1;
    #pragma endscop
}
