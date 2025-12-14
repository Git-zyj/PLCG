/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (~2147483631);
                        arr_12 [i_0] [i_0] [i_2] [1] = ((((((~2147483635) | (var_0 / 12)))) ? (((-(arr_10 [3] [i_1 - 1] [3] [i_3])))) : (min((min(9223372036854775802, 128)), var_1))));
                        arr_13 [i_0] [i_1] [4] [i_2] [i_0] = 1;
                        arr_14 [i_3] [i_2] [i_1] [i_0] [i_0] = 2175799853;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] [7] [i_1] [1] [i_2] [i_4] &= (~2928243350600338711);

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_16 = (min(var_16, (~1)));
                            var_17 = (((~-2147483644) | ((var_4 ? var_12 : ((((!(arr_6 [i_1] [i_1])))))))));
                            var_18 = (((var_11 ? -var_9 : (arr_6 [i_1 + 1] [i_5]))));
                        }
                        var_19 ^= (((((arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 2]) ? var_7 : (arr_10 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 + 1]))) - -var_10));
                        var_20 = (arr_4 [i_0] [i_1 - 1] [i_2]);
                        var_21 = -24;
                    }
                    var_22 ^= ((-(((var_3 < (arr_8 [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                    arr_21 [i_0] [i_0] [i_1 - 2] [i_2] = (max(((max((max(18, 1)), ((((arr_2 [i_1] [i_2]) != var_12)))))), 2670602720334431383));
                }
            }
        }
        var_23 *= (!(((~((var_4 ? (arr_3 [i_0] [i_0]) : var_3))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_26 [i_6 - 1] = (((((~(arr_25 [i_6])))) ? ((var_6 ? 2147483631 : (arr_25 [i_6 + 2]))) : 255));
        var_24 = -var_8;
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_25 *= (arr_27 [i_7]);
        var_26 = ((((max(var_8, (arr_28 [i_7] [11])))) ? (arr_28 [i_7] [i_7]) : ((-(((arr_28 [2] [i_7]) ? (arr_27 [i_7]) : var_0))))));
        var_27 = (max(var_27, (((~((~(((arr_27 [i_7]) ? (arr_28 [i_7] [i_7]) : var_11)))))))));
        var_28 = (min(var_28, ((max(2928243350600338686, (((29663 ? 2147483638 : 1))))))));
    }
    var_29 = -2851;
    #pragma endscop
}
