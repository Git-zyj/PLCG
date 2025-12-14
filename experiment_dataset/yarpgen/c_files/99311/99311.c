/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = ((~(-3283688657907609686 != var_3)));
        arr_3 [i_0] = 7334361332300980310;
        var_16 = (max(var_16, (!var_6)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 *= var_12;
        var_18 = ((7334361332300980310 ? (var_4 / var_7) : (!137438953471)));

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_2] [i_1] = (((~18446744073709551615) | (arr_8 [i_1])));
            var_19 = -3283688657907609686;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 = (max(var_20, (((-var_13 && (var_7 || var_11))))));
                        var_21 *= (16 + var_13);
                        arr_18 [i_1] [i_1] [i_3] = ((var_5 & ((10400526636400109962 ? 2489 : 37270))));
                    }
                }
            }
        }
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_22 &= var_8;
                        arr_26 [i_5] [i_6] = 17520;
                        var_23 = ((8836553224542898190 * (!var_2)));
                        var_24 -= var_14;
                    }
                }
            }
            var_25 = ((-(!var_6)));
        }
        var_26 = (min(var_26, (((((!(arr_21 [i_1] [i_1] [i_1] [i_1 + 1]))) ? var_12 : var_0)))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            {
                var_27 = (((((~var_4) ? (var_12 - 63043) : (~var_2))) | ((((((var_3 == (arr_5 [i_8])))) >> (min(6, var_0)))))));
                arr_32 [i_9] [i_9] = ((((((max(var_11, var_9))) ? (var_7 >= 10974024118262618887) : (((arr_24 [i_8] [i_9] [i_9] [i_9] [i_9 + 1]) ? 1 : var_13)))) + var_11));
                var_28 = (var_12 ? (var_7 ^ var_11) : var_12);
            }
        }
    }
    var_29 = var_2;

    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_30 -= ((var_14 ? (var_14 / var_14) : var_10));
        arr_35 [i_10] |= (min(-5958155829142823773, (!var_3)));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 4; i_12 < 13;i_12 += 1)
        {
            {
                var_31 -= (max(1493455178, -1));
                var_32 = (min(var_32, var_11));
            }
        }
    }
    #pragma endscop
}
