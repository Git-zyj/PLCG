/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 240;
    var_15 = ((max(0, var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [19] [i_0] = ((((((arr_1 [i_1]) || (240 ^ 0)))) ^ ((((max(240, (arr_0 [16] [i_1])))) ? ((min(-23667, 25913))) : (arr_3 [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [14] [i_0] [i_1] [i_2] = -3;
                    var_16 = 39623;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_10 [i_3] = ((22 / (~2)));
                    var_17 += ((((((((1377249624 ? -32764 : (arr_9 [i_3] [i_0] [i_3] [i_3]))) + 9223372036854775807)) << (((32758 | 2) - 32758)))) < -26933));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_18 = ((2 + ((~(arr_3 [i_0] [i_0])))));
                    var_19 = (22 << (((arr_3 [i_0] [i_0]) + 106)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = (arr_11 [i_0] [i_4] [i_6]);
                                var_21 -= (((((arr_6 [i_0] [i_0] [i_0]) ? (arr_2 [i_5]) : (arr_5 [i_0] [i_0] [i_0]))) << (109 - 109)));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_21 [i_7] [0] [i_1] [i_0] = ((arr_9 [i_0] [i_4] [i_4] [i_7]) - (arr_9 [i_7] [i_0] [i_0] [1]));
                        arr_22 [i_0] [i_1] [i_1] [i_7] = 2;
                        arr_23 [i_4] [i_4] [18] = ((arr_1 [i_7]) == (arr_9 [0] [i_4] [i_7] [i_7]));
                        var_22 = (arr_20 [i_4] [i_4] [i_4] [i_4]);
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_23 = (((-113 < -23) ? (arr_25 [i_0] [i_1] [i_4] [i_8]) : (arr_3 [i_8] [i_8])));
                            arr_29 [i_0] [i_1] [15] [i_9] [i_8] [i_9] [14] = -126;
                            var_24 = ((-10917 ? -27 : 50));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_25 = (24945 + 4294967295);
                            var_26 ^= 2123086704115633908;
                        }
                        var_27 = (((arr_30 [i_8] [i_8] [i_4] [i_8] [i_1] [i_0] [i_1]) + (arr_6 [i_0] [i_1] [i_8])));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            var_28 = (((arr_24 [2] [22]) ? -101 : (arr_24 [i_0] [i_1])));
                            var_29 = (((arr_0 [i_0] [i_4]) % (arr_0 [23] [i_1])));
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [22] [i_11] [i_0] [i_0] = ((~(18446744073709551615 - -29)));
                            var_30 = (((2 >> 7) >= (100 * 50423)));
                            arr_39 [i_11] [1] [i_11] [i_4] [i_11] [i_1] [i_11] = 1;
                        }
                        var_31 = 50423;
                    }
                }
                var_32 = (((((min(1, (arr_17 [23]))) ? 12 : -23))));
            }
        }
    }
    #pragma endscop
}
