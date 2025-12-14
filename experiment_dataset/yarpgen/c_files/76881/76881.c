/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((((((11544395613933178448 << (12100 - 12047))) & -116390146)) ^ (((var_3 ^ (~-64))))));
    var_12 |= 192;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 *= ((-116390151 && (arr_2 [i_1 - 2] [i_1 + 2] [i_0])));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_14 = (min(var_14, 8199999264180248609));
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] |= (((arr_1 [i_3]) & (arr_0 [i_0])));
                            arr_13 [i_2] [i_1 - 3] [i_3] [i_4] = ((1538536374664815045 ? -116390146 : (arr_6 [i_1 + 3] [i_1] [i_1] [i_1 + 3])));
                            var_15 = ((1 == (var_4 < 134217727)));
                        }

                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((var_3 ? 1 : 8199999264180248609));
                            var_17 = (((arr_4 [18] [i_2] [i_0]) ^ 8199999264180248609));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_20 [13] [i_2] [i_2] [i_2] [13] = (arr_4 [i_0] [i_2] [i_0]);
                            var_18 = (-29188 == -10246744809529303007);
                            var_19 = (((arr_6 [i_0] [i_2] [i_2] [i_3]) - 10246744809529302992));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_20 = (10246744809529303022 >= 16075);
                            var_21 &= 0;
                            var_22 += ((~(arr_24 [i_1 - 3] [i_0] [i_1] [i_1] [i_1 - 1])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_23 = 6;
                            var_24 = (min(var_24, var_1));
                            var_25 = (max(var_25, (((~(arr_25 [i_0] [i_0] [i_1] [i_0] [2] [i_8] [i_0]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_2] [5] = (!6);
                                var_26 |= (((2470220449 + 10246744809529303008) ? (arr_24 [i_0] [i_0] [14] [i_0] [0]) : (((arr_21 [i_0] [19] [i_0] [19] [19]) + (arr_24 [i_0] [i_0] [i_9] [i_10 - 1] [i_1 - 2])))));
                                var_27 = 31;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_2] = ((0 ? 118 : 8199999264180248624));

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_28 ^= 116390145;
                            var_29 = (!-119);
                            arr_40 [i_2] = (max(10246744809529303019, 51));
                        }
                        var_30 = 628282108;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_31 += ((((~((max(4, 41)))))) ? ((0 & (max(2185974930, 1914876827)))) : 511);
                        var_32 += (min((arr_38 [6] [i_13] [i_13] [i_2] [2]), (max((arr_43 [i_13] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1]), (10246744809529303019 * 1)))));
                        var_33 -= ((-(max((max(18446744073709551615, 1)), ((16368 ? 64774617444415111 : 0))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
