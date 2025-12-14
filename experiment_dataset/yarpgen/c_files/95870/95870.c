/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((46365 ? 26 : 109)) == var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (((var_11 * 46375) ? 1 : var_13));
        var_17 = (max(var_17, (~46344)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = ((var_14 * ((var_3 ? var_7 : var_5))));
            arr_6 [i_1] = ((var_7 ? 46348 : -1));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 ^= ((~((65524 ? 46377 : -1359513151))));
        var_19 = (max(var_19, (((-1359513158 ? 1359513157 : ((var_4 ? 10906914337262499136 : 17516)))))));
    }
    var_20 -= var_13;
    var_21 *= -1359513161;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_22 = ((((((((1359513161 ? var_12 : var_1))) ? ((max(var_14, 44787))) : 2522))) ? (((!var_5) ? (((1 ? 65535 : -875598022))) : var_5)) : (max((min(1290764637, 980567413)), ((20 ? -35 : 2330222971))))));
                var_23 = (max(var_23, var_9));

                /* vectorizable */
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_4] [i_4] [i_4] [i_4] [9] [i_6] = ((12920 ? var_5 : -1359513141));
                        arr_20 [i_3] [i_4] [i_3] [i_3] = ((1 ? -32762 : ((var_5 ? -1359513144 : var_1))));
                        arr_21 [i_3 - 1] [i_4] [i_4] [i_6] [i_6] = (((18446744073709551615 + -1359513136) ? (~1) : ((23559 ? var_4 : 10))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 |= 2147483647;
                            var_25 ^= 317399702;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_26 = (max(var_26, (((var_8 ? var_0 : 247)))));
                            arr_28 [i_3] [i_4] [i_4] [i_4] [i_8] [i_4] [i_4] = ((11580481672196165648 ? 38358 : ((16540 ? var_14 : 1359513130))));
                        }
                        var_27 = (max(var_27, 57512));
                    }
                    var_28 = (max(var_28, 1));
                    arr_29 [i_3] [i_4] [i_4] = var_14;
                    arr_30 [i_4] [2] = (var_7 ? 18446744073709551613 : var_9);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_29 = (max(var_29, var_0));
                    var_30 *= (17 ^ 1);
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    var_31 = (max(var_31, (var_6 - var_0)));
                    var_32 -= ((3 > (var_13 == -101)));
                    var_33 = ((!(21633 | 24271)));
                    var_34 = (max(var_34, (255 && var_4)));
                    var_35 = ((251 ? ((var_14 ? var_3 : var_9)) : var_5));
                }
                var_36 = var_6;
            }
        }
    }
    #pragma endscop
}
