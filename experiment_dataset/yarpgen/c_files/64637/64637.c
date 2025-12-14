/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_8 [i_1] [i_1] = (((arr_3 [9]) / 4039707496137815283));
            var_19 += (51 % 1);
            var_20 = (~126);
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_21 += ((var_18 ? ((-4148075259576382530 ? 1 : -4039707496137815266)) : 4039707496137815265));

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_22 = (min(var_22, (arr_2 [i_3 - 1] [i_2 + 1])));
                var_23 = var_18;
                var_24 = (arr_14 [i_3] [18] [i_0]);
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_18 [i_0] = (((arr_3 [i_0]) / 4039707496137815277));
                var_25 = var_17;
                var_26 = ((255 * (!2147483630)));
                var_27 = -2132897453162687720;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_28 -= var_16;
                var_29 = ((var_14 ? (arr_6 [i_2 + 1] [i_5]) : 1));

                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    var_30 &= 1820010319;
                    var_31 = (arr_13 [i_6 + 1] [i_6] [i_6] [i_6]);
                    var_32 = ((~(arr_17 [i_2 - 1] [i_2 + 1] [i_6 + 1] [i_6 + 1])));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_26 [i_5] [i_5] [i_5] [15] [i_0] [i_5] = ((~(!var_2)));
                    var_33 = (((((1 ? (arr_19 [i_7] [i_5] [i_5] [i_0]) : var_13))) ? -4039707496137815266 : (arr_22 [i_0] [i_2 - 1] [i_5] [i_7])));
                    arr_27 [i_0] [i_0] [i_0] [i_5] = (var_8 % var_1);
                    arr_28 [i_2] [i_5] = 1;
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_34 *= (((arr_3 [i_0]) ? var_15 : 0));
                    arr_31 [i_0] [i_2] [i_2 - 1] [i_5] [17] [i_5] = 0;
                }
            }
            var_35 = ((-(~2)));
        }
        var_36 ^= (0 * 0);
    }
    for (int i_9 = 3; i_9 < 14;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_37 = var_12;
                        var_38 = (min(var_38, var_16));
                        var_39 = (max(44119, ((251 ? (arr_32 [i_9 - 3]) : ((var_4 ? 176 : 1))))));
                    }
                }
            }
        }
        arr_45 [i_9] = var_9;
    }
    var_40 = (min(var_3, (((!(((var_9 << (((-4039707496137815266 + 4039707496137815293) - 17))))))))));
    #pragma endscop
}
