/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = ((((min(-4214728139431552291, (((4396517929276163651 ? 2939762494 : (arr_3 [i_0] [i_2]))))))) ? (max((((arr_1 [i_1] [i_2 - 2]) + 18014123631575040)), var_9)) : (min(-1209162292902972276, 136))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (max((((((((var_10 + 9223372036854775807) >> (179277375 - 179277364)))) || ((((arr_8 [i_2 + 2] [i_0] [i_0] [i_0]) ? (arr_4 [i_1]) : var_16)))))), 1209162292902972265));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] = arr_10 [i_0] [i_0] [i_3];
                        var_21 = max(((((arr_10 [i_0] [i_3 + 1] [i_0]) || (arr_10 [i_0] [i_3 + 1] [i_0])))), (arr_10 [i_0] [i_3 + 1] [i_0]));
                        var_22 = (max(var_6, (arr_6 [i_0] [i_1] [1])));
                        arr_13 [i_3 + 1] [i_0] [i_0] = ((-(arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_23 = (max(var_23, (arr_6 [i_2 - 2] [i_2 - 1] [i_2 + 1])));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_24 = (arr_3 [i_0] [i_0]);
                            arr_18 [i_2] [6] |= (((-5350243770745794514 | 58) || var_4));
                            var_25 ^= (((arr_10 [14] [i_1] [i_1]) ? (arr_16 [i_0] [i_1] [i_2] [i_4] [i_5 - 1] [11] [i_0]) : (arr_17 [i_0] [0] [0] [i_0] [2] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_26 = (i_0 % 2 == 0) ? ((((var_7 + 2147483647) >> ((((-(arr_10 [i_0] [i_2] [i_0]))) - 863500517499895800))))) : ((((var_7 + 2147483647) >> ((((((-(arr_10 [i_0] [i_2] [i_0]))) - 863500517499895800)) - 6034967529210758561)))));
                            arr_21 [5] [i_1] [i_2] [i_0] [i_6] = ((~(arr_3 [i_0] [i_0])));
                            arr_22 [i_0] = (arr_11 [i_0] [i_1] [i_2 - 2] [i_4] [i_6]);
                            var_27 = ((((arr_20 [i_0] [i_0] [i_2] [i_0] [11]) ? (arr_14 [i_0] [i_0] [i_2] [i_4] [i_6]) : var_1)));
                            arr_23 [12] [12] &= var_4;
                        }
                    }
                    var_28 *= ((82 ? -1209162292902972253 : -1209162292902972237));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_29 &= (min(((~(arr_28 [i_8] [i_7] [i_8]))), (((arr_28 [i_8] [i_7] [8]) ? (arr_28 [i_7] [i_7] [i_7]) : (arr_2 [i_7])))));
                            var_30 = var_8;
                            var_31 = ((-((var_19 * (arr_29 [9])))));
                        }
                    }
                }
                var_32 &= -var_17;
                var_33 = ((((1732829140 ? (arr_6 [i_7] [i_7] [i_8]) : ((~(arr_26 [10] [i_8])))))) ? (arr_15 [i_7] [i_7] [i_7] [i_7] [i_8]) : (((((((arr_32 [i_7] [i_7] [i_7]) >> (arr_32 [i_8] [8] [i_8])))) | (((arr_8 [i_7] [i_7] [i_8] [i_7]) | (arr_24 [i_8])))))));
            }
        }
    }
    #pragma endscop
}
