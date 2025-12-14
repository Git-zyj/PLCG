/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 |= (1 > var_6);
        var_15 = ((!((min((1 * 4294967274), 3003536719759973664)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_16 -= 18446744073709551585;
            var_17 = (min(4294967274, 127));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_18 &= var_1;
            var_19 = ((~(((arr_4 [i_0] [i_2] [i_2]) | var_4))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 = 4294967274;
                        var_21 = (~1);
                    }
                }
            }
            var_22 = (((arr_7 [i_0] [i_0] [i_0] [i_2]) / -127));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                var_23 = (((((-3833560920 ? (((arr_5 [i_6] [i_5] [i_0]) ? (arr_5 [i_5] [i_5] [i_6 - 2]) : 13411138970664023734)) : (((arr_7 [i_0] [i_5] [i_5] [i_6]) + 42))))) ? ((((arr_13 [i_6 + 1] [i_6 + 1] [i_6]) >= var_11))) : (((var_9 <= (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_20 [i_0] [i_5] [i_6] [i_7 - 4] [i_0] [i_5] [i_8] = ((23048 ? 2015699252 : (3003536719759973646 * -78)));
                            var_24 = ((+((((((arr_1 [i_0]) < 1))) + (!0)))));
                        }
                    }
                }
            }
            var_25 = (!1);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_26 = (min(var_26, (((~(2441996012 | 18446744073709551598))))));

            /* vectorizable */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_27 = ((1 ? (~1) : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_32 [i_12] [i_12] [i_12] [i_12] [i_12] = ((~(arr_7 [i_9] [i_9] [i_9] [i_9])));
                            var_28 = ((~var_7) <= 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        {
                            var_29 = (min(var_29, (((~(!288230376151711743))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [2] = ((var_5 && (arr_27 [i_0] [i_9] [i_13] [i_13] [i_14 + 1] [i_13])));
                            var_30 = (~1);
                            var_31 = (arr_30 [i_0] [i_9]);
                            var_32 = ((((arr_38 [i_0]) < 1)) || (arr_5 [i_0] [i_10] [i_14 + 1]));
                        }
                    }
                }
                var_33 -= 3804306030;
            }
        }
    }
    var_34 = var_4;

    /* vectorizable */
    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    var_35 ^= (arr_43 [i_15 + 1] [i_16] [i_16]);
                    var_36 = var_8;
                }
            }
        }
        var_37 = (21 ? (arr_44 [i_15]) : var_6);
    }
    #pragma endscop
}
