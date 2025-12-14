/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = var_17;
        var_19 = ((var_2 ? var_9 : (((max(var_7, var_4))))));
        var_20 = (max(var_15, (((((var_1 ? var_4 : var_16))) ? var_7 : (~var_8)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (!-var_2);
            arr_9 [i_2] [i_1 + 1] [1] = (((max(var_11, var_4))));
            var_21 = ((-((2103822509291002880 ? 16 : 52612))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_1 - 1] [i_1 - 1] = ((var_12 ? var_1 : ((min(var_17, var_17)))));
            arr_15 [i_1] [i_1] = (((~var_8) ? (((~((max(var_4, var_4)))))) : ((-524288 ? 1593211679 : 52612))));
        }
        arr_16 [i_1 + 1] [i_1] = ((((max(3633607105180814012, (max(-1, 3633607105180814028))))) ? (((~((var_12 ? var_8 : var_14))))) : (min(var_13, (~var_6)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] = (((max(((max(var_12, var_12))), var_8))) ? var_8 : var_4);
        var_22 = (min(var_22, (((((((var_11 ? var_5 : var_7)))) ? (~0) : (((((var_3 ? var_15 : var_14))) ? var_12 : -var_5)))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_23 = (((~var_6) ? var_15 : var_14));
        var_24 = ((1 ? 2147483647 : -27465));

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_32 [i_7] [16] [i_6] [i_7] = ((-(((max(var_15, var_12))))));
                        var_25 = (((((~(max(var_6, var_14))))) ? var_8 : var_1));
                    }
                }
            }
            var_26 = (min(var_4, (max(var_5, var_0))));
            arr_33 [i_5] [i_5] = ((~((((max(var_4, var_7))) ? var_10 : (!var_8)))));
        }
        arr_34 [i_5] = (~var_14);
        arr_35 [0] |= (min(var_7, var_15));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_27 = var_8;
                        arr_46 [i_9] [i_10] [i_11] [i_12] = ((~((var_15 ? var_10 : var_6))));
                    }
                    arr_47 [i_11] [i_10] [i_9] = (max((((-(min(var_14, var_4))))), (max((((var_13 ? var_14 : var_16))), var_7))));
                    var_28 *= (~var_12);
                }
            }
        }
    }
    #pragma endscop
}
