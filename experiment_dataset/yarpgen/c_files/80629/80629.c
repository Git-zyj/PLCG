/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) >> (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = var_1;
        var_21 *= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) - ((1 + (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 += (min(18446744073709551615, 140));
                    arr_13 [2] [i_2] = var_16;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_23 = (arr_19 [i_4] [2] [i_4]);
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_6] [1] = ((((((arr_16 [i_7]) ? (arr_16 [i_6]) : (arr_20 [i_4])))) ? (((((((12854827661123943836 ? var_1 : var_18))) && (arr_23 [5] [i_4]))))) : (((arr_22 [i_4] [i_5] [i_6] [i_7]) ? (arr_20 [i_4]) : var_1))));
                    }
                    var_24 = (arr_23 [i_5] [i_5]);
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((var_5 / ((((((arr_24 [i_4]) ? (arr_20 [i_4]) : var_13))))))))));
                                var_26 = (min(var_26, (arr_30 [i_8] [1] [i_8])));
                            }
                        }
                    }
                    var_27 &= 1;
                    arr_33 [10] [i_5] [i_5] [i_8] = (((((arr_17 [i_5] [i_8]) ? (arr_17 [i_4] [i_4]) : var_13))) * (var_13 + var_2));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_42 [i_11] [i_12] = var_18;
                                var_28 = (512 <= 18446744073709551615);
                            }
                        }
                    }
                }
                var_29 = (min(var_29, (~-8195134848479753580)));
                var_30 = (max(((var_19 | (var_10 & 3461283610))), (((((var_14 ? (arr_15 [i_5]) : 0)) | ((max(var_19, (arr_29 [16] [8] [i_5] [i_5])))))))));
                var_31 = arr_24 [i_4];
            }
        }
    }
    var_32 *= var_17;
    var_33 = (-103 > var_10);
    #pragma endscop
}
