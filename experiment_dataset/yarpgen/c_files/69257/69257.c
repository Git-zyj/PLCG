/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((958 <= (arr_0 [i_0])));
        var_20 += var_17;
        var_21 += (((arr_1 [i_0]) ? (((arr_0 [4]) ? 1 : var_2)) : (arr_0 [8])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = (arr_4 [i_1] [i_1]);
        var_23 = (var_12 > 13085);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = ((((min(1, (arr_5 [i_2])))) ? (min((arr_5 [i_2]), (arr_5 [i_2]))) : (arr_5 [i_2])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 = (var_16 && 65535);
            var_26 = (!1);
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_27 = ((((((((1 ? var_15 : (arr_9 [i_4] [i_4])))) ? ((min(var_18, 30680))) : (((var_19 + 2147483647) << (13083 - 13083)))))) ? (arr_10 [i_4]) : (((arr_9 [i_4] [i_4]) ? (arr_10 [i_4]) : 1))));
        var_28 = (min(var_28, (arr_12 [i_4])));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                arr_20 [i_5] [1] [2] = 1;
                var_29 = -1;
                arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((-(arr_13 [i_6 - 1])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 15;i_9 += 1)
                            {
                                var_30 = (arr_30 [i_5] [i_5] [i_5] [i_5] [i_7] [i_8] [i_9]);
                                var_31 = (min(var_31, (((min((arr_26 [i_5] [i_5 + 1] [1] [i_5 + 3] [i_5 + 3] [i_5 + 2]), var_14))))));
                                var_32 = (((var_10 ? (min((arr_27 [i_5] [i_6 + 1] [i_6 + 1] [i_6] [i_9]), (arr_7 [i_9]))) : 1)) >> (var_12 - 9390));
                                var_33 += var_7;
                                var_34 = ((+(((arr_27 [i_9] [i_5] [i_5 + 4] [i_5] [i_5]) - (arr_25 [i_5 + 1] [i_5 + 3])))));
                            }
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                arr_34 [4] [9] [4] [9] [9] [i_10] = (arr_8 [i_6 - 1] [10] [i_6 + 1]);
                                var_35 -= 1;
                            }
                            var_36 = (((((((-6634 ? (arr_25 [i_5] [12]) : (arr_8 [i_5 + 1] [1] [18])))) ? (arr_19 [i_5 + 4] [i_5 + 4]) : (arr_25 [8] [i_6 + 1])))) ? (((max(0, (arr_24 [i_5] [10] [i_5]))))) : ((((max((arr_16 [i_8]), 2262763210418469435))) ? (((arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_5]) ? 2262763210418469447 : var_18)) : (((var_7 ? (arr_17 [1]) : var_17))))));
                            var_37 = (((((((((((arr_16 [i_7]) + 2147483647)) << (var_12 - 9406)))) ? (arr_19 [i_7] [i_7]) : (arr_17 [i_5])))) ? 59200 : (((arr_5 [i_5 + 4]) ? (arr_19 [i_8] [i_6]) : (~var_3)))));
                            var_38 = (((arr_18 [i_5 + 1] [i_5 + 1] [i_7]) ? ((((((-2262763210418469463 + 9223372036854775807) << (((((arr_14 [i_5]) + 30466)) - 26)))) > (arr_27 [i_8] [i_7] [i_5 + 3] [i_5 + 3] [i_5 + 3])))) : (((((var_16 ? var_3 : var_9)) >= ((65517 ? 13086 : (arr_6 [i_6]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
