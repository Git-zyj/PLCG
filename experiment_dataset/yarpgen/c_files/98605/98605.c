/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 -= var_7;
    var_20 = var_2;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 = (~13176972587095765355);
        arr_3 [i_0] = ((-(arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((min((max(var_3, 1825484285)), (~86780829))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_12 [i_0] [i_0] = (((-18343 ? 18323 : -18346)));
                var_22 = 20862;
                arr_13 [i_0] = (((((~(~var_11)))) ? (arr_0 [i_2]) : -18355));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_19 [i_4 + 1] [i_1] [i_0] [i_3] [i_4] [i_3] = 60699;
                            var_23 = (max(var_23, ((4294967295 * (18337 / 5368855100411589779)))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 ^= 17894182194057464155;
                var_25 += 142;
                arr_22 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = 134217600;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((-(((-9223372036854775807 - 1) ? -var_2 : (max(4839990061954487088, var_13)))))))));
                            arr_30 [i_7] [i_5] [i_0 - 1] [i_5] [i_0 - 1] &= ((!((((arr_16 [i_0 - 1] [i_0 + 1] [i_5] [i_5]) ? (arr_16 [i_0] [i_0 - 1] [i_5] [i_0]) : var_9)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_27 = (max(var_27, var_0));
                            var_28 = (min(var_28, -18322));
                        }
                    }
                }
                arr_38 [i_0] [i_0] [i_0 - 1] [i_0] = (18446744073709551615 == var_15);
            }
            var_29 += (max(((((max(var_3, 17894182194057464157))) ? 27933 : (var_6 / var_11))), (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_30 += (~((((arr_40 [i_0 + 1] [8]) && 2040))));
            arr_41 [i_0] = var_17;
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 = (max(var_31, var_6));
                        arr_47 [i_13 - 1] [i_0] [i_0] [i_0] = -2147483619;
                        var_32 = (max(var_32, (arr_26 [i_0] [i_11] [i_12] [8])));
                    }
                }
            }
        }
        arr_48 [i_0] = (min(-18360, (((var_0 || (arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_33 = (min(var_33, 121254019));
        var_34 = (max(var_34, (arr_50 [i_14] [i_14])));
        var_35 = (arr_49 [i_14]);
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_36 ^= arr_45 [i_15] [8] [i_15] [i_15] [i_15] [i_15];
        var_37 = (max(var_37, (~8)));
        var_38 -= ((~(((((var_17 ? (arr_43 [i_15] [i_15] [0]) : 6009337230098857661))) ? (var_5 - var_9) : (arr_4 [i_15] [2])))));
        var_39 -= var_16;
    }
    var_40 *= (var_9 == var_10);
    #pragma endscop
}
