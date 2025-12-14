/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = ((((((var_8 && 1) ? 0 : (((1 <= (arr_3 [i_0 - 1] [i_1]))))))) ? (min((-9223372036854775807 - 1), (18446744073709551611 & 16))) : (~9997669926196760877)));
                    arr_7 [i_0] [i_0] [i_0] = (((var_7 * (var_10 % var_6))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_11 = (((((170 ? 0 : 32764))) / ((8388608 * (arr_1 [i_0 - 2] [i_0])))));
                        var_12 = (arr_0 [i_0]);
                        arr_11 [i_0 + 3] [i_1] [i_0 - 2] [i_3] = ((((((!(arr_8 [i_0 + 1] [2] [2] [i_3]))))) % ((var_5 ? (arr_8 [i_2] [i_1] [7] [i_3]) : (arr_8 [i_0 + 2] [i_1] [i_1] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] = (-127 - 1);
                            var_13 = -302424868;
                            arr_19 [3] [i_0 + 3] [i_0] [0] [i_5] = var_0;
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_22 [i_6] [i_1] [i_6] [i_1] [i_1] = 1;
                            var_14 = (-9223372036854775807 - 1);
                        }
                        var_15 = (((arr_5 [i_0 + 2]) ? (((!(~var_6)))) : ((49152 << (arr_12 [i_0 + 3] [i_1])))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    {
                        var_16 = (((17 == var_7) <= (arr_29 [i_7] [i_9] [i_8])));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_17 = (((((arr_23 [9]) ? 302424873 : (arr_30 [i_7] [i_8] [i_9 - 1] [3]))) / (arr_25 [i_7])));
                            var_18 = (max(var_18, 1));
                            var_19 = ((((((((arr_31 [i_7] [i_8] [i_9] [i_11]) + 2147483647)) << (var_1 - 13079953354525367259)))) ? (arr_30 [7] [1] [i_9 - 1] [i_10 + 2]) : ((var_5 ? (arr_33 [i_7] [i_9] [i_7]) : (arr_34 [i_9] [i_8] [i_9])))));
                        }
                        var_20 |= (((arr_37 [4] [i_8] [i_8] [i_10] [i_8]) || 8));
                    }
                }
            }
        }
        arr_38 [i_7] [i_7] = (arr_26 [i_7] [i_7] [i_7]);
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_42 [i_12] = var_4;
        var_21 = (min((arr_35 [i_12] [i_12]), (((((!(arr_33 [i_12] [i_12] [i_12])))) - (((arr_41 [7]) >> (65522 - 65519)))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 18;i_14 += 1)
        {
            {
                arr_48 [i_14] [i_14 - 1] = ((-(((302424854 ? 124 : (arr_33 [i_13] [i_14] [i_14 - 3]))))));
                arr_49 [i_14] [i_13] = 1;
            }
        }
    }
    #pragma endscop
}
