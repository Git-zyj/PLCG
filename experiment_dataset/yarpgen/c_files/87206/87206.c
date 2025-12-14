/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (((0 * var_4) != (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((((~(arr_2 [1])))) ? ((var_7 ? var_11 : 3307918571)) : (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (2929310887 + 0)));
        var_17 = (min((~2844294693143661192), 14538));
        var_18 = 2484762471;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = ((35028 ? (max(2070120210883576701, (((1 ? 163 : 0))))) : (((((arr_8 [i_2] [12]) / -2702895672214338716)) * (min(var_2, 3307918588))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [7] = ((-(((arr_8 [0] [i_3]) % (arr_12 [i_2] [i_2] [3])))));

            for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = (var_11 - 3307918571);
                            var_21 = (((arr_17 [i_4 + 1] [i_5 + 3] [2]) + 44699));
                        }
                    }
                }
                var_22 -= ((var_0 / (arr_11 [i_2] [i_3] [i_4 - 2])));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_23 [i_2] [i_3] [i_4 - 1] [i_7] = ((-32745 == (arr_14 [i_4 - 1] [i_7])));
                    arr_24 [i_2] [18] [i_2] [i_7] = ((var_10 >> (806162875 - 806162859)));
                    var_23 = ((~(var_9 + 13342077)));
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_24 -= (!2147483647);
                    var_25 = 68;
                    var_26 = 13271491285822333305;
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_27 |= (~112);
                    arr_29 [i_2] [i_3] [i_4 - 1] [i_4] [19] [i_9 + 1] = (((1 && var_9) ? -var_2 : -97));
                    var_28 = var_9;
                }
                var_29 = (max(var_29, (var_4 / 1078276522)));
                var_30 &= (arr_22 [15] [i_2] [i_3] [i_3] [i_4]);
            }
            for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_31 = 32767;
                            arr_40 [5] [i_11] [i_10] [3] [i_3] [14] [i_2] = var_9;
                        }
                    }
                }
                arr_41 [11] [i_3] [i_10] [i_10 - 2] = (3494112406 ? (arr_32 [i_2] [i_3] [i_10 - 3]) : (32767 | var_5));
                var_32 = (((var_7 | 987048741) << (101 - 73)));
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_33 = ((min((((arr_32 [i_13] [i_13] [i_13]) + 53)), ((min(9989, var_7))))));
        var_34 = ((~(((((arr_25 [14] [16] [i_13] [i_13]) & var_5)) >> ((((4030363403013002411 ? 8350542460810619557 : 3199513935)) - 8350542460810619535))))));
    }
    var_35 = 19487;
    #pragma endscop
}
