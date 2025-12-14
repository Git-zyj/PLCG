/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((var_10 >> (var_10 - 24)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((2638163182 ? (min(231087166, -32752)) : (arr_3 [i_0] [i_1])))) ? 1502701602 : 118));
                var_15 = (min(var_15, (var_0 > -var_0)));
                arr_6 [i_1] [i_0] [i_0] = (!var_6);

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_1] |= (((arr_10 [i_1]) ? (((-((7936 << (var_1 + 1484755767047518428)))))) : (max(32767, (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_4 + 1] = (((arr_9 [i_4]) ? 9223372036854775807 : (min((var_11 != 5), (arr_17 [i_0] [i_1] [i_1] [i_1] [i_4])))));
                                var_16 = (max(-var_12, (((arr_15 [i_2 - 1] [i_3 - 4]) | (arr_15 [i_2 - 1] [i_3 + 1])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_17 -= (arr_3 [i_1] [i_0]);

                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            var_18 = 2792265720;
                            arr_25 [i_0] [i_0] = (!var_4);
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            var_19 = 3356435528;
                            arr_29 [i_0] [i_0] [i_2 + 1] [i_5] [i_7] = 0;
                            var_20 = (min(var_20, (-118 - var_1)));
                            var_21 = var_4;
                            var_22 *= ((var_8 & (arr_3 [i_5] [i_0])));
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_2 + 1] [i_0] [i_8] [i_0] [i_8] = 2;
                            var_23 = 321622962;
                        }
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            var_24 = (max(var_24, (arr_3 [i_1] [i_1])));
                            var_25 ^= ((~(((arr_15 [i_9] [i_1]) >> (var_4 - 8920826020595431922)))));
                        }
                        var_26 += 0;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_27 = ((!(arr_20 [i_2] [i_10] [i_10] [i_2] [i_2 - 1] [i_1])));

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_40 [i_11] [i_2] [i_10] [i_2] [i_2] [i_1] [i_0] = (((((32 ? (arr_36 [i_2] [i_0] [i_2] [i_0] [i_0]) : (arr_7 [i_0] [i_2] [i_0])))) ? var_11 : var_10));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = (1 / 7945);
                        }
                        var_28 = (((((7945 ? 107 : -30))) ? var_0 : (arr_10 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        arr_45 [i_1] = arr_0 [i_2 - 1] [i_2 - 1];
                        arr_46 [i_0] [i_0] = var_1;
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_29 += (arr_19 [i_0] [i_1] [i_2 - 1] [i_1] [i_13]);
                        var_30 -= ((var_12 ? (arr_8 [i_0] [i_0] [i_2] [i_0]) : (((arr_26 [i_2] [i_1] [i_2] [i_1]) % (arr_17 [i_0] [i_0] [i_2] [i_0] [i_0])))));
                    }
                }
                arr_49 [i_0] [i_0] [i_0] = arr_21 [i_1];
            }
        }
    }
    var_31 = (min(var_31, var_8));
    #pragma endscop
}
