/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_2 [i_0] [i_1])));
                    var_21 &= max(var_17, (((((-20 + 9223372036854775807) << (1 - 1))) & (1 / 15))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_22 ^= ((var_18 > (arr_1 [i_3] [i_1 - 1])));

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_23 *= ((-27447 ? 1 : 1));
                            var_24 = (max(var_24, ((((((~(arr_10 [i_1] [i_2] [16] [i_1] [16] [i_4])))) ? (arr_0 [i_2] [i_4]) : ((1 ? 0 : 8)))))));
                            var_25 += arr_5 [i_1] [i_2] [i_4 + 3];
                            var_26 = (((((arr_1 [i_2] [i_3]) ? (arr_3 [i_3]) : (arr_12 [i_0] [i_1] [16] [i_3]))) - (((147 && (arr_12 [i_4] [i_3] [9] [i_0]))))));
                            var_27 = (((arr_9 [i_1] [i_2] [i_2]) ? (arr_6 [i_4] [i_4]) : var_15));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_2] = (((~-21) - ((((63 && (arr_11 [i_5 - 1] [i_2])))))));
                            arr_18 [i_2 - 1] [i_1] [i_2] [i_2 - 1] [i_5] [i_5] [i_2] = ((((((arr_3 [i_0]) ? 54652 : var_5))) ? ((((((arr_10 [i_0] [i_1] [10] [i_5] [i_5] [i_2]) + 9223372036854775807)) >> (arr_8 [i_3])))) : ((9223372036854775807 ? (arr_11 [i_0] [i_0]) : var_13))));
                            var_28 = (max(var_28, ((((arr_7 [i_0 - 2]) ? (arr_7 [i_0 - 2]) : var_17)))));
                        }
                        var_29 *= ((((14234091914438965332 ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? ((((arr_1 [i_0] [13]) ? 1 : (arr_0 [i_0] [i_1])))) : var_11);
                        var_30 = (!var_2);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_31 = var_11;
                            arr_23 [i_2] [i_2 + 1] = ((((((arr_2 [i_0] [i_1]) ? (arr_7 [i_0]) : 0))) & ((var_9 ? (arr_9 [i_0] [i_2] [i_7 + 2]) : var_12))));
                        }
                        var_32 -= (arr_7 [i_2 + 1]);
                        arr_24 [1] [i_2] [i_2] [i_2] [i_0] = (arr_7 [i_0]);
                        arr_25 [i_0] [i_1 - 1] [i_0] [i_2] = (5261508638589956708 && 161);
                        arr_26 [18] [i_1] [i_2] [i_2] = var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_33 = (arr_5 [i_0] [i_0] [i_0]);
                                var_34 = ((((!((max(1, (arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_2])))))) ? (((((var_5 << (((arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) - 7133378520049349151))))) ? (arr_22 [i_0] [i_1] [i_2] [i_8] [i_9 + 2]) : (arr_31 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] [23]))) : (arr_0 [i_0] [i_1])));
                                arr_33 [i_2] [i_8] [i_2 - 1] [i_2] = (arr_8 [i_0]);
                                arr_34 [i_0] [i_1 + 1] [i_0] [i_2] [i_9] = arr_8 [i_8];
                                arr_35 [i_2] = (arr_9 [i_0] [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
