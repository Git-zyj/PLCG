/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (min(1, ((65535 ? 62531 : 18446744073709551615))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = -4294967295;
                            var_20 = (max(var_20, 4294967295));
                            var_21 = (!4294967295);
                            var_22 = -0;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_23 = (min(var_23, (20128 != 31)));
                            arr_20 [i_3] [5] [14] [i_3] [i_5] [10] [i_0] = (!3);
                            arr_21 [i_0] [9] [i_2] [i_0] [i_5] = 45417;
                            arr_22 [i_0] [i_0] [1] [i_0] [i_3] [i_5] = (min(var_12, (((4294967295 ? 45417 : 20119)))));
                            arr_23 [i_5] [i_0] [i_2] [i_3] [i_1 - 2] [i_2] [i_3] = (((arr_11 [i_3] [i_0]) ? 64330 : ((45416 ? (63 <= 4) : 255))));
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_24 = (arr_7 [17] [i_3] [i_0]);
                            var_25 = (max(var_25, (((20128 <= 7) ? (((arr_4 [i_0] [i_1] [i_0]) ? 4194303 : 45427)) : -110))));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (max(-1, 45407));
                            var_27 = -1;
                            arr_29 [i_0] = var_2;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_28 = -56;
                            var_29 = (min(var_29, (min(524287, 6))));
                        }
                        arr_32 [i_0] [i_0] = (239 && ((!(arr_1 [22]))));
                        arr_33 [1] [i_0] [i_2] [1] [i_0] [i_0] = ((4294967291 >> (1024531947631439654 - 1024531947631439651)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_37 [1] [i_1 - 1] [i_0] [i_9] = (1024531947631439639 ^ 0);
                        var_30 -= 31;
                        var_31 = ((1 ? 1023 : 4294967292));
                        var_32 = ((106 ? ((((-1 + 2147483647) >> 11))) : 0));
                        var_33 |= -45424;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_34 -= (arr_11 [16] [i_11]);
                            arr_43 [21] [i_0] [i_2] [i_2] [i_11] = var_6;
                        }
                        arr_44 [i_0] [i_1 + 1] [i_1] [i_0] = 11277938908411298485;

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_47 [i_0] [19] [19] [i_1 - 4] [i_1] = (~2047);
                            var_35 *= (arr_28 [i_2] [i_2] [1] [i_2] [i_2] [1] [22]);
                            arr_48 [i_0] [i_0] = (((~18446744073709551615) ? 11 : (min(641571966, (244 + 4)))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_51 [i_13] [i_0] [7] [i_1 + 1] [i_0] [i_0] = 11;
                            var_36 ^= ((((min(60731, 1))) << (-1 + 21)));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_37 *= (~65535);
                            var_38 = 4294967283;
                            var_39 = ((~((-21 ? (arr_10 [i_14] [i_2] [i_1] [7]) : 1))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_40 = (-(arr_46 [i_0] [i_0] [i_2] [i_15]));
                            var_41 = ((~(65535 < 244)));
                        }
                        arr_57 [i_0] [i_1] [i_2] [i_2] [8] = (((11613 && 255) ^ ((min(1, 1)))));
                    }
                    var_42 = 600185660;
                    var_43 = 45417;
                }
            }
        }
    }
    #pragma endscop
}
