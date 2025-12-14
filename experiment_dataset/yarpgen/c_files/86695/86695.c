/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(((max(1, var_2))), 27347))) > var_4));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_1] [i_1]);
                    var_16 = (min(var_16, (((-95 > (max(-1367226208, (max((arr_5 [i_0] [i_1]), (arr_6 [i_0]))))))))));
                    var_17 = var_2;
                }
            }
        }
        var_18 = var_4;
        arr_10 [i_0] = var_5;
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_3] [i_4] [i_3] = ((var_10 * (arr_13 [i_3 - 1] [i_4 - 1])));
            var_19 &= (((-((var_6 ? 55 : 2905854118)))));
        }
        var_20 = 1613313336;
        var_21 = ((~((~(arr_12 [i_3])))));
        var_22 = (max((((0 == (arr_16 [i_3])))), (max(32, 1))));
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_23 = ((arr_11 [i_5]) ^ (((2199023255551 + 2147483647) >> (1 != 10979))));
        arr_22 [i_5] = 4200106099;
        var_24 = (((min(814222095816528684, 15)) < -8132592381503636067));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_25 = (max(((((arr_19 [i_5]) < (arr_20 [i_5 - 1])))), 125));
            var_26 = (arr_16 [i_5]);
        }
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_37 [i_7] [i_8] [i_9 - 2] [i_10] = (max(((max((arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1]), (arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1])))), (((arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1]) ? (arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1]) : (arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1])))));
                                arr_38 [i_7] [i_8] [i_8 - 1] [i_9 + 1] [i_10 - 3] [i_11] [i_11] = (arr_36 [i_7] [i_8] [i_7] [i_7 - 1] [i_7]);
                                var_27 = (arr_16 [i_8]);
                            }
                        }
                    }
                    var_28 = (arr_25 [i_9 - 2] [i_8]);
                    arr_39 [i_8] [i_8] [i_8] = (min((arr_14 [i_7] [i_8] [i_8 + 1]), var_12));
                }
            }
        }

        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            var_29 = 250;
            var_30 &= (!-95);
            arr_43 [i_12] [i_12] [i_12] = var_1;
            var_31 -= max((!33), (min((~1), (((arr_16 [8]) >> (((arr_25 [i_12] [i_7 - 1]) - 3424401212)))))));
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_32 |= (max((arr_11 [i_13]), 212));
                            arr_57 [i_16 + 2] [i_15] [i_14] [i_13 + 1] [i_13] = (((((-8553 <= (arr_7 [i_13 + 1] [i_14] [i_16 + 2])))) <= ((((arr_9 [i_16 + 2] [i_16] [i_16] [i_16]) && (arr_9 [i_16 + 1] [i_16] [i_16] [i_16 + 1]))))));
                            var_33 &= ((!(arr_1 [i_14] [i_16 + 2])));
                            var_34 = (~-122);

                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 16;i_17 += 1)
                            {
                                var_35 = ((((arr_15 [i_13 - 2] [i_14] [i_15]) ? -2199023255552 : 8511123751453032907)));
                                arr_61 [i_13] = (arr_21 [i_13] [i_14]);
                                var_36 ^= (var_7 > var_0);
                            }
                        }
                    }
                }
                arr_62 [i_13] [i_14] [i_14] = (arr_12 [i_13]);
            }
        }
    }
    #pragma endscop
}
