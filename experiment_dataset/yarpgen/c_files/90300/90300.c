/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min((min(((min(var_8, 1))), (min(23269, var_3)))), var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 -= var_4;
                                var_15 |= (min((min(var_11, (max(var_3, var_2)))), ((((var_9 | (arr_7 [i_2] [i_1])))))));
                                var_16 = 42;
                                var_17 = (min(var_11, -var_11));
                            }
                        }
                    }
                    var_18 = (arr_4 [i_0]);
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_19 += (min((min((((-9223372036854775807 - 1) ? (arr_14 [i_5] [i_5]) : (arr_13 [i_5 + 1]))), var_4)), (min(((var_10 ^ (arr_14 [i_5] [i_5]))), (arr_14 [i_5 + 1] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_20 *= (((arr_16 [i_5 - 2] [i_5 + 1] [i_5 - 1]) ? var_8 : (min((-494 - var_5), -var_8))));
                    var_21 = ((((max(var_11, 213))) ? 6897759849638101800 : ((max(var_0, var_0)))));
                }
            }
        }

        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_22 ^= ((-6557 ? (min((min(4756, var_2)), (var_10 >= var_9))) : (~var_8)));
            var_23 = (((max((!30720), ((var_10 << (((arr_19 [i_5] [i_5 + 1] [i_5] [12]) - 9231123534732090746)))))) << (60779 - 60766)));
            var_24 = (!15131063892872189868);
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_25 = ((var_4 && ((((max(var_5, var_2))) && (arr_20 [4] [i_5] [i_9] [i_9])))));
            var_26 |= 58975;
            var_27 = (((((var_10 ? (arr_25 [i_5 - 2]) : (arr_18 [i_5 + 1] [i_9])))) ? (arr_14 [i_5] [1]) : (!var_8)));
            var_28 = ((65535 ? (arr_24 [i_5] [5]) : (((-((16 ? 3 : var_8)))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_29 = (((arr_24 [17] [17]) ? (((arr_13 [i_5]) ? 30720 : (arr_26 [20]))) : (arr_15 [i_5 - 2])));
            var_30 = (var_0 ? (arr_27 [i_5 + 1]) : (30 | 7));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 20;i_12 += 1)
            {
                {
                    var_31 = min(var_7, (((-96 ? (arr_24 [i_5 + 1] [i_5 - 2]) : (arr_24 [i_5 - 1] [i_5 + 1])))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_32 = ((((max(var_0, -494))) ? 0 : var_7));
                                var_33 &= (((((4294967294 ? 22 : 0))) ? 4095 : (arr_23 [i_5 - 2] [i_12 - 1])));
                            }
                        }
                    }
                    var_34 ^= (arr_15 [i_5 + 1]);
                }
            }
        }
        var_35 = ((!((min((arr_29 [i_5 - 2]), 7)))));
    }
    #pragma endscop
}
