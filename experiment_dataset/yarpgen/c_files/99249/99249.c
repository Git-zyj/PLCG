/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2781750913;
    var_17 *= ((((~var_9) ? var_7 : (min(1513216380, 0)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((~((-(~2353185906)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_18 = (min(var_18, 1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_19 = (((arr_7 [i_0] [i_4]) && (arr_14 [i_3 - 3] [i_3 - 2] [i_2] [i_3] [i_3])));
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4] = (arr_10 [i_3 - 2] [i_3] [i_4] [i_4]);
                            arr_18 [i_0] [i_2] = 32767;
                            var_20 = (arr_14 [i_0] [i_1] [i_2] [i_3 - 3] [i_2]);
                        }
                    }
                }
            }

            for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_21 = var_10;
                    arr_23 [i_0] [0] [i_5] [i_0] = var_2;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] = 4294967287;

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_22 += (((((arr_13 [i_0] [i_0] [i_0] [i_0] [4] [i_0]) / 61378)) + (~var_14)));
                        arr_30 [i_0] [i_0] [i_5] [i_7] [i_8] [i_8] [6] = ((!(arr_7 [i_5] [1])));
                        arr_31 [i_8] [i_7] [i_5] [i_1] [i_0] = ((var_11 ? (~18446744073709551606) : (~17)));
                        arr_32 [i_0] [i_0] [11] [i_0] [i_0] [9] [11] = (-114 / 32767);
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_23 = (arr_2 [i_0]);
                        var_24 &= var_15;
                        var_25 *= (6195 >= 65535);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_26 = (max(var_26, (((1 ? (arr_2 [i_0]) : (arr_11 [i_7] [i_5] [i_0]))))));
                        arr_38 [i_0] [i_1] [i_10] [i_7] [i_10] = 59352;
                        var_27 = arr_11 [i_10] [1] [i_10];
                    }
                }

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_28 = (var_5 >= -1812957172);
                    var_29 = -32754;
                    var_30 += (arr_2 [i_0]);
                    var_31 = ((((-(arr_24 [i_0]))) >> var_8));
                    var_32 = ((~(arr_14 [i_11] [i_5 + 2] [8] [i_1] [i_0])));
                }
            }
            for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
            {
                var_33 = (min(var_33, (((var_14 ? (arr_10 [i_12 + 1] [i_12] [i_12] [i_0]) : (arr_16 [i_12 - 1] [i_12] [i_12 + 1] [i_0] [i_0] [i_0] [i_0]))))));
                var_34 = (((arr_41 [i_12 - 1] [i_12] [i_12] [i_12 + 2]) > 1));
                arr_45 [i_12] [i_12] = (arr_41 [i_12] [i_12] [i_12 + 1] [i_12]);
                var_35 &= ((arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 2]) >= 1);
                arr_46 [i_12] [i_12] [i_0] = 6195;
            }
            var_36 = (min(var_36, (~var_5)));
        }
        var_37 &= 32767;
    }
    #pragma endscop
}
