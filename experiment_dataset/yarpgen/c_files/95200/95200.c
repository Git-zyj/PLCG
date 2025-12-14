/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = -1;
        arr_3 [i_0] [i_0] = 1;
        var_20 -= (max(var_6, (~var_4)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = var_2;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((~1) != var_14)))));
                            var_23 = ((var_5 - (arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1])));
                            var_24 = ((~(~3461409470)));
                        }
                    }
                }
            }
            arr_17 [i_1] = (((((arr_12 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) ? var_2 : var_9))) ? (((var_18 ? 1 : 1))) : (var_18 / 4294967295));
        }
        arr_18 [13] [i_1 + 1] = ((((~(arr_12 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]))) / (arr_12 [i_1 + 2] [22] [i_1 - 1] [i_1 + 1] [i_1])));
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_25 = (((arr_20 [i_6 + 1] [i_6]) / var_12));
            var_26 -= ((-1635724801 ? var_13 : 156));
            var_27 = 3955927241;
            arr_26 [i_6] = ((var_2 ? (arr_22 [i_7]) : (~var_14)));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            arr_31 [i_6] [i_6] [i_6] = (((arr_4 [i_6 - 1] [i_8 - 1]) + var_8));
            arr_32 [i_6] [i_8] [i_6] = (~27130);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_28 = ((~((((arr_9 [i_6]) == var_8)))));
                    var_29 = (var_10 || var_10);
                    var_30 = (max(var_30, (((var_5 || (~-97))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_31 *= (arr_11 [i_11] [i_11] [14] [i_11] [i_11] [i_11]);
        var_32 = (min(var_32, ((((~var_11) ^ var_17)))));
        arr_41 [i_11] = ((0 ? 2656210187 : -var_8));
    }
    var_33 += var_4;
    var_34 = -var_13;
    #pragma endscop
}
