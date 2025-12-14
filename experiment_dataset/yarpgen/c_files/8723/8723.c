/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [0] = (-37 ? ((((!(arr_7 [5]))))) : (min((max(549755813887, 549755813884)), -549755813888)));
                    var_12 = ((max((var_0 - 0), ((-549755813888 ? -549755813861 : var_7)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 = arr_7 [i_3];
                        var_14 -= ((!((!(arr_12 [i_0 + 2] [2] [2] [2] [4])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_1] [i_1] [i_0] = ((var_10 ? var_5 : (arr_4 [i_0 - 2] [2] [i_2])));
                        arr_16 [i_0] [19] [i_0] = (var_8 <= -549755813852);
                        arr_17 [i_0] |= (((arr_12 [10] [10] [10] [10] [i_4]) < -549755813887));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_1] [i_5] [i_5] [6] [i_5] = var_2;
                            var_15 = (min(var_15, (((-2 ? 11 : -549755813873)))));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_16 *= (arr_4 [3] [6] [6]);
                            var_17 = (((~(arr_6 [18] [18] [i_2] [i_2]))));
                            var_18 += (arr_13 [i_0] [i_0] [i_0] [i_0] [8]);
                        }

                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_19 -= (((arr_29 [i_8 - 1] [3] [i_8] [i_8] [i_8] [i_8]) >> (var_5 - 84)));
                            var_20 *= (arr_6 [20] [2] [i_2] [15]);
                            var_21 = (((((~(arr_19 [14] [14] [14] [i_0])))) ? (((150 ? (arr_19 [i_8] [7] [7] [i_1]) : (arr_27 [i_2] [i_2] [13] [12] [i_5])))) : (var_6 | 928492154)));
                            var_22 = ((32745 && (arr_27 [i_5] [i_5] [0] [i_1] [i_5])));
                            var_23 = (arr_13 [i_0] [10] [i_2] [i_0] [i_8]);
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, ((((var_1 ? (arr_5 [i_0]) : 150))))));
                            var_25 = (max(var_25, (arr_9 [i_0] [0] [1] [i_1] [i_0])));
                        }
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        var_26 = (((var_1 % 549755813863) + ((((max(-84, 6626534622903483565))) ? (((arr_37 [1] [i_0] [i_0] [8] [i_0] [i_0]) ^ var_10)) : (var_5 | 245)))));
                        var_27 = arr_22 [i_2] [18] [8] [i_10];
                        var_28 &= (((((arr_14 [12] [i_1] [7] [i_1] [i_0] [i_10]) < (var_9 <= var_8))) ? ((((arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 2] [18]) < (((arr_6 [i_0] [3] [i_2] [1]) ? 549755813870 : 99))))) : (arr_31 [i_0] [20] [20] [i_1])));
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_29 = (~549755813883);
                    arr_46 [i_11] [12] [8] [8] = max(var_9, var_11);
                }
            }
        }
        arr_47 [i_11] |= -34;
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        var_30 *= (min((((~(arr_21 [i_14] [1] [14] [i_14] [i_14] [i_14])))), ((15360 ? (-8749311968868594217 ^ -549755813876) : (220 / var_2)))));
        arr_50 [i_14] [6] = ((!(arr_29 [i_14] [11] [11] [i_14] [20] [2])));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_60 [0] [i_17] [i_17] = (max(((549755813891 / (arr_4 [i_14] [i_14] [13]))), (arr_59 [i_14] [i_14] [9] [10] [i_14] [8])));
                        var_31 *= var_5;
                        var_32 = (max(var_32, 94));
                        var_33 *= (~var_0);
                    }
                }
            }
        }
    }
    for (int i_18 = 1; i_18 < 19;i_18 += 1)
    {

        for (int i_19 = 3; i_19 < 17;i_19 += 1) /* same iter space */
        {
            arr_66 [i_18] [i_18] [9] = ((var_7 >> (var_1 - 37315)));
            var_34 = (max(var_34, (((53 & ((max(-8423009932581150074, 65535))))))));
            var_35 += (94 * (arr_64 [i_18 - 1]));
        }
        for (int i_20 = 3; i_20 < 17;i_20 += 1) /* same iter space */
        {
            arr_71 [i_20] [i_20] [i_18] = (150 <= 233);
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    {
                        var_36 -= ((!((((arr_72 [i_22]) % var_9)))));
                        var_37 = var_2;
                        var_38 ^= (arr_18 [i_22]);
                    }
                }
            }
        }
        var_39 = (-23561 ? 4294967289 : 23671);
        arr_77 [11] = (arr_22 [20] [i_18] [20] [20]);
    }
    #pragma endscop
}
