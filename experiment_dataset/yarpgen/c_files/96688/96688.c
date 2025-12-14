/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 ^= -7864079455636468431;
        arr_3 [i_0] = (var_10 % (((((arr_2 [i_0]) < var_1)))));
        var_12 *= (arr_0 [15]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 -= var_5;
        arr_6 [i_1] [i_1] |= (arr_4 [1]);
        var_14 = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, 240));
                    arr_12 [i_3] = ((-3785275538109074036 ? var_3 : var_2));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 -= 42705;
                                var_17 ^= (((arr_13 [i_1] [14] [i_3] [i_4] [i_4] [i_5]) | (arr_13 [i_1] [15] [i_1] [i_1] [15] [i_1])));
                                var_18 = (var_0 ? (arr_15 [i_1] [i_1] [i_3] [i_4] [i_5]) : (arr_8 [i_1] [1]));
                                arr_17 [i_1] [i_2] [11] [i_3] [11] [i_2] = (arr_13 [i_1] [1] [1] [i_1] [1] [i_2]);
                                var_19 = (max(var_19, -104));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_20 = var_5;
                        arr_21 [i_1] [0] [i_3] [i_6] = (var_2 && var_10);
                        var_21 = 12208;
                        var_22 |= (3785275538109074014 ? var_5 : -78);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (arr_23 [i_1] [1] [i_3]);
                        arr_24 [i_7] [i_3] [i_3] [0] [i_3] [i_1] = (((arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] [12] [i_1]) - -4110754590801066676));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [i_3] [10] [i_3] = (((var_8 + 9223372036854775807) << (var_3 - 26)));
                            arr_30 [i_1] [i_2] [i_3] [i_3] [i_1] [i_3] [i_8] = (((arr_26 [i_1] [i_7] [i_1] [i_2] [i_1]) ? ((((arr_19 [i_1] [i_3] [i_3] [i_3]) + var_5))) : 1));
                            var_24 = (23 | 0);
                            var_25 = arr_20 [i_1] [i_2] [i_1];
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_34 [i_3] = (((arr_31 [i_3] [i_9] [i_3] [i_3] [0] [i_3]) ? (arr_16 [i_1] [i_3] [i_1] [i_7] [i_9] [i_9] [i_7]) : (arr_31 [i_1] [i_7] [i_3] [i_7] [14] [i_3])));
                            arr_35 [i_1] [17] [15] [i_2] [i_9] [i_3] = (769233495 * 2222912207);
                            var_26 = -var_4;
                            arr_36 [1] [i_9] [i_3] [i_3] [i_1] [i_1] = ((((var_6 ? var_8 : var_7)) + var_1));
                        }
                        var_27 = (~78);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_40 [i_10] [i_10] [i_10] [i_3] = ((var_0 == (arr_25 [i_1] [11] [14] [i_2] [i_3] [i_10] [i_10])));
                        var_28 ^= (arr_8 [i_10] [i_1]);
                        var_29 = (!-1373449338);
                        arr_41 [i_3] [i_2] [i_3] [i_2] = ((-30075 ? 8329603110695502766 : var_5));
                    }
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            var_30 -= (((var_5 ^ (arr_44 [i_2] [i_2] [i_2]))));
                            var_31 *= ((-(arr_27 [i_1] [1] [1] [1] [i_12])));
                            arr_47 [i_2] [i_2] [i_3] [i_3] [i_12] &= (((-2 / var_8) ? (~9917328929388428106) : var_9));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_32 = 0;
                            var_33 -= (var_10 <= var_2);
                            var_34 ^= (((arr_37 [i_1] [i_2] [i_2] [i_2]) >> (((arr_37 [i_11] [i_11] [i_2] [i_11 - 1]) - 629873506))));
                        }
                        var_35 = ((~(((arr_10 [i_3]) ? (arr_39 [0] [0] [i_3] [16]) : (arr_9 [17] [i_1] [i_2] [i_1])))));
                        var_36 ^= (65491 ? (arr_31 [2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_20 [i_1] [i_2] [i_1]));
                    }
                }
            }
        }
    }
    var_37 = 1;
    #pragma endscop
}
