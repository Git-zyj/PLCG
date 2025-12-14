/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [20] [i_0] = (arr_2 [i_0]);

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_11 -= (arr_1 [i_0]);
                    var_12 = (max((((arr_3 [i_1 + 1]) ? (arr_3 [i_1 + 1]) : 80)), (arr_3 [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_13 = ((-60 ? var_2 : 3));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_14 = (((arr_10 [i_1 - 1] [i_1] [i_1]) >> (((arr_10 [i_1 - 1] [21] [i_1 - 1]) - 80))));
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_3] [12] = (((arr_12 [i_2 - 1] [i_3] [i_4] [i_4]) ? (arr_6 [i_2] [i_4] [i_4]) : var_9));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_15 = (min(var_15, (arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                            arr_22 [i_5] [i_3] [i_0] [i_1] [17] = 68;
                        }

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_16 = (max(var_16, (arr_0 [i_0])));
                            var_17 -= var_1;
                            var_18 = (~var_1);
                            var_19 = 25;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_20 = 0;
                            var_21 = 1;
                            arr_27 [i_0] [i_3] [i_0] [i_0] = (((arr_1 [i_1]) > 255));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_22 = -77;
                            arr_32 [i_0] [i_0] [13] [i_3] [i_0] [i_2] = (arr_1 [i_1 - 1]);
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_36 [i_3] [i_0] [i_3] [i_3] [i_3] = ((var_5 ? 65533 : var_7));
                            arr_37 [i_3] [i_0] [i_0] [i_0] [i_9] = 76;
                            arr_38 [i_3] [i_9] [i_1] [3] [i_0] = var_2;
                            arr_39 [i_1] [i_1] [11] [i_3] [i_0] [i_1] = ((65 && (arr_26 [i_1] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_1 - 1])));
                        }
                        arr_40 [i_0] [1] [i_0] [4] = ((~(arr_23 [i_2] [i_3] [i_2 + 1] [i_1 + 1] [i_2 + 1])));
                        arr_41 [i_0] [i_1 + 1] = (((arr_29 [i_2] [i_0] [i_0] [i_3] [i_3]) ? (((arr_9 [i_3] [i_2] [21] [21]) ? var_3 : 13610)) : (((arr_30 [i_3] [i_2] [16] [i_1] [i_1] [16] [i_0]) ? (arr_3 [i_1]) : (arr_15 [i_2] [i_0] [i_1])))));
                    }
                    var_23 ^= 55681;
                }
                var_24 -= 125;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                var_25 = var_7;
                var_26 ^= (((max(119, var_9))) ? ((max((23437 * 58), ((13610 * (arr_19 [i_11])))))) : ((-(arr_13 [i_11] [i_10] [11] [i_10] [i_11] [i_11]))));
                arr_46 [i_10] [i_10] [i_11] = (((arr_20 [i_10] [i_10] [i_10] [i_11] [i_10]) ? (arr_20 [i_11] [i_11] [i_11] [i_10] [i_10]) : -60));
                var_27 = (min(((0 ? 205 : 0)), -125));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 12;i_13 += 1)
        {
            {
                var_28 = (min(var_28, (((min(65535, ((var_5 ? 65535 : (arr_31 [i_13] [i_12 + 1] [i_13])))))))));
                var_29 ^= (((arr_15 [i_13] [i_13] [i_13]) ? (arr_50 [i_13]) : (((!(~13))))));
            }
        }
    }
    #pragma endscop
}
