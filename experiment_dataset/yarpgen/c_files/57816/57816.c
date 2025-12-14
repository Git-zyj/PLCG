/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (-1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = (4294967295 ? 65535 : (arr_0 [i_1 + 1] [i_3 + 1]));
                        arr_9 [i_0] [12] = (!var_11);
                        var_22 = -var_11;
                        var_23 &= (~65535);
                    }
                }
            }
            var_24 = (min(var_24, (((arr_6 [i_1 + 1] [i_1 + 1]) ? var_18 : 36435))));
            arr_10 [i_0] [i_0] [9] = ((var_12 ? (!36435) : (((arr_1 [i_1 + 1]) ? var_18 : 51018))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_25 = (min(var_25, ((((arr_11 [8] [i_0]) ? -1 : var_6)))));
            var_26 = ((var_15 ? (arr_8 [i_4] [i_0] [i_4] [i_0]) : (arr_8 [i_0] [2] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_27 = ((!(arr_18 [i_0] [i_4] [7] [i_6])));
                        arr_20 [i_4] |= (!var_1);
                        var_28 = ((65535 ? (((!(arr_12 [0] [i_4] [i_0])))) : 86));
                        arr_21 [11] [i_4] [i_4] [i_6] [i_5] = (((arr_6 [i_0] [i_4]) ? (arr_1 [i_4]) : var_0));
                    }
                }
            }
            var_29 = (min(var_29, (((!(arr_13 [i_0] [i_4]))))));
            var_30 = (~2147483642);
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_25 [i_0] [i_7] [i_7] |= ((!(arr_15 [i_0])));
            var_31 = ((var_18 ? 65535 : (arr_18 [i_0] [i_7] [i_7] [i_7])));

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                arr_28 [i_0] [0] |= (!170);
                arr_29 [i_8] = (arr_14 [i_0] [i_0] [i_8]);
                var_32 = (~29100);
                arr_30 [i_8] [i_8] [i_8] [i_0] = ((!(arr_19 [i_0] [i_7] [i_8] [i_8])));
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_33 [i_9] [8] = (((((~(arr_26 [i_9] [i_0] [i_0] [i_9])))) ? var_10 : (((-9223372036854775807 - 1) ? 48597 : 2235978947462200606))));
            var_33 = (((arr_15 [i_0]) ? (((-9223372036854775807 - 1) ? var_17 : var_6)) : ((-(arr_16 [i_9] [6] [i_0])))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_34 = (min(var_34, (arr_22 [i_11 + 1] [i_10 + 1] [9])));
                        arr_40 [i_9] [i_10] [i_11] = ((var_8 ? var_17 : var_18));
                        arr_41 [i_0] [12] [i_9] [i_10 + 1] [i_10] [i_11] = ((!(((0 ? 18242267820928601883 : (arr_38 [i_0] [10] [i_10 - 1] [i_11] [i_11]))))));
                        var_35 += ((!(arr_16 [i_11 - 1] [i_10 - 1] [i_10 - 1])));
                    }
                }
            }
            var_36 = (~var_0);
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 13;i_14 += 1)
                {
                    {
                        var_37 &= ((9223372036854775803 ? 3 : (arr_42 [i_13 - 1] [0] [i_12 + 2])));
                        var_38 = ((!(arr_8 [i_14 - 1] [i_14 + 2] [i_14 + 2] [i_14])));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = (((((var_5 ? (arr_50 [i_15]) : (arr_50 [i_15])))) ? ((7455448562122030592 ? (arr_22 [i_15] [i_15] [i_15]) : (arr_22 [i_15] [i_15] [i_15]))) : (((arr_50 [i_15]) ? var_12 : 1361859370))));
        arr_53 [i_15] [i_15] = -1964510427;
        var_39 ^= ((~((996365721 ? var_11 : 17315611843377666002))));
    }
    var_40 = var_1;
    #pragma endscop
}
