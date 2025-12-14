/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_2));
                var_14 = ((var_3 ? (9223372036854775786 & 1) : (((arr_1 [i_0 - 4]) ? -126 : -60))));
                var_15 = (min(var_15, ((~(((!(((2483869703 ? 1 : 16083))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_16 = (!-1651119737);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (arr_6 [i_0 - 3] [i_1] [i_0 - 2] [i_3]);
                        arr_10 [i_3] [i_2] [i_1] [i_0] = 110;
                        arr_11 [i_0] [i_0] [i_0 - 2] [i_1] [i_2] [i_3] = ((~(arr_9 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0])));
                        var_18 = (((arr_5 [i_0 + 1]) & (arr_5 [i_0 + 2])));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_19 *= ((~(arr_1 [i_0 - 3])));
                        var_20 = (max(var_20, 0));
                        arr_14 [i_4 - 1] [i_4 - 2] [i_2] [i_1] [i_0] = 400080609;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_6] [i_2] [i_5] [i_6] [i_6] = (arr_13 [i_0 - 1] [i_1] [i_2]);
                            arr_23 [i_0] [i_0] [i_0] [i_0 - 4] [i_0 - 3] [i_6] [i_0 - 3] = (arr_20 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_2] [i_1]);
                            var_21 = (max(var_21, (arr_9 [i_6] [i_5] [i_2] [i_0 + 3])));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_22 = (min(var_22, (arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] [i_7])));
                            arr_27 [i_0 - 1] [i_1] [i_2] [i_5] [i_5] [i_7] = var_5;
                        }
                        arr_28 [i_0 - 3] [i_1] [i_2] [i_5] = ((~(arr_1 [i_0 + 1])));
                    }
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_23 ^= 1;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = (arr_29 [i_0 - 3] [i_1]);
                                arr_39 [i_1] [i_10] [i_8] [i_8] = (max(8114717292756705439, (((max((arr_36 [i_0 + 2] [i_1]), var_5))))));
                            }
                        }
                    }
                    arr_40 [i_0 - 4] [i_1] [i_8] = ((-41 ? ((((~1651119730) <= var_8))) : (~1651119722)));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0 - 2] [i_0] [i_0] |= (max(2415345795, var_0));
                        arr_45 [i_0] [i_0] [i_1] [i_8] [i_8] [i_11] &= ((((((arr_38 [i_0] [i_1] [i_8] [i_0 + 3] [i_8] [i_0 - 2]) ? (arr_38 [i_0 + 3] [i_1] [i_8] [i_0 + 1] [i_11] [i_0]) : var_5))) ? ((1651119738 ? (arr_15 [i_0 - 2]) : (arr_15 [i_0 - 3]))) : (arr_9 [i_0 - 1] [i_8] [i_8] [i_11])));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_25 = 37044;
                            arr_51 [i_13] [i_1] [i_8] [i_12] [i_13] [i_13] = ((~(((((arr_24 [i_13] [i_13] [i_13]) && 106)) ? (arr_12 [i_0 + 3]) : var_8))));
                            var_26 = (max(1029351575, (((arr_36 [i_0 - 4] [i_0]) ? 4721709710548626639 : var_11))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_27 *= (((arr_7 [i_0] [i_1] [i_8] [i_14]) != 13127));
                            var_28 = (((arr_3 [i_0] [i_1] [i_14]) | (arr_6 [i_0 - 4] [i_1] [i_8] [i_12])));
                            arr_54 [i_14] [i_12] [i_14] [i_1] [i_0] = -57;
                            arr_55 [i_14] = (arr_50 [i_1] [i_8] [i_14]);
                        }
                        arr_56 [i_12] [i_8] [i_1] [i_0 - 1] = ((~(~-46)));
                        var_29 = ((~(arr_32 [i_0 - 2] [i_0])));
                        var_30 = (max(var_30, ((((((arr_13 [i_0] [i_1] [i_12]) ? (max(1, (arr_33 [i_12] [i_8] [i_1] [i_0]))) : 1651119749)) >> (((((arr_7 [i_0] [i_1] [i_8] [i_0 - 3]) ? (arr_7 [i_0 + 1] [i_1] [i_8] [i_0 + 2]) : (arr_7 [i_0] [i_1] [i_8] [i_0 - 1]))) - 7200887665466755438)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
