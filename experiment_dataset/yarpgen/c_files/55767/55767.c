/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_6 ? var_0 : var_14)) | (~0))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (max((((1 ? (1 > var_4) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 255))))), (((var_5 + var_6) ? ((var_1 ? var_4 : 1)) : (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_18 *= (((!62167) ? ((-18898 ? (arr_7 [i_0]) : (arr_6 [i_0]))) : (((((arr_2 [i_0]) > 15))))));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_19 = (-9223372036854775807 - 1);
                    var_20 = (!var_15);
                    var_21 = (max(var_21, var_8));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 |= ((-((-122 ? 63070 : (-9223372036854775807 - 1)))));
                        arr_15 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] = (!12754);
                        var_23 |= (~var_4);
                        var_24 = ((1549578157 ? (arr_0 [i_4]) : (arr_1 [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] &= (((arr_18 [i_1] [i_1]) & (arr_13 [i_0] [i_1] [i_2] [i_3] [i_5])));
                        var_25 = (var_13 <= 128);
                    }
                    var_26 = (((arr_9 [i_0] [i_1] [i_0] [i_0]) ? var_3 : var_9));
                }
                var_27 |= (((arr_12 [i_0] [i_1] [i_2] [i_1] [i_0]) & (arr_5 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_28 = (arr_20 [i_0] [i_0] [i_6 + 1] [i_7]);
                            var_29 = ((!((((arr_9 [i_2] [i_6] [i_6] [i_6]) ? var_0 : 127)))));
                            var_30 = (min(var_30, (arr_2 [i_1])));
                        }
                    }
                }
                var_31 = (~-32);
            }
            var_32 = (41954 & -32750);
            var_33 = (min(var_33, ((((arr_3 [i_0]) ? (arr_3 [i_0]) : (~-118))))));
            var_34 += ((((((~(arr_24 [i_0] [i_0] [i_0] [6] [i_1] [i_1] [i_0]))) + 2147483647)) >> (((arr_14 [i_1] [i_1] [i_1] [16] [i_1] [i_1] [i_1]) - 6259))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    var_35 += (max((((!(((1 ? var_12 : 1)))))), (~var_8)));
                    var_36 = (max((var_8 - 15), (((((var_11 ? -28003 : var_9))) * (0 - 11630077302217042350)))));
                }
            }
        }
        var_37 = ((((((arr_7 [i_0]) | 4774))) ? (((arr_21 [i_0] [i_0] [i_0] [i_0]) >> (((128 ^ -124) + 274)))) : (((((var_11 ? 4210459144082432016 : (arr_26 [i_0] [i_0])))) ? (arr_23 [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_38 ^= ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ^ -1))) ? ((~(arr_10 [i_0] [i_0] [i_0] [3]))) : ((var_4 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
