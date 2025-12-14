/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((((min((arr_2 [i_1 - 1] [i_2 - 3]), 65532))) ? (min(-6586315052958925384, 1)) : (var_12 <= 65508)));
                                var_19 = (min(var_19, ((min(((6586315052958925401 ? (arr_12 [i_1 - 2] [i_1 - 1] [i_2 - 3] [i_3 - 2]) : (arr_12 [i_1 - 2] [i_1 - 1] [i_2 - 3] [i_3 - 2]))), (arr_11 [18] [0] [i_2 - 3] [i_1] [i_0]))))));
                                var_20 += (min(((((arr_6 [i_2 - 2] [i_2 - 2] [i_1 + 1]) ? 6586315052958925419 : 65499))), (1 && var_7)));
                                var_21 = var_10;
                            }
                        }
                    }
                    var_22 = var_1;
                    var_23 = 225;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_24 = (max(var_24, 106637050));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_5] = (arr_13 [i_8] [i_7] [i_5] [i_6] [i_5] [i_5] [i_5]);
                        var_25 = (max(var_25, ((min((~var_6), (~21))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_26 = ((~(((arr_4 [i_9]) ? var_14 : (arr_18 [i_9] [i_9] [i_9])))));
        var_27 = (max(var_27, (((209 ? 3 : (min(3221225472, 26279)))))));
        arr_25 [i_9] [i_9] = (min((arr_2 [i_9] [i_9]), ((min((!-32739), (arr_18 [i_9] [i_9] [i_9]))))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_28 = var_1;

                    for (int i_13 = 1; i_13 < 8;i_13 += 1)
                    {
                        arr_36 [0] [i_13] [i_12] [6] [i_11 - 1] [i_12] = (min(18887, (min(21, var_10))));
                        var_29 = ((var_15 ? var_16 : (((28119 ? (arr_2 [i_11] [i_11]) : -1)))));
                        var_30 = -9223372036854775806;
                    }
                }
            }
        }
        var_31 = ((!(arr_6 [i_10] [i_10] [i_10])));

        for (int i_14 = 2; i_14 < 8;i_14 += 1)
        {
            arr_39 [i_10] = (min((arr_18 [i_10] [i_14] [i_10]), 58));
            var_32 = -106637036;
        }
        for (int i_15 = 3; i_15 < 8;i_15 += 1)
        {
            var_33 = (((((min(2147483647, 9223372036854775807)))) ^ var_5));
            var_34 = (max(var_34, -212176045));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_35 *= (((-1235765128567495497 / 106637068) ? (((arr_34 [i_16] [i_16] [i_16] [i_16] [i_16]) ? 8200 : var_0)) : 147));
            arr_44 [i_16] = (arr_13 [i_10] [i_10] [i_10] [i_16] [i_10] [i_16] [i_16]);
        }
    }
    #pragma endscop
}
